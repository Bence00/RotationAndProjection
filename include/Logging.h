#include <windows.h>
#include <iostream>
#include <fstream>

void RedirectIOToConsole() {
    // Allocate a console
    AllocConsole();

    // Redirect stdout to the console
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);

    // Redirect stdin to the console
    freopen_s(&fp, "CONIN$", "r", stdin);

    // Redirect stderr to the console
    freopen_s(&fp, "CONOUT$", "w", stderr);

    // Sync C++ streams with the C standard I/O
    std::ios::sync_with_stdio(true);

    std::cout << "Console redirected!" << std::endl;
}
