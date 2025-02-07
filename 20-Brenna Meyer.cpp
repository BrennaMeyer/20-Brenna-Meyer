// 20-Brenna Meyer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer:Brenna Meyer
// Date: February 7th,2025
//Requirements: How Much Paint A particular brand of paint covers 340 square feet per gallon.
// Write a program to determine and report approximately how many gallons of paint will be needed to paint two coats on a 
// wooden fence that is 6 feet high and 100 feet long.

#include <iostream>
using namespace std;

int main()
{
    const float paintCoverage = 340;        //square feet per gallon

    int height = 6,         // Feet
        length = 100,       // Feet 
        area = height * length,

        totalArea = area * 2,
        gallonsNeeded = totalArea / paintCoverage;
       
    cout << endl
        << "Height =" << height << "ft"<< endl
        << "Lenght =" << length << "ft" << endl
        << "Total Area =" << totalArea << "sqft" << endl
        << "Coverage Per Gallon =" << paintCoverage << "sqft" << endl
        << "Gallons Needed =" << gallonsNeeded << endl
        << endl;

        return 0;
}


