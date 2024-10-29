#pragma once
#include "TheCustomer.h"

class PreferredCustomer : public TheCustomer
{
private:
    double purchasesAmount;
    double discountLevel;

    //private method to update discount level based on purchasesAmount
    //precondition: none
    //postcondition: discountLevel is updated based on purchasesAmount.
    //sets discountLevel to 10.0, 7.0, 6.0, 5.0, or 0.0 based on thresholds.

    void updateDiscountLevel()
    {
        if (purchasesAmount >= 2000.0)
            discountLevel = 10.0;
        else if (purchasesAmount >= 1500.0)
            discountLevel = 7.0;
        else if (purchasesAmount >= 1000.0)
            discountLevel = 6.0;
        else if (purchasesAmount >= 500.0)
            discountLevel = 5.0;
        else
            discountLevel = 0.0;
    }

public:
    //constructor
    PreferredCustomer() : purchasesAmount(0.0), discountLevel(0.0) {}

    //setters with validation
    //precondition: none
    //postcondition: if amount is valid, purchasesAmount is set to amount,
    //and discountLevel is updated based on purchasesAmount.

    void setPurchasesAmount(double amount)
    {
        if (amount >= 0.0)
        {
            purchasesAmount = amount;
            updateDiscountLevel();  //update discount level when purchases amount changes
        }
    }

    //getters
    //precondition: none
    //postcondition: getPurchasesAmount returns the total purchase amount.
    //getDiscountLevel returns the current discount level.
    double getPurchasesAmount() const { return purchasesAmount; }
    double getDiscountLevel() const { return discountLevel; }
};
