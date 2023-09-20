// Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int num = 5;
    char inital = 'B';
    float decimal = 4.5;
    bool isAwesome = true;
    string fName = "Ben";
    string lName = "Berry";

    cout << "Hello World!\n";
    cout << "On a new line.\n";
    cout << num << endl;
    cout << fName << " " << lName << endl << endl;

    cout << "My first name is this long: " << fName.length() << endl;
    cout << "The third letter in my name is: " << fName[2] << endl;
    fName[0] = 'K';
    cout << fName;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
