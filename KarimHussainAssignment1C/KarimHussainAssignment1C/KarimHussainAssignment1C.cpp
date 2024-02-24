//Preprocessor directive for input/output operations
#include <iostream>
#include <iomanip>

//Utilize the Standard library
using namespace std;

int main()
{
    //Declaration of variables to be calculated and initialized based on user input
    double Number;
    double AreaSquare;
    double AreaRectangle;

    //Prompt user for input and store in Number
    cout << "Enter a Number: ";
    cin >> Number;

    //Calculate area of square and intialize AreaSquare with value
    AreaSquare = Number * Number;
    //Calculate area of rectangle and initialize AreaRectangle with value
    AreaRectangle = Number * (2 * Number);

    //Table format - Header
    cout << left << setw(10) << setfill(' ') << "Shape";
    cout << right << setw(7) << "Area" << endl;

    //Table format - Square
    cout << left << setw(10) << setfill(' ') << "Square";
    cout << right << fixed << showpoint << setw(7) << setprecision(2) << AreaSquare << endl;

    //Table format - Rectangle
    cout << left << setw(10) << setfill(' ') << "Rectangle";
    cout << right << fixed << showpoint << setw(7) << setprecision(2) << AreaRectangle << endl;

    //Complete program
    return 0;
}