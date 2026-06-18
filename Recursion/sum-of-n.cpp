// using the formula n(n+1)/2, we can calculate the sum of first n natural numbers as shown below using a recursive function:

// #include <iostream>
// using namespace std;

// int sum(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + sum(n - 1);
// }

// int main() {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     cout << "Sum of the natural numbers is: " << sum(n) << endl;
//     return 0;
// }

// without using the formula n(n+1)/2, we can also calculate the sum of first n natural numbers using a for loop as shown below:


#include <iostream>
using namespace std;

int main(){
    int i, n, sum=0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum of natural number is " << sum << endl;
    return 0;   
}


