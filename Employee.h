#pragma once //prevent multiple inclusions
#include <string> //include string library
#include <iostream> //include input-output library
using namespace std; //use standard namespace

class Employee //class representing employee information
{
private:
    string name; //employee name attribute
    int number; //employee number attribute
    string date; //employee hire date

public:
    //precondition: none
    //postcondition: default constructor initializes name, number, and date with default values.
    //parameterized constructor initializes name, number, and date with provided values.
    Employee() //default constructor initializing attributes
        : name("unknown"), number(0), date("mm/dd/yyyy") {}

    Employee(string n, int num, string d) //constructor with parameters
        : name(n), number(num), date(d) {}

    //setters
    //precondition: none
    //postcondition: setName assigns n to name, setNumber assigns num to number, 
    //and setDate assigns d to date, updating employee details.

    void setName(const string& n) { name = n; } //set employee name
    void setNumber(int num) { number = num; } //set employee number
    void setDate(const string& d) { date = d; } //set hire date

    //getters
    //precondition: none
    //postcondition: getName returns the name, getNumber returns the number, 
    //and getDate returns the hire date. operator<< outputs employee details to the stream.

    string getName() const { return name; } //get employee name
    int getNumber() const { return number; } //get employee number
    string getDate() const { return date; } //get hire date

    friend ostream& operator<<(ostream& out, const Employee& obj); //overload output operator
};

ostream& operator<<(ostream& out, const Employee& obj) //output employee data
{
    out << "\n\tName: " << obj.name
        << "\n\tNumber: " << obj.number
        << "\n\tHire Date: " << obj.date;
    return out;
}
