#pragma once
#include "Shape.h"

class EllipseShape : public Shape
{
protected:
    RECT points;
public:
    EllipseShape(
        const unsigned short p1_x, 
        const unsigned short p1_y, 
        const unsigned short p2_x, 
        const unsigned short p2_y
    );

    int getBoxWidth()const;
    int getBoxHeight()const;

    double virtual getArea()const override;
    double virtual getPermeter()const override;

    void virtual drawShape(HDC& hdc)const override;
};

