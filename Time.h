#pragma once
#include <iostream>
using namespace std;

class Time //time class representing hours, minutes, and seconds
{
protected:
    int hours; //hours attribute
    int min; //minutes attribute
    int sec; //seconds attribute

public:
    //precondition: none
    //postcondition: initializes hours, min, and sec to given values or defaults to 0.
    Time() : hours(0), min(0), sec(0) {} //default constructor initializing attributes
    Time(int h, int m, int s) : hours(h), min(m), sec(s) {} //constructor with parameters

    //setters
    //precondition: none
    //postcondition: sets hours, min, and sec to specified values.
    void setHours(int h) { hours = h; } //set hours
    void setMin(int m) { min = m; } //set minutes
    void setSec(int s) { sec = s; } //set seconds

    //getters
    //preconditions: none
    //postconditions: returns the value of hours, minutes, or seconds
    int getHours() const { return hours; } //get hours
    int getMin() const { return min; } //get minutes
    int getSec() const { return sec; } //get seconds

    //preconditions: none
    //postconditions: displays time in standard format (hh:mm:ss AM/PM)

    void displayStandardTime() const //display time in standard format
    {
        cout << (hours > 12 ? hours - 12 : hours) << ":"
            << (min < 10 ? "0" : "") << min << ":"
            << (sec < 10 ? "0" : "") << sec
            << (hours >= 12 ? " PM" : " AM") << endl;
    }
};
