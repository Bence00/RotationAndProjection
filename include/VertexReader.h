#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <SDL.h>

#include "GlobalVariables.h"
#include "MatrixClass.h"

using namespace std;

vector<SDL_Point> read2DCoordinates(const string& filename) {
    vector<SDL_Point> coordinates;  // A koordináták tárolása
    ifstream file(filename);        // Fájl megnyitása

    if (!file.is_open()) {
        cerr << "Hiba a fájl megnyitásakor!" << endl;
        return coordinates;  // Ha nem sikerült megnyitni a fájlt, üres vektort adunk vissza
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        int x = 0, y = 0;

        // A sor feldolgozása, ahol a koordináták vesszővel elválasztva vannak
        if (getline(ss, token, ',')) {
            x = static_cast<int>(stod(token) * MODEL_SCALE + WIN_CENTER);  // Az x koordináta
        }
        if (getline(ss, token, ',')) {
            y = static_cast<int>(stod(token) * MODEL_SCALE + WIN_CENTER);  // Az y koordináta
        }
        // SDL_Point hozzáadása a vektorhoz
        coordinates.push_back({x, y});
    }

    file.close();  // Fájl bezárása
    return coordinates;  // A beolvasott koordináták visszaadása
}

vector<Vec3> read3DCoordinates(const string& filename) {
    vector<Vec3> coordinates;  // A koordináták tárolása
    ifstream file(filename);   // Fájl megnyitása

    if (!file.is_open()) {
        cerr << "Hiba a fájl megnyitásakor!" << endl;
        return coordinates;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        double x = 0, y = 0, z = 0;

        if (getline(ss, token, ',')) {
            x = stod(token);
        }
        if (getline(ss, token, ',')) {
            y = stod(token);
        }
        if (getline(ss, token, ',')) {
            z = stod(token);
        }

        coordinates.push_back(Vec3(x, y, z));
    }

    file.close();
    return coordinates;
}