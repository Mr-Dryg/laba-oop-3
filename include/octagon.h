#pragma once
#include <iostream>
#include "figure.h"


class Octagon(Figure)
{
    friend std::ostream& operator<<(std::ostream& out, const Point& point);

private:
    int side_length;
    double area;

protected:
    Octagon() = default;
    Octagon(int side_length) : side_length(side_length), area(0.0) {};

public:
    virtual ~Octagon() = default;
    
    virtual std::array<int, 2> geometric_center() const = 0;
    virtual double operator double() const = 0;
}

inline std::ostream& operator<<(std::ostream& os, const Octagon& octagon)
{
    os << "Octagon " << octagon.side_length;
    return os;
}
