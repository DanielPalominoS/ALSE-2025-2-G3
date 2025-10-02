#ifndef __SHAPE3D_H__
#define __SHAPE3D_H__

class Shape3D {
public:
    virtual double getVolume() const = 0; // Pure virtual function
    virtual double getSurfaceArea() const = 0;
    virtual ~Shape3D() {} // Virtual destructor
};

#endif // __SHAPE3D_H__
