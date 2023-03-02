#pragma once
#include "Shape.h"

class RectangleShape : public Shape
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

    int getWidth()const;
    int getHeight()const;

    double getArea()const override;
    double getPermeter()const override;

    void drawShape(HDC& hdc)const override;
};

