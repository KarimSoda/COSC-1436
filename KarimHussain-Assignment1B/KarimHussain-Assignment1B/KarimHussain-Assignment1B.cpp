//Preprocessor directive for input/output operations
#include <iostream>

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
    AreaRectangle = Number * 2 * Number;

    //Display areas of square and rectangle as calculated
    cout << "The area of the square is: " << AreaSquare << "\n";
    cout << "The area of the rectangle is: " << AreaRectangle << "\n";

    //Complete program
    return 0;
}