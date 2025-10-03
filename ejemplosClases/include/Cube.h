#ifndef __CUBE_H__
#define __CUBE_H__
#include "Shape3d.h"
#include <iostream>
using namespace std;
class Cube : public Shape3D {
private:
    double length;
public:
    // Constructor with default length
    Cube(double len = 1.0);

    //Destructor
    ~Cube() override;
    // Override virtual functions
    double getVolume() const override;
    double getSurfaceArea() const override;
    void display() const;
};
#endif // __CUBE_H__
