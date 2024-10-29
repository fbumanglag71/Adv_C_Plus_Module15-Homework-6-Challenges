#pragma once
#include <string>
#include <iostream>
using namespace std;

class PersonData
{
private:
    string lname;
    string fname;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    PersonData()
        : lname("unknown"), fname("unknown"), address("unknown"),
        city("unknown"), state("unknown"), zip("unknown"), phone("unknown") {}

    //setters
    //precondition: none
    //postcondition: each setter assigns its input parameter to the corresponding
    //member variable, updating the respective attribute in the object.
    void setLastName(const string& lastName) { lname = lastName; }
    void setFirstName(const string& firstName) { fname = firstName; }
    void setAddress(const string& addr) { address = addr; }
    void setCity(const string& cty) { city = cty; }
    void setState(const string& st) { state = st; }
    void setZip(const string& z) { zip = z; }
    void setPhone(const string& ph) { phone = ph; }

    //getters
    string getLastName() const { return lname; }
    string getFirstName() const { return fname; }
    string getAddress() const { return address; }
    string getCity() const { return city; }
    string getState() const { return state; }
    string getZip() const { return zip; }
    string getPhone() const { return phone; }

    friend ostream& operator<<(ostream& out, const PersonData& obj);
};

ostream& operator<<(ostream& out, const PersonData& obj)
{
    out << "\n\tLast Name: " << obj.lname
        << "\n\tFirst Name: " << obj.fname
        << "\n\tAddress: " << obj.address
        << "\n\tCity: " << obj.city
        << "\n\tState: " << obj.state
        << "\n\tZip: " << obj.zip
        << "\n\tPhone: " << obj.phone;
    return out;
}
