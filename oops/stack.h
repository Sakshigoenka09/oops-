#include<iostream>
using namespace std;

class Stack
{
    int* arr;
    int top;
    int size;
    
    public:
        Stack();
        void init (int end);
        void push(int value);
        int pop();
        void display();
};