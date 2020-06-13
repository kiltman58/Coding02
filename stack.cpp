/*********************
Name: Jeff Boerger
Coding 02: stack.cpp
Purpose: Fixing and Learning about ADTs
**********************/

#include "stack.h"

//Constructor
Stack::Stack(){
    top = -1;
}

// function to insert data into stack
bool Stack::push(int x)
{
    if(top >= SIZE - 1)
        return 0;
    else
        a[++top] = x;
        return 1;
}

// function to remove data from the top of the stack
int Stack::pop()
{
    if(top < 0)
        throw -1;
    else
        return a[top--];
}

// function to check if stack is empty
bool Stack::isEmpty()
{
    if(top < 0)
        return 1;
    else
        return 0;
}

int Stack::peak()
{
    if(top < 0)
        throw -1;
    else
        return a[top];
}
