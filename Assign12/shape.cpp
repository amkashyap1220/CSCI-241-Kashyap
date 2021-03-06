/******************************************************************************************************
 * @file shape.cpp
 * @author Alexander Kashyap (z1926618@students.niu.edu)
 * @version 0.1
 * @date 2021-04-22
 * Assignment 12
 * Due 2021-04-22
 * @copyright Copyright (c) 2021
 * 
******************************************************************************************************/
#include "shape.h"
#include <string>
#include <iostream>

using std::cout;

/******************************************************************************************************
 * Constructor for shape class
 * @param color color of the shape 
******************************************************************************************************/
shape::shape(const string &color)
{
    this->color = color;
}

/******************************************************************************************************
 * Print the shape object
******************************************************************************************************/
void shape::print() const
{
    cout << color;
}

/******************************************************************************************************
 * Destructor for shape
******************************************************************************************************/
shape::~shape() {}
