#pragma once
#include <SDL_rect.h>
#include <vector>
#include <iostream>
#include <cmath>

#include "GlobalVariables.h"
#include "VertexReader.h"
#include "MatrixClass.h"

using namespace std;

inline vector<SDL_Point> ortogonalProjection(const vector<Vec3>& coordinates3D, double scale = 60.0, int centerX = WIN_CENTER, int centerY = WIN_CENTER) {
    vector<SDL_Point> points2D;
    points2D.reserve(coordinates3D.size());

    for (const auto& coord : coordinates3D) {
        // Isometric projection:
        // x' = x cos(30°) - y cos(30°)
        // y' = x sin(30°) + y sin(30°) - z
        const double angle30 = M_PI / 6.0;  // 30 degrees in radians

        double projX = (coord.x * cos(angle30) - coord.y * cos(angle30)) * scale;
        double projY = (coord.x * sin(angle30) + coord.y * sin(angle30) - coord.z) * scale;

        int x = static_cast<int>(projX + centerX);
        int y = static_cast<int>(projY + centerY);

        points2D.push_back({x, y});
    }

    return points2D;
}
vector<SDL_Point> perspectiveProjection(const vector<Vec3>& coordinates3D) {
    vector<SDL_Point> points2D;

    const float FOV = 90.0f;
    const float aspectRatio = 16.0f / 9.0f;
    const float nearPlane = 0.1f;
    const float farPlane = 1000.0f;
    // Camera position - moved back on Z axis
    const float cameraZ = -5.0f;  // Move camera back 5 units

    // Calculate projection constants
    const float fovRad = 1.0f / tanf((FOV * 0.5f) * M_PI / 180.0f);

    const float projectionMatrix[4][4] = {
        {aspectRatio * fovRad, 0, 0, 0},
        {0, fovRad, 0, 0},
        {0, 0, farPlane / (farPlane - nearPlane), 1},
        {0, 0, (-farPlane * nearPlane) / (farPlane - nearPlane), 0}
    };

    for (const Vec3& point3D : coordinates3D) {
        // Translate points relative to camera position
        float x = point3D.x;
        float y = point3D.y;
        float z = point3D.z - cameraZ;  // Offset Z by camera position

        float w = z;
        float projected_x = x * projectionMatrix[0][0];
        float projected_y = y * projectionMatrix[1][1];
      //  float projected_z = z * projectionMatrix[2][2] + projectionMatrix[2][3];

        // Perspective divide
        if (w != 0.0f) {
            projected_x /= w;
            projected_y /= w;
        }

        // Scale to screen space
        projected_x = (projected_x + 1.0f) * 0.5f * WIN_WIDTH;
        projected_y = (1.0f - (projected_y + 1.0f) * 0.5f) * WIN_HEIGHT;

        SDL_Point point2D = {
            static_cast<int>(projected_x),
            static_cast<int>(projected_y)
        };

        points2D.push_back(point2D);
    }

    return points2D;
}