#pragma once //prevent multiple inclusions
#include <string> //include string library
using namespace std; //use standard namespace

class TheCustomer //class representing customer information
{
private:
    string custLastName; //customer last name
    string custFirstName; //customer first name
    string custAddress; //customer address
    string custCity; //customer city
    string custState; //customer state
    string custZip; //customer zip code
    string custPhone; //customer phone number
    int custNumber; //customer identification number
    bool custMailingList; //mailing list subscription status

public:
    //constructor
    TheCustomer() : custLastName(""), custFirstName(""), custAddress(""), custCity(""),
        custState(""), custZip(""), custPhone(""), custNumber(0), custMailingList(false) {} //default constructor

    //setters
    //precondition: none
    //postcondition: each setter function assigns the input parameter to its corresponding
    //member variable, updating customer information.
    void setCustLastName(const string& lname) { custLastName = lname; } //set last name
    void setCustFirstName(const string& fname) { custFirstName = fname; } //set first name
    void setCustAddress(const string& addr) { custAddress = addr; } //set address
    void setCustCity(const string& cityName) { custCity = cityName; } //set city
    void setCustState(const string& stateName) { custState = stateName; } //set state
    void setCustZip(const string& zipcode) { custZip = zipcode; } //set zip code
    void setCustPhone(const string& phoneNumber) { custPhone = phoneNumber; } //set phone number
    void setCustNumber(int custNum) { custNumber = custNum; } //set customer number
    void setCustMailingList(bool mailList) { custMailingList = mailList; } //set mailing list status

    //getters
    string getCustLastName() const { return custLastName; } //get last name
    string getCustFirstName() const { return custFirstName; } //get first name
    string getCustAddress() const { return custAddress; } //get address
    string getCustCity() const { return custCity; } //get city
    string getCustState() const { return custState; } //get state
    string getCustZip() const { return custZip; } //get zip code
    string getCustPhone() const { return custPhone; } //get phone number
    int getCustNumber() const { return custNumber; } //get customer number
    bool getCustMailingList() const { return custMailingList; } //get mailing list status
};
