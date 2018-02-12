/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Star.h
 * Author: snbl
 *
 * Created on February 12, 2018, 8:36 PM
 */

#ifndef STAR_H
#define STAR_H

#include <string>
#include "Vec3D.h"
using namespace std;

class Star {
public:
    Star();
    Star(string, Vec3D, char);
    ~Star();
    const string get_name() const;
    const Vec3D get_position() const;
    const char get_spectralClass() const;
    void print();
private:
    string name;
    Vec3D position;
    char spectralClass;
    
};

#endif /* STAR_H */

