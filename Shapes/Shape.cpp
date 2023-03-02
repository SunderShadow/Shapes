#include "Shape.h"

void Shape::setColor(COLORREF color)
{
    this->color = color;
}

void Shape::draw(HDC& hdc)const
{
    HBRUSH hBrush = CreateSolidBrush(this->color);
    SelectObject(hdc, hBrush);

    this->drawShape(hdc);
    DeleteObject(hBrush);
}