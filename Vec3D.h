/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vec3D.h
 * Author: snbl
 *
 * Created on February 12, 2018, 8:23 PM
 */

#ifndef VEC3D_H
#define VEC3D_H

class Vec3D {
public:
    Vec3D();
    Vec3D(double);
    Vec3D(double, double, double);
    ~Vec3D();
    
    
    void print();
    Vec3D add(Vec3D vec);
    Vec3D sub(Vec3D vec);
    double length();
    
private:
    double x;
    double y;
    double z;

};

#endif /* VEC3D_H */

