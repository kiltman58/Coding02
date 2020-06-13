/*********************
Name: Jeff Boerger
Coding 02: stack.h
Purpose: Fixing and Learning about ADTs
**********************/
#include <iostream>

#ifndef stack_h
#define stack_h
#define SIZE 10

class Stack
{
    private:
    int a[SIZE]; //Max size of Stack
    int top;
    public:

    Stack();
    
    // declaring all the functions
    bool push(int x);
    int pop();
    bool isEmpty();
    int peak();
};

#endif /* stack_h */
