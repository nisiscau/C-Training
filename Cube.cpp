#include "Cube.h"
#include <iostream>

namespace uiuc {
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

using std::cout;
using std::endl;
int main() {
    /* code */
    uiuc::Cube c;
    c.setLength(13.6);
    cout<<"The surface of the cube is "<<c.getSurfaceArea()<<endl;
    return 0;
}
