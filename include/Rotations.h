#pragma once

#include "SDL.h"
#include <math.h>
#include "MatrixClass.h"

using namespace std;

inline vector<Vec3> Rotation(const vector<Vec3>& coordinates3D, double theta, int dir) {
    vector<Vec3> new3DPoints;


    vector<Matrix3x3> X_Rotation_Matrix = {{
            {1,         0,            0},
            {0,cos(theta),  -sin(theta)},
            {0,sin(theta),   cos(theta)}
    },{
            {cos(theta),  0, sin(theta)},
            {0,           1,          0},
            {-sin(theta), 0, cos(theta)}
    },{
            {cos(theta), -sin(theta), 0},
            {sin(theta),  cos(theta), 0},
            {0,           0,          1}
    }};




    for (const auto& point : coordinates3D) {
        double newX = X_Rotation_Matrix[dir][0][0] * point.x + X_Rotation_Matrix[dir][0][1] * point.y + X_Rotation_Matrix[dir][0][2] * point.z;
        double newY = X_Rotation_Matrix[dir][1][0] * point.x + X_Rotation_Matrix[dir][1][1] * point.y + X_Rotation_Matrix[dir][1][2] * point.z;
        double newZ = X_Rotation_Matrix[dir][2][0] * point.x + X_Rotation_Matrix[dir][2][1] * point.y + X_Rotation_Matrix[dir][2][2] * point.z;

        new3DPoints.push_back({newX, newY, newZ});
    }

    return new3DPoints;
}
