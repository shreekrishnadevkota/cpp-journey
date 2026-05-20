/* Data Types in C++ 
C++ has several built-in data types that can be categorized into the following groups:

1. **Primitive Data Types**: These are the basic data types provided by C++.
   - **int**: Used to store integer values.
   - **float**: Used to store single-precision floating-point values.
   - **double**: Used to store double-precision floating-point values.
   - **char**: Used to store single characters.
   - **bool**: Used to store boolean values (true or false).

2. **Derived Data Types**: These are data types that are derived from primitive data types.
   - **Arrays**: A collection of elements of the same type.
   - **Functions**: Blocks of code that perform a specific task.
   - **Pointers**: Variables that store memory addresses.

3. **User-Defined Data Types**: These are data types defined by the programmer.
   - **Classes**: A blueprint for creating objects.
   - **Structures**: A user-defined type that can contain multiple variables of different types.
   - **Unions**: A user-defined type that can hold only one of its non-static data members at a time.  
   - **Enumerations**: A user-defined type that consists of a set of named integral constants.
*/

#include <iostream>
using namespace std;

int main() {
    // Example of primitive data types
    int myInt = 10; // Integer
    float myFloat = 3.14f; // Floating-point number
    double myDouble = 3.14159; // Double-precision floating-point number
    char myChar = 'A'; // Character
    bool myBool = true; // Boolean

    cout << "Integer: " << myInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Character: " << myChar << endl;
    cout << "Boolean: " << myBool << endl;

    return 0;
}
