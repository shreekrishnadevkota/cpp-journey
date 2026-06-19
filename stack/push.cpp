#include <iostream>
using namespace std;

#define MAXSIZE 5

class Stack{
    private:
        int tos;
        int arr[MAXSIZE];
    public:
        Stack(){ tos = -1; }

        void push(int data){
            if (tos == MAXSIZE - 1){
                cout << "Error: stack overflow, cannot push\n";
                return;
            }
            arr[++tos] = data;
        }

        int pop(){
            if (tos == -1){
                cout << "Error: stack underflow, cannot pop\n";
                return -1;
            }
            return arr[tos--];
        }

        void display(){
            if (tos == -1){
                cout << "Stack is empty\n";
                return;
            }
            cout << "Stack contents (top->bottom): ";
            for (int i = tos; i >= 0; --i){
                cout << arr[i];
                if (i > 0) cout << " ";
            }
            cout << "\n";
        }
};

int main(){
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.display();

    int v = s.pop();
    if (v != -1) cout << "Popped: " << v << "\n";
    v = s.pop();
    if (v != -1) cout << "Popped: " << v << "\n";

    s.display();

    // pop remaining and show underflow
    s.pop();
    s.pop();
    s.pop(); // should trigger underflow

    return 0;
}