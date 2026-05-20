/* Operators in C++
Operators are symbols that perform operations on variables and values. C++ provides a wide range of operators, including:
1. Arithmetic Operators: +, -, *, /, %
2. Assignment Operators: =, +=, -=, *=, /=, %=
3. Comparison Operators: ==, !=, >, <, >=, <=
4. Logical Operators: &&, ||, ! 
*/

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus
    cout << ""<< endl; // New line for better readability

    // Comparison Operators
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << ""<< endl; // New line for better readability

    // Logical Operators
    bool x = true, y = false;
    cout << "x && y: " << (x && y) << endl; // Logical AND
    cout << "x || y: " << (x || y) << endl; // Logical OR
    cout << "!x: " << (!x) << endl;         // Logical NOT
    return 0;
}
