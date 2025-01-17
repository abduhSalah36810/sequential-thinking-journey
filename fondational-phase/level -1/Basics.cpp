#include <iostream>
using namespace std;

// Function declaration
void demonstrateVariables();
void demonstrateConditionals();
void demonstrateLoops();
void demonstrateFunctions();

// Main function
int main() {
    cout << "Welcome to the C++ Basics Program!\n";

    demonstrateVariables();
    demonstrateConditionals();
    demonstrateLoops();
    demonstrateFunctions();

    return 0;
}

// Function to demonstrate variables and data types
void demonstrateVariables() {
    cout << "\n--- Variables and Data Types ---\n";

    // Integer
    int age = 25;
    cout << "Integer: Age = " << age << "\n";

    // Floating-point
    float pi = 3.14;
    cout << "Float: Pi = " << pi << "\n";

    // Double
    double largeNumber = 1234567.89;
    cout << "Double: Large Number = " << largeNumber << "\n";

    // Character
    char grade = 'A';
    cout << "Char: Grade = " << grade << "\n";

    // Boolean
    bool isPassed = true;
    cout << "Boolean: Passed = " << (isPassed ? "true" : "false") << "\n";

    // String
    string name = "John Doe";
    cout << "String: Name = " << name << "\n";
}

// Function to demonstrate conditionals (if, switch)
void demonstrateConditionals() {
    cout << "\n--- Conditionals ---\n";

    int number = 10;

    // If-else
    if (number > 0) {
        cout << "The number is positive.\n";
    } else if (number < 0) {
        cout << "The number is negative.\n";
    } else {
        cout << "The number is zero.\n";
    }

    // Switch
    char option = 'A';
    switch (option) {
        case 'A':
            cout << "Option A selected.\n";
            break;
        case 'B':
            cout << "Option B selected.\n";
            break;
        default:
            cout << "Invalid option.\n";
            break;
    }
}

// Function to demonstrate loops (for, while)
void demonstrateLoops() {
    cout << "\n--- Loops ---\n";

    // For loop
    cout << "For Loop: ";
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << "\n";

    // While loop
    cout << "While Loop: ";
    int count = 1;
    while (count <= 5) {
        cout << count << " ";
        ++count;
    }
    cout << "\n";

    // Do-while loop
    cout << "Do-While Loop: ";
    int num = 1;
    do {
        cout << num << " ";
        ++num;
    } while (num <= 5);
    cout << "\n";
}

// Example of a user-defined function
int addNumbers(int a, int b) {
    return a + b;
}

// Function to demonstrate user-defined functions
void demonstrateFunctions() {
    cout << "\n--- Functions ---\n";

    // Calling a function to add two numbers
    int result = addNumbers(5, 10);
    cout << "Sum of 5 and 10 = " << result << "\n";
}


