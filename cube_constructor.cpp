#include <iostream>
#include "cube_constructor.h"

namespace uiuc {
    Cube::Cube(){
        length_ = 1; //default constructor sets the length to 1
    }
    Cube::Cube(double length){
        length_ = length; //one parameter constructor sets the length according to an input
    }
    double Cube::getVolume(){
        return length_ * length_ * length_;
    }
    double Cube::getSurfaceArea(){
        return length_ * length_ * 6;
    }
    void Cube::setLength(double length){
         length_ = length;
    }
}
