#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

//namespace for using standard functions
using namespace std;

//Function prototype for Count
int Count(string S1, string S2);

int main()
{
	//Linking assignment text file, which has been put into the project
	const string INPUT_FILE_PATH = "D:\\Code\\COSC-1436\\COSC-1436\\KarimHussain-Assignment3B\\KarimHussain-Assignment3B\\Assignment3BDataFile.txt";
	//Ultimate output of the program; counts string matches
	int totalCount = 0;

	//Open assignment file
	ifstream inputFile;
	inputFile.open(INPUT_FILE_PATH);

	//Read through entire assignment file until we reach end of file
	while (!inputFile.eof()) {
		//Declaring string variable to read input of each line from the file
		string Line;
		inputFile >> Line;
		
		//Call Count function 3 times, per the instructions: one for each variant of "computer"
		//Store matching results into totalCount
		totalCount += Count("computer", Line);
		totalCount += Count("Computer", Line);
		totalCount += Count("COMPUTER", Line);
	}

	//Close input file since we are done reading
	inputFile.close();

	//Output the total number of string matches with a descriptive message to the user
	cout << "The total number of string matches for the given input file were: " << totalCount << "\n";

	//Terminate the program
	return 0;
}

int Count(string S1, string S2) {
	//Keep track of matching occurances 
	int matchingCount = 0;
	//Keep track of indexes where matches were found
	int indexToSearch = 0;

	//while-loop condition ensures we are running the loop body until there are no more matches
	while (!(S2.find(S1, indexToSearch) == string::npos)) {
		//The indexToSearch variable gets set to the index of the string where a match occured plus the length of the search string
		//This way, the program picks up from the index right after the current match was found, ensuring the full string gets searched for multiple matches
		indexToSearch = S2.find(S1, indexToSearch) + static_cast<int>(S1.length());
		
		//Increment our matching occurances each time we execute this loop body
		++matchingCount;
	}

	//Return the total number of matches
	//If no matches were ever found, it will return 0 since matchingCount is initialized to 0
	return matchingCount;
}