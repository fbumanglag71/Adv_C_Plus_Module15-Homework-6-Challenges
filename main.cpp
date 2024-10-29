#include<iostream>              //standard input-output stream
#include "input.h"              //header for input functions
#include "Employee.h"           //employee class header file
#include"ProductionWorker.h"    //production worker class file
#include"TeamLeader.h"          //team leader class header
#include"PersonData.h"          //person data class header
#include"Ship.h"                //ship base class header file
#include"CruiseShip.h"          //cruise ship derived class
#include"CargoShip.h"           //cargo ship derived class
#include "Time.h"               //time base class header file
#include "MilTime.h"            //military time derived class
#include "Essay.h"              //essay class for challenge
#include "GradedActivity.h"     //graded activity base class
#include"CustomerData.h"        //customer data class header
#include"PreferredCustomer.h"   //preferred customer derived class
#include"TheCustomer.h"         //the customer class header

using namespace std;            //using standard namespace

//function protypes
int menuOption();
void Challenge3();
void Challenge4();
void Challenge6();
void Challenge7();
void Challenge8();
void Challenge12();

//main function for executing program menu options
int main()
{
    //loop for user input and option selection
    do
    {
        //switch statement to handle menu options
        switch (menuOption())
        {
        case 0: exit(1); break;
        case 3: Challenge3(); break;
        case 4: Challenge4(); break;
        case 6: Challenge6(); break;
        case 7: Challenge7(); break;
        case 8: Challenge8(); break;
        case 12: Challenge12(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }

        //new line and system pause for readability
        cout << "\n";
        system("pause");

    } while (true); //endless loop for continuous input

    //return statement for successful program exit
    return EXIT_SUCCESS;
}


//function to display menu options to user
int menuOption()
{
    //clear screen for fresh menu display
    system("cls");

    //display chapter title and program details
    cout << "\n\tChapter 15: Chapter 15 Inheritance, Polymorphism, and Virtual Functions by Francisco Bumanglag";

    //decorative line for menu header
    cout << "\n\t" << string(90, char(205));

    //displaying individual menu options
    cout << "\n\t 3. TeamLeader Class";
    cout << "\n\t 4. Time Format";
    cout << "\n\t 6. Essay Class";
    cout << "\n\t 7. PersonData and CustomerData Classes";
    cout << "\n\t 8. PreferredCustomer Class";
    cout << "\n\t12. Ship, CruiseShip, and CargoShip Classes";

    //decorative line below menu options
    cout << "\n\t" << string(90, char(196));

    //display option for exiting the program
    cout << "\n\t0. Exit the Program";

    //bottom decorative line for menu
    cout << "\n\t" << string(90, char(205));

    //get user input for menu selection
    return inputInteger("\n\tOption: ", 0, 12);
}

void Challenge3()
{
    //create and input data for Employee
    Employee testEm;
    testEm.setName(inputString("\nEnter Employee Name: ", true));
    testEm.setNumber(inputInteger("\nEnter Employee Number: ", true));
    testEm.setDate(inputString("\nEnter Hire Date (mm/dd/yyyy): ", false));

    cout << "\nEmployee Object:" << endl;
    cout << testEm << endl;

    //create and input data for ProductionWorker
    ProductionWorker testPD;
    testPD.setName(inputString("\nEnter Production Worker Name: ", true));
    testPD.setNumber(inputInteger("\nEnter Production Worker Number: ", true));
    testPD.setDate(inputString("\nEnter Hire Date (mm/dd/yyyy): ", false));
    testPD.setShift(inputInteger("\nEnter Shift (1 for day, 2 for night): ", 1, 2));
    testPD.setHourlyRate(inputDouble("\nEnter Hourly Rate: $", true));

    cout << "\nProductionWorker Object:" << endl;
    cout << testPD << endl;

    //create and input data for TeamLeader
    TeamLeader testTL;
    testTL.setName(inputString("\nEnter Team Leader Name: ", true));
    testTL.setNumber(inputInteger("\nEnter Team Leader Number: ", true));
    testTL.setDate(inputString("\nEnter Hire Date (mm/dd/yyyy): ", false));
    testTL.setShift(inputInteger("\nEnter Shift (1 for day, 2 for night): ", 1, 2));
    testTL.setHourlyRate(inputDouble("\nEnter Hourly Rate: $", true));
    testTL.setBonus(inputDouble("\nEnter Bonus Amount: $", true));
    testTL.setTrainingHours(inputInteger("\nEnter Training Hours: ", true));

    cout << "\nTeamLeader Object:" << endl;
    cout << testTL << endl;
}

//function to handle military time input and display
void Challenge4()
{
    int milHours, milSeconds;
    cout << "Enter time in military format (HHMM): ";
    cin >> milHours;
    cout << "Enter seconds (0-59): ";
    cin >> milSeconds;

    MilTime milTime(milHours, milSeconds);

    cout << "\nMilitary Time: ";
    milTime.displayMilitaryTime();

    cout << "Standard Time: ";
    milTime.displayStandardTime();
}



//cradedActivity::getLetterGrade Implementation -- for challenge 6
char GradedActivity::getLetterGrade() const
{
    char letterGrade;

    if (score > 89)
        letterGrade = 'A';
    else if (score > 79)
        letterGrade = 'B';
    else if (score > 69)
        letterGrade = 'C';
    else if (score > 59)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    return letterGrade;
}

//essay::calculateScore Implementation -- for challenge 6
void Essay::calculateScore()
{
    double totalScore = grammar + spelling + length + content;
    setScore(totalScore);  // Sets the score in the GradedActivity class
}


//function to handle essay score input and grading
void Challenge6()
{
    double grammar, spelling, length, content;

    // Collect input scores from the user
    cout << "Enter the grammar score (0-30): ";
    grammar = inputDouble("", 0.0, 30.0);  // Ensure bounds are doubles

    cout << "Enter the spelling score (0-20): ";
    spelling = inputDouble("", 0.0, 20.0);  // Ensure bounds are doubles

    cout << "Enter the length score (0-20): ";
    length = inputDouble("", 0.0, 20.0);  //ensure bounds are doubles

    cout << "Enter the content score (0-30): ";
    content = inputDouble("", 0.0, 30.0);  //ensure bounds are doubles

    //create Essay object and set scores
    Essay essay;
    essay.setGrammar(grammar);
    essay.setSpelling(spelling);
    essay.setLength(length);
    essay.setContent(content);

    //calculate the total score and assign it in GradedActivity
    essay.calculateScore();

    //display the total score and letter grade
    cout << "\nEssay Total Score: " << essay.getScore() << endl;
    cout << "Letter Grade: " << essay.getLetterGrade() << endl;
}


//function to prompt the user for a boolean value -- for challenge 7
bool inputBool(const string& prompt)
{
    int choice;
    do {
        cout << prompt;
        cout << " (1 for Yes, 0 for No): ";
        cin >> choice;
        if (choice == 1)
            return true;
        else if (choice == 0)
            return false;
        else
            cout << "Invalid input. Please enter 1 or 0." << endl;
    } while (true);
}

//function to handle input and display for person and customer data
void Challenge7()
{
    //create and input data for PersonData
    PersonData testPD;
    testPD.setLastName(inputString("\nEnter Last Name: ", true));
    testPD.setFirstName(inputString("\nEnter First Name: ", true));
    testPD.setAddress(inputString("\nEnter Address: ", true));
    testPD.setCity(inputString("\nEnter City: ", true));
    testPD.setState(inputString("\nEnter State: ", true));
    testPD.setZip(inputString("\nEnter ZIP Code: ", true));
    testPD.setPhone(inputString("\nEnter Phone Number: ", true));

    cout << "\nPersonData Object:" << endl;
    cout << testPD << endl;

    //create and input data for CustomerData
    CustomerData testCD;
    testCD.setLastName(inputString("\nEnter Last Name: ", true));
    testCD.setFirstName(inputString("\nEnter First Name: ", true));
    testCD.setAddress(inputString("\nEnter Address: ", true));
    testCD.setCity(inputString("\nEnter City: ", true));
    testCD.setState(inputString("\nEnter State: ", true));
    testCD.setZip(inputString("\nEnter ZIP Code: ", true));
    testCD.setPhone(inputString("\nEnter Phone Number: ", true));
    testCD.setCustomerNumber(inputInteger("\nEnter Customer Number: ", true));
    testCD.setMailingList(inputBool("\nAdd to Mailing List?: "));

    cout << "\nCustomerData Object:" << endl;
    cout << testCD << endl;
}

//function to handle input and display for preferred customer
void Challenge8()
{
    PreferredCustomer customer;
    cout << "\tEnter customer information:\n";
    customer.setCustLastName(inputString("\tLast Name: ", true));
    customer.setCustFirstName(inputString("\tFirst Name: ", true));
    customer.setCustAddress(inputString("\tAddress: ", true));
    customer.setCustCity(inputString("\tCity: ", true));
    customer.setCustState(inputString("\tState: ", true));
    customer.setCustZip(inputString("\tZIP Code: ", true));
    customer.setCustPhone(inputString("\tPhone Number: ", true));
    customer.setCustNumber(inputInteger("\tCustomer Number: ", true));
    customer.setCustMailingList(inputBool("\tAdd to mailing list?: "));

    //ensure the purchase amount is positive
    double amount;
    cout << "\tEnter the total purchase amount: ";
    amount = inputDouble("", 0.0, DBL_MAX);  // Allow only positive values

    customer.setPurchasesAmount(amount);

    //display customer information and discount level
    cout << "\n\tCustomer Information:\n";
    cout << "\tName: " << customer.getCustFirstName() << " " << customer.getCustLastName() << endl;
    cout << "\tAddress: " << customer.getCustAddress() << ", " << customer.getCustCity() << ", "
        << customer.getCustState() << " " << customer.getCustZip() << endl;
    cout << "\tPhone: " << customer.getCustPhone() << endl;
    cout << "\tCustomer Number: " << customer.getCustNumber() << endl;
    cout << "\tMailing List: " << (customer.getCustMailingList() ? "Yes" : "No") << endl;
    cout << "\tTotal Purchases: $" << customer.getPurchasesAmount() << endl;
    cout << "\tDiscount Level: " << customer.getDiscountLevel() << "%" << endl;
}


//function to create and display ship objects
void Challenge12()
{
  
    Ship* ships[3] = { new Ship(), new CruiseShip(), new CargoShip() };

    ships[0]->setName("Nautica");
    ships[0]->setYear(1999);

    dynamic_cast<CruiseShip*>(ships[1])->setName("Titanic");
    dynamic_cast<CruiseShip*>(ships[1])->setYear(1911);
    dynamic_cast<CruiseShip*>(ships[1])->setNoPassengers(2435);

    dynamic_cast<CargoShip*>(ships[2])->setName("HMM Algeciras");
    dynamic_cast<CargoShip*>(ships[2])->setYear(2020);
    dynamic_cast<CargoShip*>(ships[2])->setCapacity(23820);


    for (int s = 0; s < 3; s++)
    {
        cout << '\n';
        ships[s]->print();
    }

}