/*variables in c++ are containers for storing data values. they have a name, a type, and a value. the type of a variable determines what kind of data it can hold, such as integers, floating-point numbers, characters, or strings.
    if we want to store a person's age, we can create a variable called "age" and assign it a value of 25.

     Example:
        int age = 25;
*/

#include <iostream> // Header for input/output functions
using namespace std; // Using the standard namespace to avoid prefixing std:: before every standard library object

int main() { // The main function where the execution of the program begins
    int age = 20; // Declaring an integer variable named 'age' and initializing it with the value 20
    cout << "I am " << age << " years old." << endl;  // Outputting the value of 'age' to the console with a message
    return 0;  // Returning 0 indicates that the program ended successfully
}