// #include <iostream>
// using namespace std;

// class fibonacci {
//     public:
//     static int fib(int n) {
//             if (n == 1 || n == 0) {
//                 return 1;
//             }
//             return fib(n - 1) + fib(n - 2);
//         }
// };

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     fibonacci fibobj;
//     cout << "Fibonacci series is : " << fibobj.fib(n) << endl;
//     return 0;
// }





#include <iostream>
using namespace std;

class fibonacci {
    public:
    static int fib(int n) {
            if (n == 1 || n == 0) {
                return 1;
            }
            return fib(n - 1) + fib(n - 2);
        }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fibonacci fibobj;
    cout << "Fibonacci series is : ";
    for (int i = 0; i < n; i++) {
        cout << fibobj.fib(i) << " ";
    }
    return 0;
}
