#pragma once
#include <array>
#include "figure.h"

#define NUM_TRIANGLE_VERTEXES 3

class Triangle: public Figure
{
protected:
    int num_vertexes = NUM_TRIANGLE_VERTEXES;

public:
    Triangle();
    Triangle(double side_length);
    Triangle(double side_length, std::array<double, 2> center);
    
    ~Triangle() = default;

    operator double() const override;
};

