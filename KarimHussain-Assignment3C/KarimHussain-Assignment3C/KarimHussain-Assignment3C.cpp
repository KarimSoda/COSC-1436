#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function prototypes
void populateArrayFromFile(string fileName, int& NumberConcepts, string ArrayConcepts[]);
void sortArraySelectionSort(string ArrayConcepts[], int NumberConcepts);

int main()
{
    //Input file is in the project directory; using full directory path for clarity
    const string INPUT_FILE_NAME = "D:\\Code\\COSC-1436\\COSC-1436\\KarimHussain-Assignment3C\\KarimHussain-Assignment3C\\Assignment3CDataFile.txt";
    //Declare an array of 100 strings
    string ArrayConcepts[100];
    //NumberConcepts will hold the total number of lines in our input file
    int NumberConcepts = 0;

    //Read input file and populate into ArrayConcepts
    populateArrayFromFile(INPUT_FILE_NAME, NumberConcepts, ArrayConcepts);

    //Output the number of lines (NumberConcepts) and output each line as written in the file
    cout << "The NumberConcepts (" << NumberConcepts << " in total) concepts stored in the ArrayConcepts array are:\n";
    for (int i = 0; i < NumberConcepts; i++) {
        cout << ArrayConcepts[i] << "\n";
    }
    cout << "\n\n\n";

    //Perform the selection sort algorithm on the array to alphabetize the file input lines
    sortArraySelectionSort(ArrayConcepts, NumberConcepts);

    //Output the sorted lines of the input file
    cout << "All the concepts stored in the sorted ArrayConcepts array are:\n";
    for (int i = 0; i < NumberConcepts; i++) {
        cout << ArrayConcepts[i] << "\n";
    }

    //Terminate the program
    return 0;
}

void populateArrayFromFile(string fileName, int& NumberConcepts, string ArrayConcepts[]) {
    //Open the input file to begin reading the stream
    ifstream inputFile;
    inputFile.open(fileName);

    //Using the while-loop to keep track of array indeces correlating with lines in the file
    //While-loop terminates when all lines of the file are read
    int index = 0;
    while (!inputFile.eof()) {
        //Increment NumberConcepts for each line read from the input file
        ++NumberConcepts;
        string line;
        getline(inputFile, line);
        //Populate the ArrayConcepts array with each line, which correlates to the current index
        ArrayConcepts[index] = line;
        //Increment the index after we read the input file
        ++index;
    }

    inputFile.close();
}

void sortArraySelectionSort(string ArrayConcepts[], int NumberConcepts) {
    //Declare value for storing at-time value of smallest index
    string tempValue;

    //Iterate through the unsorted array, which increments by one after each "swap"
    for (int currentIndex = 0; currentIndex < NumberConcepts - 1; currentIndex++) {

        //Assume the smallest index is the starting point of the unsorted array each time
        int smallestIndex = currentIndex;

        //Loop through the unsorted array beginning one index after the starting index
        //Since we are ignoring the starting index (assuming it is the smallest value)
        //we must make this loop go until it is less than NumberConcepts, NOT NumberConcepts - 1, like the outer loop
        for (int loopLocation = currentIndex + 1; loopLocation < NumberConcepts; loopLocation++) {
            //If the smallest value is larger than the current value, execute body
            if (ArrayConcepts[smallestIndex] > ArrayConcepts[loopLocation]) {
                //Hold the previously smallest value
                tempValue = ArrayConcepts[smallestIndex];

                //Swap the values of the previously smallest value index and the new smallest value index
                ArrayConcepts[smallestIndex] = ArrayConcepts[loopLocation];
                ArrayConcepts[loopLocation] = tempValue;

                //Set the new loopLocation to the previous smallestIndex location so it continues with the 
                //rest of the unsorted array
                smallestIndex = loopLocation;
            }
        }
    }
}