#pragma once
#include <array>

class Figure
{
private:
    int side_length;
    double area;

protected:
    Figure() = default;
    Figure(int side_length) : side_length(side_length), area(0.0) {};

public:
    virtual ~Figure() = default;
    
    virtual std::array<int, 2> geometric_center() const = 0;
    virtual double operator double() const = 0;
}