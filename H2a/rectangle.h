#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectagle
{
private:
    double width;
    double height;
public:
    Rectagle();
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double getArea();
    double getCircum();

};

#endif // RECTANGLE_H
