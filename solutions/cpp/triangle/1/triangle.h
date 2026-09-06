#pragma once
#include<stdexcept>

namespace triangle {

    enum flavor {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double a, double b, double c);
}  // namespace triangle
