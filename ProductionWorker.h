#pragma once
#include "Employee.h"

class ProductionWorker : public Employee
{
private:
    int shift;
    double hourlyRate;

public:

    //precondition: none
    //postcondition: default constructor initializes shift to 0 and hourlyRate to 0.0.
    //parameterized constructor sets name, number, date, shift, and hourlyRate.

    ProductionWorker() : Employee(), shift(0), hourlyRate(0.0) {}

    ProductionWorker(string n, int num, string d, int s, double r)
        : Employee(n, num, d), shift(s), hourlyRate(r) {}

    //setters
    //precondition: none
    //postcondition: setShift assigns the shift value, setHourlyRate assigns the hourly rate.

    void setShift(int s) { shift = s; }
    void setHourlyRate(double r) { hourlyRate = r; }

    //getters
    //precondition: none
    //postcondition: getShift returns the shift, getHourlyRate returns the hourly rate.
    //operator<< outputs all ProductionWorker information to ostream.

    int getShift() const { return shift; }
    double getHourlyRate() const { return hourlyRate; }

    friend ostream& operator<<(ostream& out, const ProductionWorker& obj);
};

ostream& operator<<(ostream& out, const ProductionWorker& obj)
{
    out << static_cast<const Employee&>(obj)
        << "\n\tShift: " << obj.shift
        << "\n\tHourly Rate: $" << obj.hourlyRate;
    return out;
}