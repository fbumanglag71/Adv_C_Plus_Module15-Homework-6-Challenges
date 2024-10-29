#pragma once
#include<string>
#include<iostream>
using namespace std;

class Ship //ship class representing basic ship details
{
private:
    string name; //ship name attribute
    int year; //ship year attribute
public:
    //precondition: none
    //postcondition: default constructor initializes name to "unknown" and year to 0.
    //setName sets the ship's name, getName returns the name.
    //setYear sets the ship's year, getYear returns the year.
     Ship() : name("unknown"), year(0) //default constructor initializing attributes
    {}

    void setName(string n) //set ship name
    {
        name = n;
    }
    string getName() const //get ship name
    {
        return name;
    }

    void setYear(int y) //set ship year
    {
        year = y;
    }

    int getYear() const //get ship year
    {
        return year;
    }

    virtual void print() const //virtual function to print ship details
    {
        cout << "\n\tName: " << name;
        cout << "\n\tyear: " << year;
    }
};