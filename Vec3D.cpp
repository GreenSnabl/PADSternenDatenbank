/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vec3D.cpp
 * Author: snbl
 * 
 * Created on February 12, 2018, 8:23 PM
 */

#include "Vec3D.h"
#include <iostream>
#include <cmath>
#include <complex>


using namespace std;

Vec3D::Vec3D() : x{0}, y{0}, z{0}{
}
Vec3D::Vec3D(double val) : x{val}, y {val}, z{val} {}

Vec3D::Vec3D(double xx, double yy, double zz) : x{xx}, y{yy}, z{zz} {}

Vec3D::~Vec3D() {
}

void Vec3D::print()
{
    cout << "(" << x << ", " <<  y << ", " << z << ")" << endl;
}

Vec3D Vec3D::add(Vec3D vec)
{
    return Vec3D(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

Vec3D Vec3D::sub(Vec3D vec)
{
    return Vec3D(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

double Vec3D::length()
{
 
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
