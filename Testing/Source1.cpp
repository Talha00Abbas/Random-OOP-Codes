#include "iostream"
using namespace std;

class Shape {
    string type;
public:
    virtual int areaCalculator() = 0;
};


class Rectangle :public Shape {
    float height;
    float width;
    float area;
public:
    Rectangle(int h, int w) {
        height = h;
        width = w;
    }
    int areaCalculator() {
        return area = height * width;
    }
};


class Triangle :public Shape {
    float base;
    float height;
    float area;
public:
    Triangle(int b, int h) {
        base = b;
        height = h;
    }
    int areaCalculator() {
        return area = 0.5 * (base * height);
        //cout<<"Area of triangle :"<<area;
    }
};

class Circle :public Shape {
    float radius;
    float area;
public:
    Circle(int r) {
        radius = r;
    }
    int areaCalculator() {
        return area = 3.14 * (radius * radius);
    }
};

int main() {
    Shape* shapePtr;
    Triangle t(5, 5);
    shapePtr = &t;
    cout << "Triangle" << endl;
    cout << shapePtr->areaCalculator() << endl;

    Rectangle r(2, 3);
    shapePtr = &r;
    cout << "Rectangle" << endl;
    cout << shapePtr->areaCalculator() << endl;

    Circle c(10);
    shapePtr = &c;
    cout << "Cricle" << endl;
    cout << shapePtr->areaCalculator() << endl;






}