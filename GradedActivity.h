#pragma once

class GradedActivity
{
private:
    double score;   //to hold the numeric score

public:

    //precondition: none
    //postcondition: default constructor initializes score to 0.0; parameterized constructor
    //sets score to provided value. setScore updates score to s; getScore returns current score.
    //getLetterGrade provides a letter grade based on the score.

    //default constructor
    GradedActivity() : score(0.0) {}

    //constructor
    GradedActivity(double s) : score(s) {}

    //mutator function
    void setScore(double s) { score = s; }

    //accessor functions
    double getScore() const { return score; }

    //declaration of getLetterGrade
    char getLetterGrade() const;
};
