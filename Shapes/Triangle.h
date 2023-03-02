#pragma once
#include "Shape.h"

class TriangleShape : public Shape
{
protected:
    POINT points[3];
public:
    TriangleShape(
        const unsigned short p1_x,
        const unsigned short p1_y,
        const unsigned short p2_x,
        const unsigned short p2_y,
        const unsigned short p3_x,
        const unsigned short p3_y
    );

    double virtual getArea()const override;
    double virtual getPermeter()const override;

    void virtual drawShape(HDC& hdc)const override;
};

