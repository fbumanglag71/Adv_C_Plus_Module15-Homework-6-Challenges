#pragma once //prevent multiple inclusions
#include "PersonData.h" //base person data class

class CustomerData : public PersonData //customer data derived from person
{
private:
    int customernumber; //customer identification number
    bool mailingList; //mailing list subscription status

public:
    CustomerData() //default constructor initializing attributes
        : PersonData(), customernumber(0), mailingList(false) {}

    //setters
    //precondition: none
    //isOnList should be a boolean value.
    //postcondition: setCustomerNumber assigns number to customernumber, 
    //and setMailingList assigns isOnList to mailingList.
    void setCustomerNumber(int number) { customernumber = number; } //set customer number
    void setMailingList(bool isOnList) { mailingList = isOnList; } //set mailing list status

    //getters
    //precondition: none
    //postcondition: getCustomerNumber returns customernumber, getMailingList returns 
    //mailingList status, and operator<< outputs formatted customer data to stream.

    int getCustomerNumber() const { return customernumber; } //get customer number
    bool getMailingList() const { return mailingList; } //get mailing list status

    friend ostream& operator<<(ostream& out, const CustomerData& obj); //overload output operator
};

ostream& operator<<(ostream& out, const CustomerData& obj) //output customer data
{
    out << static_cast<const PersonData&>(obj) //output base person data
        << "\n\tCustomer Number: " << obj.customernumber
        << "\n\tMailing List: " << (obj.mailingList ? "Yes" : "No");
    return out;
}
