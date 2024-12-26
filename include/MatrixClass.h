#pragma once
#include <vector>

using Matrix3x3 = std::vector<std::vector<double>>;
struct Pixel {

    int x, y;
    Uint8 r, g, b, a;
};

struct Vec3 {
    double x, y, z;
    Vec3(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
};
