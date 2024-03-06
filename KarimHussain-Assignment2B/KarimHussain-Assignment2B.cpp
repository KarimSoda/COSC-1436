#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Location of text file containing student data
    const string INPUT_FILE_PATH = "D:\\Code\\COSC-1436\\COSC-1436\\KarimHussain-Assignment2B\\Assignment2BDataFile.txt";
    
    //Declaring / initializing vars for total student stats used later in program
    double TotalNumericGrades = 0;
    int NumberStudents = 0;
    double AverageNumericGrade;

    //ifstream object for the file we are reading from
    ifstream inputFile;

    //Open file to read student data from
    inputFile.open(INPUT_FILE_PATH);
     
    //Output student statistics
    cout << "STUDENT STATISTICS:" << "\n";
    cout << left 
        << setw(6) << "NAME " 
        << setw(6) << "TESTS " 
        << setw(6) << "ASSIGNMENTS " 
        << setw(6) << "TOTAL POINTS " 
        << setw(6) << "NUMERIC GRADE " 
        << setw(6) << "LETTER GRADE" 
        << "\n";

    while (!inputFile.eof()) {
        //Declaring vars within scope of while-loop
        string Name;
        double Tests;
        double Assignments;

        double TotalPoints;
        double NumericGrade;
        char LetterGrade;

        inputFile >> Name;
        inputFile >> Tests;
        inputFile >> Assignments;

        //TotalPoints is the summation of tests and assignments
        TotalPoints = Tests + Assignments;
        //Take average of the total points
        NumericGrade = TotalPoints / 2;

        //Calculate letter grade of student or exit program in case of invalid grade
        if (90 <= NumericGrade && NumericGrade <= 100) {
            LetterGrade = 'A';
        }
        else if (80 <= NumericGrade && NumericGrade <= 89.99) {
            LetterGrade = 'B';
        }
        else if (70 <= NumericGrade && NumericGrade <= 79.99) {
            LetterGrade = 'C';
        }
        else if (60 <= NumericGrade && NumericGrade <= 69.99) {
            LetterGrade = 'D';
        }
        else if (0 <= NumericGrade && NumericGrade <= 59.99) {
            LetterGrade = 'F';
        }
        else {
            cout << "Invalid grade calculated" << "\n";
            return 1;
        }

        //Increment number of students to keep track of total
        ++NumberStudents;
        //Add numeric grade onto total numeric grades summation
        TotalNumericGrades += NumericGrade;

        cout << left << fixed << setprecision(2) 
            << setw(6) << Name << ' ' << right
            << setw(2) << Tests << ' '
            << setw(10) << Assignments << ' '
            << setw(12) << TotalPoints << ' '
            << setw(13) << NumericGrade << ' ' << left
            << setw(20) << LetterGrade << ' '
            << "\n";
    }

    //Calculate average grade of class using our tracked total
    AverageNumericGrade = TotalNumericGrades / NumberStudents;

    //Class Statistics output
    cout << "\n";
    cout << "CLASS STATISTICS:" << "\n";

    cout << left;
    cout << setw(10) << "STATISTIC" << ' '
         << setw(10) << "VALUE" << "\n";

    cout << setw(2) << "NUMBER" << ' ' << right
         << setw(9) << NumberStudents << ' ' << left 
        << "\n";
    cout << setw(2) << "AVERAGE" << ' ' << right
         << setw(9) << AverageNumericGrade 
        << "\n";
    
    //Close input file since we are done reading
    inputFile.close();

    //Terminate the program
    return 0;    
}