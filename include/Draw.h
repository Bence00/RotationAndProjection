#pragma once
// ______ ____  _      ____   _____
// |  ____/ __ \| |    / __ \ / ____|
// | |__ | |  | | |   | |  | | (___
// |  __|| |  | | |   | |  | |\___ \
// | |   | |__| | |___| |__| |____) |
// |_|    \____/|______\____/|_____/
//
#include "GlobalVariables.h"

void DrawPoints(SDL_Renderer* renderer, const std::vector<std::vector<double>>& points) {
    for (size_t i = 0; i < points.size(); ++i) {
        // Pontokat rajzolunk ki az SDL_RenderDrawPoint segítségével
        SDL_RenderDrawPoint(
            renderer,
            static_cast<int>(WIN_CENTER + points[i][0]),  // X koordináta
            static_cast<int>(WIN_CENTER + points[i][1])   // Y koordináta
        );
    }
}

