// Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int num = 5;
    char inital = 'B';
    float decimal = 4.5;
    bool isAwesome = true;
    string fName = "Ben";
    string lName = "Berry";
    int time = 0;
    string cakes[3] = { "Vanilla", "Chocolate", "Red Velvet" };

    string fullName = "John Doe";

    /*cout << "Hello World!\n";
    cout << "On a new line.\n";
    cout << num << endl;
    cout << fName << " " << lName << endl << endl;

    cout << "My first name is this long: " << fName.length() << endl;
    cout << "The third letter in my name is: " << fName[2] << endl;
    fName[0] = 'K';
    cout << fName;

    cout << 5 + 5 << endl;
    cout << 5 - 5 << endl;
    cout << 5 * 5 << endl;
    cout << 5 / 2 << endl;
    cout << ++num << endl << endl;

    cout << (num > decimal) << endl;
    cout << (num == decimal) << endl;
    cout << (num != decimal) << endl;
    cout << (num <= decimal);*/ 

    //cout << "Please enter your full name: ";
    //getline(cin, fullName);
    //cout << endl << "Your name is: " << fullName;

    //cout << max(6, 41) << endl;
    //cout << sqrt(32) << endl;
    //cout << round(5.91) << endl;
    //cout << pow(6, 41) << endl;
    /*cout << "Please enter your current time: ";
    cin >> time;

    string result = (time < 18) ? "Good day." : "Good evening";

    cout << result;*/

    //if (time < 10) {
    //    cout << "It is Morning";
    //}
    //else if (time < 20)
    //{
    //    cout << "It is Afternoon";
    //}
    //else 
    //{
    //    cout << "It is Evening";
    //}

    //do {
    //    cout << time << endl;
    //    time++;
    //} while (time < 10);

    //for (int i = 0; i < 10; i++) {
    //    if (i == 5) {
    //        break;
    //    }
    //    cout << i << endl;
    //}

    cout << cakes[0] << endl;

    for (int i = 0; i < 3; i++) {
        cout << cakes[i] << endl;
    }
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
