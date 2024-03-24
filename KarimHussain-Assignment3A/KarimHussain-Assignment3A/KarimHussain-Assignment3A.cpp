#include <iostream>

using namespace std;

//Function prototypes
int KarimHussainFunction1();
void KarimHussainFunction2(int N);
void KarimHussainFunction3(int N1, int N2);

int main()
{
    //Declare int variables
    int Number1;
    int Number2;

    //Call function that prompts user for input, assign to Number1
    Number1 = KarimHussainFunction1();
    KarimHussainFunction2(Number1);
    
    //Call function that prompts user for input, assign to Number2
    Number2 = KarimHussainFunction1();
    KarimHussainFunction2(Number2);

    //Call output function twice; expectation is to get forward & reverse order in output
    KarimHussainFunction3(Number1, Number2);
    KarimHussainFunction3(Number2, Number1);
}

int KarimHussainFunction1() {
    int N;

    cout << "Please enter an integral number: \n";
    cin >> N;

    //Returning user-input integer
    return N;
}

void KarimHussainFunction2(int N) {
    //Returning parameter provided integer
    cout << "The integral number is " << N << "\n";
}

void KarimHussainFunction3(int N1, int N2) {
    //Note: Instructions did not provide use-case for when integers are equal, so this function does not consider it

    //N1 will be our starting iterator variable in both cases
    int numberToPrint = N1;

    //If N1 is smaller than N2, output from increasing order
    if (N1 < N2) {
        for (; numberToPrint <= N2; numberToPrint++) {
            cout << numberToPrint << " ";
        }
    }
    //If N1 is bigger than N2, output from decreasing order
    else if (N1 > N2) {
        for (; numberToPrint >= N2; numberToPrint--) {
            cout << numberToPrint << " ";
        }
    }

    cout << "\n";
}