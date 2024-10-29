#pragma once
#include "Time.h"
#include <iostream>

using namespace std;

class MilTime : public Time
{
private:
    int milHours;
    int milSeconds;

public:
    //constructor
    MilTime(int mHours = 0, int mSeconds = 0)
    {
        setTime(mHours, mSeconds);
    }

    //setters
    //precondition: none
    //postcondition: sets milHours and milSeconds based on valid input.
    //converts milHours to standard hours, minutes, and seconds format.
    void setTime(int mHours, int mSeconds)
    {
        if (mHours < 0 || mHours > 2359 || mSeconds < 0 || mSeconds > 59) {
            cout << "\n>>> Invalid military time or seconds <<<" << endl;
            return;
        }
        milHours = mHours;
        milSeconds = mSeconds;

        //convert to standard time
        hours = milHours / 100;
        min = milHours % 100;
        sec = milSeconds;

        if (hours > 12)
            hours -= 12;
    }

    //getters
    //precondition: none
    //postcondition: getHour returns milHours in 24-hour format,
    //getStandHr returns hours in 12-hour format,
    //and displayMilitaryTime outputs milHours as "HHMM hours" format.
    int getHour() const { return milHours; }
    int getStandHr() const { return hours; }

    void displayMilitaryTime() const
    {
        cout << (milHours < 1000 ? "0" : "") << milHours << " hours" << endl;
    }
};
