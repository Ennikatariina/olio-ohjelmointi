#include "rectangle.h"

void Rectagle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectagle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectagle::getArea()
{
    double area= width * height;
    return area;
}

double Rectagle::getCircum()
{
    double circuit = 2 * (width + height);
    return circuit;
}

Rectagle::Rectagle() {}
