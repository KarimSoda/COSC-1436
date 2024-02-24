#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declaration of subject number 
	int SubjectNumber;
	//Declaration of subject name
	string SubjectName;
	//Declaration of rubric number 
	int RubricNumber;
	//Declaration of rubric name
	string RubricName;
	//Declaration of course number 
	int CourseNumber;
	//Declaration of course name 
	string CourseName;
	//Declaration of section number 
	int SectionNumber;
	//Declaration of section name 
	string SectionName;

	//SUBJECT options
	cout << setw(2) << "SUBJECT" << endl;
	cout << setw(2) << "1" << "\tComputer Science" << endl;
	cout << setw(2) << "2" << "\tBusiness Computer Applications" << endl;
	cout << setw(2) << "3" << "\tComputer Information Technology" << endl;
	cout << endl;

	//Take in option number from user
	cout << "Please enter the option number for your subject selection" << endl;
	cin >> SubjectNumber;
	cout << endl;

	//Switch control mechanism for subject number
	switch (SubjectNumber) {
	case 1:
		SubjectName = "Computer Science";
		break;
	case 2:
		SubjectName = "Business Computer Applications";
		break;
	case 3:
		SubjectName = "Computer Information Technology";
		break;
	default:
		cout << "Unknown subject option - " << SubjectNumber << " - entered" << endl;
		return 1;
	}

	//RUBRIC options
	cout << setw(2) << "RUBRIC" << endl;
	cout << setw(2) << "1" << "\tCOSC" << endl;
	cout << setw(2) << "2" << "\tBCIS" << endl;
	cout << setw(2) << "3" << "\tITSC" << endl;
	cout << setw(2) << "4" << "\tITSE" << endl;
	cout << endl;

	//Take in option number from user
	cout << "Please enter the option number for your rubric selection" << endl;
	cin >> RubricNumber;
	cout << endl;

	//Switch control mechanism for rubric number
	switch (RubricNumber) {
	case 1:
		RubricName = "COSC";
		break;
	case 2:
		RubricName = "BCIS";
		break;
	case 3:
		RubricName = "ITSC";
		break;
	case 4:
		RubricName = "ITSE";
		break;
	default:
		cout << "Unknown rubric option - " << RubricNumber << " - entered" << endl;
		return 1;
	}

	//COURSE options
	cout << setw(2) << "COURSE" << endl;
	cout << setw(2) << "1" << "\t1436" << endl;
	cout << setw(2) << "2" << "\t1437" << endl;
	cout << setw(2) << "3" << "\t2436" << endl;
	cout << setw(2) << "4" << "\t1301" << endl;
	cout << setw(2) << "5" << "\t1405" << endl;
	cout << endl;

	//Take in option number from user
	cout << "Please enter the option number for your course selection" << endl;
	cin >> CourseNumber;
	cout << endl;

	//Switch control mechanism for course number
	switch (CourseNumber) {
	case 1:
		CourseName = "1436";
		break;
	case 2:
		CourseName = "1437";
		break;
	case 3:
		CourseName = "2436";
		break;
	case 4:
		CourseName = "1301";
		break;
	case 5:
		CourseName = "1405";
		break;
	default:
		cout << "Unknown course option - " << CourseNumber << " - entered" << endl;
		return 1;
	}

	//SECTION options
	cout << setw(2) << "SECTION" << endl;
	cout << setw(2) << "1" << "\t82001" << endl;
	cout << setw(2) << "2" << "\t82002" << endl;
	cout << setw(2) << "3" << "\t82003" << endl;
	cout << setw(2) << "4" << "\t82701" << endl;
	cout << setw(2) << "5" << "\t82702" << endl;
	cout << endl;

	//Take in option number from user
	cout << "Please enter the option number for your section selection" << endl;
	cin >> SectionNumber;
	cout << endl;

	//Switch control mechanism for section number
	switch (SectionNumber) {
	case 1:
		SectionName = "82001";
		break;
	case 2:
		SectionName = "82002";
		break;
	case 3:
		SectionName = "82003";
		break;
	case 4:
		SectionName = "82701";
		break;
	case 5:
		SectionName = "82702";
		break;
	default:
		cout << "Unknown section option - " << SectionNumber << " - entered" << endl;
		return 1;
	}

	//Output to user the class registration result from inputs
	cout << "You are now registered for the " << SubjectName << " course " << RubricName << "-" << CourseName << "-" << SectionName << "!" << endl;

	//Terminate program
	return 0;
}