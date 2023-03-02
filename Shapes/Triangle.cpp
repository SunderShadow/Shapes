#include "Triangle.h"

TriangleShape::TriangleShape(
    const unsigned short p1_x,
    const unsigned short p1_y,
    const unsigned short p2_x,
    const unsigned short p2_y,
    const unsigned short p3_x,
    const unsigned short p3_y
)
{
    this->points[0].x = p1_x;
    this->points[0].y = p1_y;

    this->points[1].x = p2_x;
    this->points[1].y = p2_y;
    
    this->points[2].x = p3_x;
    this->points[2].y = p3_y;
}

double TriangleShape::getArea()const
{
    // Find formula and Implement
    return 0.;
}

double TriangleShape::getPermeter()const
{
    // Find formula and Implement
    return 0.;
}

void TriangleShape::drawShape(HDC& hdc)const
{
    Polygon(hdc, this->points, 3);
}