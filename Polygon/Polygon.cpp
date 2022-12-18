#include "Polygon.h"
#include <iostream>

using namespace std;
Polygon::Polygon(){
    dataPoints = NULL;
    newPoints = 0;
}

Polygon::~Polygon(){
    delete[] dataPoints;
}

Polygon::Polygon(const Polygon &polygon){
    dataPoints = new Point[polygon.newPoints];
    newPoints = polygon.newPoints;
    for(int i = 0; i < newPoints; i++){
        dataPoints[i] = polygon.dataPoints[i];
    }
}

Polygon& Polygon::add(const Point &point){
    Point *temp = new Point[newPoints + 1];
    for(int i = 0; i < newPoints; i++){
        temp[i] = dataPoints[i];
    }
    temp[newPoints] = point;
    delete[] dataPoints;
    dataPoints = temp;
    newPoints++;
    return *this;
}

ostream& operator<<(ostream& out, const Polygon& polygon){
    for(int i = 0; i < polygon.newPoints; i++){
        out << polygon.dataPoints[i] << endl;
    }
    return out;
}

Polygon& Polygon::operator=(const Polygon &polygon){
    if(this != &polygon){
        delete[] dataPoints;
        dataPoints = new Point[polygon.newPoints];
        newPoints = polygon.newPoints;
        for(int i = 0; i < newPoints; i++){
            dataPoints[i] = polygon.dataPoints[i];
        }
    }
    return *this;
}

Polygon& Polygon::operator+(const Point &point){
    for(int i = 0; i < newPoints; i++){
        dataPoints[i].x += point.x;
        dataPoints[i].y += point.y;
    }
    return *this;
}

Point& Polygon::operator[](int index){
    if(index < 0 || index >= newPoints){
        throw INDEX_OUT_OF_BOUNDS_EXCEPITON();
    }
    return dataPoints[index];
}




