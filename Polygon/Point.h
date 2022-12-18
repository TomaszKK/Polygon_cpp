#include <iostream>

using namespace std;

class Point{
    public:
        float x;
        float y;

        Point(float x = 0, float y = 0);
        ~Point();
        friend ostream& operator<<(ostream& out, const Point& point);
};