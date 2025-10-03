#include "Cube.h"
// Constructor with default length
Cube::Cube(double len = 1.0) : length(len) {}

// Destructor
Cube::~Cube(){}
// Override virtual functions
double Cube::getVolume() const {
    return length * length * length;
}
double Cube::getSurfaceArea() const
{
    return 6 * length * length;
}
void Cube::display() const
{
    cout << "Cube Length: " << length << ", Volume: " << getVolume() << ", Surface Area: " << getSurfaceArea() << endl;
}