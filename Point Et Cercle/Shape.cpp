#include "Shape.h"

Geo::Shape::Shape()
{
}

double Geo::Shape::circumference() const
{
    return 0.0;
}

double Geo::Shape::area() const
{
    return 0.0;
}

bool Geo::Shape::Appartien(const Point&) const
{
    return false;
}
