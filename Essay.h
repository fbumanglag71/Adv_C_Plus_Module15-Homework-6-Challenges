#include "GradedActivity.h" //include graded activity header

class Essay : public GradedActivity //essay class derived from graded activity
{
private:
    double grammar; //grammar score attribute
    double spelling; //spelling score attribute
    double length; //length score attribute
    double content; //content score attribute

public:
    Essay() : grammar(0), spelling(0), length(0), content(0) {} //default constructor

    //setters
    //precondition: none
    //postcondition: each setter assigns the input parameter to its corresponding member variable
    //if within bounds; otherwise, assigns 0 to that member variable.
    void setGrammar(double g) { grammar = (g >= 0 && g <= 30) ? g : 0; } //set grammar score
    void setSpelling(double s) { spelling = (s >= 0 && s <= 20) ? s : 0; } //set spelling score
    void setLength(double l) { length = (l >= 0 && l <= 20) ? l : 0; } //set length score
    void setContent(double c) { content = (c >= 0 && c <= 30) ? c : 0; } //set content score

    //getters
    //precondition: none
    //postcondition: getGrammar returns grammar score, getSpelling returns spelling score,
    //getLength returns length score, and getContent returns content score.

    double getGrammar() const { return grammar; } //get grammar score
    double getSpelling() const { return spelling; } //get spelling score
    double getLength() const { return length; } //get length score
    double getContent() const { return content; } //get content score

    //function to calculate the total score and update the GradedActivity score
    void calculateScore(); //calculate and set total score
};
