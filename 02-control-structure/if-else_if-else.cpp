#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter a number:"<< endl;
    cin >> num;

    if (num > 0){
        cout << "the number is greater than zero"<< endl;

    }
    else if (num < 0) {
        cout << "the number is less than zero"<< endl;
    }
    else {
        cout << "the number is equal to zero"<< endl;
    }
    return 0;
}
