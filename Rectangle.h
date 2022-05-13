//
// Created by Adria on 5/13/2022.
//
#include "Shape.h"
#include "iostream"


class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle (double newLength, double newWidth);
    double getLength() const;
    double getWidth() const;
    double compute_area() noexcept override;
};
