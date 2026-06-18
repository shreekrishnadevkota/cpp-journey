#include <iostream>
using namespace std;

class Factorial {
public:
    static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }
};

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    Factorial factobj;
    cout << "Factorial of  is: " << factobj.factorial(n) << endl;
    return 0;
}
