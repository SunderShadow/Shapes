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

void TriangleShape::draw(HDC& hdc)const
{
    COLORREF prevColor = SetDCBrushColor(hdc, this->color);
    Polygon(hdc, this->points, 3);
    SetDCBrushColor(hdc, prevColor);
}