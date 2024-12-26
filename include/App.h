#pragma once

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
    SDLApp(const char* title, int WIN_WIDTH, int WIN_HEIGHT)
        : window(nullptr), renderer(nullptr), isRunning(false) {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
            return;
        }

        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIN_WIDTH, WIN_HEIGHT, SDL_WINDOW_SHOWN);
        if (!window) {
            std::cerr << "Window creation failed: " << SDL_GetError() << std::endl;
            SDL_Quit();
            return;
        }

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if (!renderer) {
            std::cerr << "Renderer creation failed: " << SDL_GetError() << std::endl;
            SDL_DestroyWindow(window);
            SDL_Quit();
            return;
        }

        isRunning = true;
        lastTime = std::chrono::high_resolution_clock::now();
    }

    ~SDLApp() {
        if (renderer) SDL_DestroyRenderer(renderer);
        if (window) SDL_DestroyWindow(window);
        SDL_Quit();
    }

    void run() {
        SDL_Event event;

        while (isRunning) {

            auto currentTime = std::chrono::high_resolution_clock::now();
            std::chrono::duration<float> deltaTime = currentTime - lastTime;
            lastTime = currentTime;

            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT) {
                    std::cout << "SDL_QUIT event detected!" << std::endl;
                    isRunning = false;
                    break;
                }
                eventHandler.handleEvents(event);
                inputHandler.handleInput(event, model, deltaTime.count());
            }

            render();
            SDL_Delay(16);
        }
    }

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    vector<Vec3> model = read3DCoordinates(majom);
    //vector<Vec3> wallpaper = read3DCoordinates(wallpaper1);

    EventHandler eventHandler;
    InputHandler inputHandler;

    std::chrono::high_resolution_clock::time_point lastTime;

   //  _____  ______ _   _ _____  ______ _____
   // |  __ \|  ____| \ | |  __ \|  ____|  __ \
   // | |__) | |__  |  \| | |  | | |__  | |__) |
   // |  _  /|  __| | . ` | |  | |  __| |  _  /
   // | | \ \| |____| |\  | |__| | |____| | \ \
   // |_|  \_\______|_| \_|_____/|______|_|  \_\
   //
    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        vector<SDL_Point> projectedModel;
        vector<SDL_Point> wallpaperModel;

        if (inputHandler.getProjectionType()) {
           projectedModel = ortogonalProjection(model);
        } else {
            projectedModel = perspectiveProjection(model);
        }
       // wallpaperModel = perspectiveProjection(wallpaper);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderDrawPoints(renderer, projectedModel.data(), projectedModel.size());
        SDL_SetRenderDrawColor(renderer, 0, 60, 0, 255);
        //SDL_RenderDrawPoints(renderer, wallpaperModel.data(), wallpaperModel.size());

        SDL_RenderPresent(renderer);
    }
};


