#pragma once
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
private:
    double bonus;
    int trainingHours;

public:
    //precondition: none
    //postcondition: initializes bonus to 0.0 and trainingHours to 0.

    TeamLeader() : ProductionWorker(), bonus(0.0), trainingHours(0) {}

    //setters
    //precondition: none
    //postcondition: sets the bonus and trainingHours for the team leader.

    void setBonus(double b) { bonus = b; }
    void setTrainingHours(int th) { trainingHours = th; }

    //getters
    //precondition: none
    //postcondition: returns bonus and trainingHours; outputs TeamLeader details.

    double getBonus() const { return bonus; }
    int getTrainingHours() const { return trainingHours; }

    friend ostream& operator<<(ostream& out, const TeamLeader& obj);
};

ostream& operator<<(ostream& out, const TeamLeader& obj)
{
    out << static_cast<const ProductionWorker&>(obj)
        << "\n\tBonus: $" << obj.bonus
        << "\n\tTraining Hours: " << obj.trainingHours;
    return out;
}