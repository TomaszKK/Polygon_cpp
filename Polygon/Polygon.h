#include <iostream>
#include <exception>
#include "Point.h"
using namespace std;

class INDEX_OUT_OF_BOUNDS_EXCEPITON{};

class Polygon{
    private:
        Point *dataPoints;
        int newPoints;
    public:
        Polygon();
        ~Polygon();
        Polygon(const Polygon &polygon);
        Polygon& add(const Point &point);
        friend ostream& operator<<(ostream& out, const Polygon& polygon);   
        Polygon& operator=(const Polygon &polygon); 
        Polygon& operator+(const Point &point);
        Point& operator[](int index);
        
                
};

