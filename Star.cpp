/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Star.cpp
 * Author: snbl
 * 
 * Created on February 12, 2018, 8:36 PM
 */

#include "Star.h"
#include <iostream>


Star::Star() : name {"Unbekannt"}, position{Vec3D(0,0,0)}, spectralClass {'X'} {
}

Star::Star(string m_name, Vec3D m_position, char m_spectralClass) : name{m_name}, position{m_position}, spectralClass{m_spectralClass} {
}

Star::~Star() {
}

const string Star::get_name() const
{
    return name;
}

const Vec3D Star::get_position() const
{
    return position;
}

const char Star::get_spectralClass() const
{
    return spectralClass;
}

void Star::print()
{
    cout << name << " (" << spectralClass << ") @ ";
    position.print();
    cout <<  endl;

}
