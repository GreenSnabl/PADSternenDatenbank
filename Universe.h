/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Universe.h
 * Author: snbl
 *
 * Created on February 12, 2018, 8:42 PM
 */

#ifndef UNIVERSE_H
#define UNIVERSE_H
#include "Star.h"
#include <vector>

using namespace std;

class Universe {
public:
    Universe();
    ~Universe();
    void addStar(const Star&);
    void print();
    double getDistance(Star, Star);
    double getDistance(Star star, Vec3D position);    
    Star getStar(const string& name);
    Star findNearestStar(Vec3D);
    Star findNearestStar(Vec3D position, char spectralClass);
    void removeStar(const string& name);
    
    
    
private:

    
    
    vector<Star> stars;

};

#endif /* UNIVERSE_H */

