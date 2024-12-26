#include <SDL.h>
#include <iostream>
#include <emscripten.h>

#include "App.h"

using namespace std;

int main(int argc, char* argv[]) {

    SDLApp app("LinearAlgebra", WIN_WIDTH, WIN_HEIGHT);
    app.run();
    return 0;

}

