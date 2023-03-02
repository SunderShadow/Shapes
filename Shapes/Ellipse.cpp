#include "Ellipse.h"

EllipseShape::EllipseShape(
    const unsigned short p1_x, 
    const unsigned short p1_y, 
    const unsigned short p2_x, 
    const unsigned short p2_y
)
{
    this->points.left = p1_x;
    this->points.top = p1_y;
    this->points.right = p2_x;
    this->points.bottom = p2_y;
}

void EllipseShape::drawShape(HDC& hdc)const
{
    Ellipse(hdc, this->points.left, this->points.top, this->points.right, this->points.bottom);
}