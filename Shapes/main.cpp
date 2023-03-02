#include <iostream>
#include <windows.h>

#include "Triangle.h"
#include "Rectangle.h"
#include "Ellipse.h"

int main()
{
    // Shape Offset
    const int X_OFFSET    = 200;
    const int Y_OFFSET    = 100;

    // Shape size
    const int SHAPE_SIZE  = 100;

    // Triangle coords
    const int TRIANGLE_X  = 0;
    const int TRIANGLE_Y  = 0;

    // Rectangle coords
    const int RECTANGLE_X = TRIANGLE_X + 200;
    const int RECTANGLE_Y = 0;

    // Polygon coords
    const int POLYGON_X   = RECTANGLE_X + 200;
    const int POLYGON_Y   = 0;
    
    RectangleShape rec(
        X_OFFSET + RECTANGLE_X, 
        Y_OFFSET + RECTANGLE_Y,
        X_OFFSET + RECTANGLE_X + SHAPE_SIZE, 
        Y_OFFSET + RECTANGLE_Y + SHAPE_SIZE
    );

    TriangleShape tgl(
        X_OFFSET + TRIANGLE_X, 
        Y_OFFSET + TRIANGLE_Y,
        X_OFFSET + TRIANGLE_X + SHAPE_SIZE, 
        Y_OFFSET + 0,
        X_OFFSET + TRIANGLE_X,
        Y_OFFSET + TRIANGLE_Y + SHAPE_SIZE
    );

    EllipseShape ellipse(
        X_OFFSET + POLYGON_X,
        Y_OFFSET + POLYGON_Y,
        X_OFFSET + POLYGON_X + SHAPE_SIZE,
        Y_OFFSET + POLYGON_Y + SHAPE_SIZE
    );
    
    // Windows GDI init
    HWND consoleWindow = GetConsoleWindow();
    HDC consoleDC = GetDC(consoleWindow);
    COLORREF color = RGB(255, 255, 255);

    tgl.setColor(RGB(255, 0, 0));
    rec.setColor(RGB(255, 255, 0));
    ellipse.setColor(RGB(0, 255, 0));

    // Draw section
    tgl.draw(consoleDC);
    rec.draw(consoleDC);
    ellipse.draw(consoleDC);

    // Pause
    std::cin.ignore();
    return 0;
}