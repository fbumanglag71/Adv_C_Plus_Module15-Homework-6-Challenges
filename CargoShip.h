#pragma once //prevent multiple inclusions
#include "Ship.h" //base ship class header
#include <iostream> //standard input-output library
using namespace std; //use standard namespace

class CargoShip : public Ship //cargo ship derived from ship
{
private:
    int capacity; //cargo capacity attribute

public:
    CargoShip() : Ship(), capacity(0) {} //initialize capacity to 0

    //precondition: none
    //postcondition: setCapacity assigns c to capacity, and getCapacity 
    //returns the current value of capacity.
    void setCapacity(int c) { capacity = c; } //set cargo capacity
    int getCapacity() const { return capacity; } //get cargo capacity

    virtual void print() const override //override base print method
    {
        cout << "\n\tName: " << getName();
        cout << "\n\tYear: " << getYear();
        cout << "\n\tCapacity: " << getCapacity();
    }
};
