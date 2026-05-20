/* Identifiers in C++ 
In C++, an identifier is the name used to identify variables, functions, classes, and other user-defined entities. An identifier must follow certain rules:

1. An identifier can contain letters (a-z, A-Z), digits (0-9), and underscores (_).
2. An identifier cannot start with a digit.
3. An identifier is case-sensitive.
4. An identifier cannot be a reserved keyword in C++.
Example of valid identifiers:
- myVariable
*/

#include <iostream>
using namespace std;
int main() {
    int myVariable = 10; // Declaring an integer variable named 'myVariable' and initializing it with the value 10
    cout << "The value of myVariable is: " << myVariable << endl; // Outputting the value of 'myVariable' to the console
    return 0; // Returning 0 indicates that the program ended successfully
}