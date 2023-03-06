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
    const int TRIANGLE_X  = X_OFFSET;
    const int TRIANGLE_Y  = Y_OFFSET;

    // Rectangle coords
    const int RECTANGLE_X = TRIANGLE_X + 200;
    const int RECTANGLE_Y = TRIANGLE_Y;

    // Polygon coords
    const int POLYGON_X   = RECTANGLE_X + 200;
    const int POLYGON_Y   = RECTANGLE_Y;
    
    RectangleShape rec(
        RECTANGLE_X, 
        RECTANGLE_Y,
        RECTANGLE_X + SHAPE_SIZE, 
        RECTANGLE_Y + SHAPE_SIZE
    );

    TriangleShape tgl(
        // Left top
        TRIANGLE_X, 
        TRIANGLE_Y,
        
        // Right top
        TRIANGLE_X + SHAPE_SIZE, 
        TRIANGLE_Y,

        // Left bottom
        TRIANGLE_X,
        TRIANGLE_Y + SHAPE_SIZE
    );

    EllipseShape ellipse(
        POLYGON_X,
        POLYGON_Y,
        POLYGON_X + SHAPE_SIZE,
        POLYGON_Y + SHAPE_SIZE
    );
    
    // Windows GDI init
    HWND consoleWindow = GetConsoleWindow();
    HDC consoleDC      = GetDC(consoleWindow);
    COLORREF color     = RGB(255, 255, 255);

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