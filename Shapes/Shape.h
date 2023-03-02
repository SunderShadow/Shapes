#pragma once
#include <windows.h>

class Shape
{
protected:
    COLORREF color = RGB(255, 255, 255);
public:
    void setColor(COLORREF color);

    void virtual draw(HDC& hdc)const = 0;
};

