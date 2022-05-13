//
// Created by Adria on 5/13/2022.
//

#include "Rectangle.h"
#include "Shape.h"


class Square : public Rectangle {
public:
    Square (double newSide) : Rectangle(newSide, newSide) {

    };

    double getSide();
};

