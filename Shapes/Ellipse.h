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

    void virtual drawShape(HDC& hdc)const override;
};

