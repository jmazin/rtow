#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

double linear_to_gamma(double linear_component)
{
    return sqrt(linear_component);
}

void write_color(std::ostream &out, color pixel_color) {
    // Write the translated [0,255] value of each color component.
    static const interval intensity(0.000, 0.999);
    out << static_cast<int>(256 * intensity.clamp(linear_to_gamma(pixel_color.x()))) << ' '
        << static_cast<int>(256 * intensity.clamp(linear_to_gamma(pixel_color.y()))) << ' '
        << static_cast<int>(256 * intensity.clamp(linear_to_gamma(pixel_color.z()))) << '\n';
}

#endif