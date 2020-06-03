#pragma once

namespace uiuc {
    class Cube {
    private:
        /* data */
        double length_;
    public:
        Cube(); // Custom default constructor, with no type!
        Cube(double length); // One argument constructor
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    };
}
