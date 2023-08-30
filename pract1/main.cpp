#include <iostream>



class Shape {
public:
    virtual double calculateArea() = 0;
};



class Rectangle : public Shape {
private:
    double width;
    double height;



public:
    Rectangle(double w, double h) : width(w), height(h) {}



    double calculateArea() override {
        return width * height;
    }
};



class Triangle : public Shape {
private:
    double base;
    double height;



public:
    Triangle(double b, double h) : base(b), height(h) {}



    double calculateArea() override {
        return 0.5 * base * height;
    }
};



class Circle : public Shape {
private:
    double radius;



public:
    Circle(double r) : radius(r) {}



    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rhombus : public Shape {
private:
    int diagonal1;
    int diagonal2;

public:
    Rhombus(int d1, int d2) : diagonal1(d1), diagonal2(d2) {}

    double calculateArea() override {
        return (diagonal1 * diagonal2) / 2.0;
    }
};



int main() {
    Rectangle rectangle(4, 5);
    Triangle triangle(3, 6);
    Circle circle(2);
    Rhombus rhombus(2, 3);



    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Triangle Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Rhombus Area: " << rhombus.calculateArea() << std::endl;


    return 0;
}