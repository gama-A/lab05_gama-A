// usestack.cpp - for CS 24 lab practice using stacks
// NAME(S), DATE

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

    return 0;
}
