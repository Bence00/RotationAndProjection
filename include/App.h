#include <emscripten.h>
#include <SDL.h>
#include <iostream>
#include "EventHandler.h"
#include "InputHandler.h"
#include "Projections.h"
#include "GlobalVariables.h"
#include "VertexReader.h"
#include <chrono>

class SDLApp {
public:
    static SDLApp* instance;

    SDLApp(const char* title, int WIN_WIDTH, int WIN_HEIGHT)
        : window(nullptr), renderer(nullptr), isRunning(false) {
        instance = this;  // Store instance for static callback

        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
            return;
        }

        SDL_CreateWindowAndRenderer(WIN_WIDTH, WIN_HEIGHT, SDL_WINDOW_SHOWN, &window, &renderer);
        if (!window || !renderer) {
            std::cerr << "Window/Renderer creation failed: " << SDL_GetError() << std::endl;
            SDL_Quit();
            return;
        }

        isRunning = true;
        lastTime = std::chrono::high_resolution_clock::now();

        // Initialize your model here
       // model = read3DCoordinates(majom1);
    }

    ~SDLApp() {
        if (renderer) SDL_DestroyRenderer(renderer);
        if (window) SDL_DestroyWindow(window);
        SDL_Quit();
    }

    static void loop_callback(void* arg) {
        instance->main_loop();
    }

    void run() {
        // Set up the Emscripten main loop
        emscripten_set_main_loop_arg(loop_callback, nullptr, 0, 1);
    }

    void main_loop() {
        SDL_Event event;

        auto currentTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> deltaTime = currentTime - lastTime;
        lastTime = currentTime;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                std::cout << "SDL_QUIT event detected!" << std::endl;
                emscripten_cancel_main_loop();
                isRunning = false;
                return;
            }
            eventHandler.handleEvents(event);
            inputHandler.handleInput(event, model_majom, deltaTime.count());
        }

        render();
    }

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    EventHandler eventHandler;
    InputHandler inputHandler;

    std::chrono::high_resolution_clock::time_point lastTime;

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        vector<SDL_Point> projectedModel;

        if (inputHandler.getProjectionType()) {
            projectedModel = ortogonalProjection(model_majom);
        } else {
            projectedModel = perspectiveProjection(model_majom);
        }

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

        SDL_RenderDrawPoints(renderer, projectedModel.data(), projectedModel.size());

        SDL_RenderPresent(renderer);
    }
};

// Initialize static member
SDLApp* SDLApp::instance = nullptr;