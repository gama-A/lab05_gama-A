// usestack.cpp - for CS 24 lab practice using stacks
// Gama Aristondo 5/15/20

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << s.top() << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    cout << s.empty() << endl;

    // Evaluating (((8*8)/2) - 4)
    // "8 8 * 2 / 4 -"
    // empty stack
    Stack numbers;

    // Push first two numbers
    numbers.push(8);
    numbers.push(8);

    // Next is * operator
    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(right * left);

    // Push next number
    numbers.push(2);

    // Next operator is /
    right = numbers.top();
    numbers.pop();
    left = numbers.top();
    numbers.pop();
    numbers.push(left / right);

    // Push next number
    numbers.push(4);

    // Next operator is -
    right = numbers.top();
    numbers.pop();
    left = numbers.top();
    numbers.pop();
    numbers.push(left - right);

    // Result
    cout << numbers.top() << endl;

    return 0;
}
