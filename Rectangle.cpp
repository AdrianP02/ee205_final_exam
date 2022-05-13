//
// Created by Adria on 5/13/2022.
//

#include "Rectangle.h"
#include "iostream"

Rectangle::Rectangle(double newLength, double newWidth) : length(length), width(width) {
    if (newLength <= 0 || newWidth <= 0){
        throw std::invalid_argument("length and width must be > 0");
    }
    length = newLength;
    width = newWidth;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::compute_area() noexcept{
    return getLength() * getWidth();
}

