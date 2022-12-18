#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(float x, float y){
    this->x = x;
    this->y = y;
}

Point::~Point(){};

ostream& operator<<(ostream& out, const Point& point){
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

