#pragma once

#include <SDL.h>

class EventHandler {
public:
    EventHandler() : isRunning(true) {}

    bool isRunning;  // Az alkalmazás futásának állapotát figyeljük

    void handleEvents(SDL_Event& event) {
        // Itt nem ciklikusan kezeljük az eseményeket, hanem egy-egy esemény feldolgozásával
        if (event.type == SDL_QUIT) {
            isRunning = false;
        }
        else if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_ESCAPE) {
                isRunning = false;  // Kilépés az ESC gombbal
                SDL_Event event = { SDL_QUIT };
                SDL_PushEvent(&event);
            }
        }
    }
};
