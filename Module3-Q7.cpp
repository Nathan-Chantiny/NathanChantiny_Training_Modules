#include <iostream>

int main() {
    // variables to find the average of
    float num1, num2, num3, num4;

    // getting all 4 numbers for the average
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // calculates and stores the average 
    float average = (num1 + num2 + num3 + num4) / 4;

    // displays the 4 numbers and their average rounded to 2 decimal places
    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}