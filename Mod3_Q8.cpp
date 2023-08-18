#include <iostream>

using namespace std;

/*
Create a simple program in Python or C++ where you add the sum of two numbers and determine if the sum is odd or even.
      - Name your file: Mod3_Q8
      - Remember to use appropriate naming conventions for your functions and variables.
      - Add comments to the code.
      - Stage, commit, and push your file to the Module3 branch in your repository.
*/

int main() {
    // variables for math
    int num1;
    int num2;

    // getting numbers from user
    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter a number: ";
    cin >> num2;

    // calculate and display the sum
    cout << "\nSum: " << num1 + num2 << endl;

    // displays if the sum is even or odd
    if ((num1 + num2) % 2 == 0) {
        cout << "\neven" << endl;
    }
    else {
        cout << "\nodd" << endl;
    }
}