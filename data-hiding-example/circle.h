#ifndef DATA_HIDING_EXAMPLE_CIRCLE_H
#define DATA_HIDING_EXAMPLE_CIRCLE_H

class Circle {
private:
    double radius;
    double pi;

public:
    Circle();
    Circle(double givenRadius);
    double area();
    double perimeter();
};

#endif //DATA_HIDING_EXAMPLE_CIRCLE_H
