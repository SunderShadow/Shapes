#pragma once
#include "Shape.h"

class RectangleShape : protected Shape
{
protected:
    RECT points;
public:
    RectangleShape(
        const unsigned short p1_x,
        const unsigned short p1_y,
        const unsigned short p2_x,
        const unsigned short p2_y
    );

    int getAreaSize();
    int getPerimeter();

    void virtual draw(HDC& hdc)const override;
};

