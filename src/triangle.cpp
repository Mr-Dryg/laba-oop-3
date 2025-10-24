#include "../include/triangle.h"
#include <cmath>

Triangle::Triangle() : Triangle(1.0) {}

Triangle::Triangle(double side_length) : Triangle(side_length, {0.0, 0.0}) {}

Triangle::Triangle(double side_length, std::array<double, 2> center) : Figure(NUM_TRIANGLE_VERTEXES, side_length, center)
{
    vertices = calculate_vertexes();
}

Triangle::operator double() const
{
    return std::sqrt(3.0) / 4.0 * side_length;
}
