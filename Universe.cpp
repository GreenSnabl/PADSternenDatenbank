/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Universe.cpp
 * Author: snbl
 * 
 * Created on February 12, 2018, 8:42 PM
 */

#include "Universe.h"
#include <iostream>

Universe::Universe() {
}



Universe::~Universe() {
}

void Universe::addStar(const Star& star)
{
    stars.push_back(star);
}

Star Universe::getStar(const string& name)
{
    for (int i = 0; i < stars.size(); ++i)
    {
        if (name == stars[i].get_name()) return stars[i];    
    }
    return Star();
}

void Universe::removeStar(const string& name)
{
    for (int i = 0; i < stars.size(); ++i)
    if (name == stars[i].get_name())
    {
        stars.erase(stars.begin() + i);
        return;
    }
}

double Universe::getDistance(Star star1, Star star2)
{
    Vec3D vec1 = star1.get_position();
    Vec3D vec2 = star2.get_position();
    return vec1.sub(vec2).length();
}

double Universe::getDistance(Star star, Vec3D position)
{
    Vec3D vec = star.get_position();
    return vec.sub(position).length();
}

Star Universe::findNearestStar(Vec3D position)
{
    double min, temp;
    int index = 0;
    
    if(stars.size() > 0){
        min = getDistance(stars[0], position);
        for (int i = 1; i < stars.size(); ++i)
        {
            temp = getDistance(stars[i], position);
            if (temp < min) 
            {
                index = i;
                min = temp;
            }
        }
        return stars[index];
    }
    return Star();
}

Star Universe::findNearestStar(Vec3D position, char spectralClass)
{
    double min, temp;
    int index = -1;
    
    for (int i = 0; i < stars.size(); ++i)
    {
        if(stars[i].get_spectralClass() == spectralClass)
        {
            index = i;
            min = getDistance(stars[i], position);
            break;
        }        
    }
    for (int i = index + 1; i < stars.size(); ++i)
    {
        if(stars[i].get_spectralClass() == spectralClass)
        {
            temp = getDistance(stars[i], position);
            if (temp < min){
                min = temp;
                index = i;
            }
        }
    }
    if (index != -1) return stars[index];
    return Star();    
}


void Universe::print()
{
    cout << "Sterne des Universums" << endl;
    for (int i = 0; i < stars.size(); ++i)
    {
        stars[i].print();
        cout << endl;
    }
}