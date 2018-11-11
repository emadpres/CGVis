#include "Point.h"
#include <iostream>
using namespace CG;

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point& Point::operator=(const Point& rhs) {
    if(&rhs!=this) {
        this->x = rhs.x;
        this->y = rhs.y;
    }
    return *this;
}

Point Point::operator+(const Point& rhs)
{
    Point res(this->x+rhs.x, this->y+rhs.y);
    return res;
}

Point& Point::operator+=(const Point& rhs)
{
    this->x += rhs.x;
    this->y += rhs.y;
    return *this;
}

bool Point::operator==(const Point& rhs) const
{
    return (x==rhs.x&&y==rhs.y);
}


void Point::Print() const {
    std::cout<<"Point: "<<x<<","<<y<<std::endl;
}


