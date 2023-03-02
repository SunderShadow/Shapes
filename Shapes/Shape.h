#pragma once
#include <windows.h>
#define _USE_MATH_DEFINES
#include <cmath>

class Shape
{
protected:
    COLORREF color = RGB(255, 255, 255);
public:
    void setColor(COLORREF color);

    double virtual getArea()const = 0;
    double virtual getPermeter()const = 0;

    void virtual draw(HDC& hdc)const;
    void virtual drawShape(HDC& hdc)const = 0;
};

