#pragma once //prevent multiple inclusions
#include "Ship.h" //base ship class header
#include <iostream> //standard input-output library
using namespace std; //use standard namespace

class CruiseShip : public Ship //cruise ship derived from ship
{
private:
    int noPassengers; //number of passengers attribute

public:
    CruiseShip() : Ship(), noPassengers(0) {} //initialize noPassengers to 0

    //precondition: none
    //postcondition: setNoPassengers assigns n to noPassengers, and getNoPassengers 
    //returns the current value of noPassengers.
    void setNoPassengers(int n) { noPassengers = n; } //set passenger count
    int getNoPassengers() const { return noPassengers; } //get passenger count

    virtual void print() const override //override base print method
    {
        cout << "\n\tName: " << getName();
        cout << "\n\tYear: " << getYear();
        cout << "\n\tNumber of passengers: " << getNoPassengers();
    }
};
