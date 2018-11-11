#ifndef COMPGEOVIS_POINT_H
#define COMPGEOVIS_POINT_H

namespace CG {
    class Point {
    private:
        double x,y;
    public:
        double getX(){return x;}
        double getY(){return y;}
        Point(double x, double y);
        Point& operator=(const Point& rhs);
        Point operator+(const Point& rhs);
        Point& operator+=(const Point& rhs);
        bool operator==(const Point& rhs) const;
        void Print() const;
        virtual ~Point(){}
    };
}

#endif //COMPGEOVIS_POINT_H
