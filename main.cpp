/*********************
 Name: Jeff Boerger
 Coding 02: main.cpp
 Purpose: Fixing and Learning about ADTs
 **********************/
#include "main.h"

// main function
int main() {
    bool test;
    Stack s1;
    s1.push(10);
    s1.push(100);
    s1.pop();
    s1.pop();
    /*
     preform whatever operation you want on the stack
     */
    for(int j = 0; j < 50; j++){
        std::cout << "\n\nTest "<< j+1 << " of 50"<< std::endl;
        
        //Testing Stack Usage
        try {
            for (int i = 0; i < 100; i++)
            {
                std::cout << "Adding " << i*2 << " to the Stack" << std::endl;
                s1.push(i * 2);
                std::cout << "Peaking at " << s1.peak() << " on the Stack" << std::endl;
                std::cout << "Recieved " << s1.pop() << " from the Stack. This should match the line above." << std::endl;
            }
        } catch (int e) {
            std::cout << "If you are reading this DANGER WILL ROBINSON!!!"<< std::endl;
        }
        if (s1.isEmpty()){
             std::cout << "The Stack is Empty"<< std::endl;
        }
        
        //Testing isEmpty
        try {
            s1.push(100);
            for (int i = 0; i < 11; i++){
                s1.pop();
                if (s1.isEmpty()){
                     std::cout << "The Stack is Empty"<< std::endl;
                }
            }
        } catch (int e) {
            std::cout << "Stack Underflow"<< std::endl;
        }
        if (s1.isEmpty()){
             std::cout << "The Stack is Empty"<< std::endl;
        }
        
        // Testing Stack Overflow
        try {
            for (int i = 0; i < 11; i++){
                test = s1.push(i * 2);
                if(! test){
                    std::cout << "Stack is Full; Not adding Value \n";
                }
            }
        } catch (int e) {
            std::cout << "Stack Overflow"<< std::endl;
        }
        if (s1.isEmpty()){
             std::cout << "The Stack should not be empty here, Something went HORRIBLY wrong!"<< std::endl;
        }
        
        //Testing Underflow
        try {
            for (int i = 0; i < 11; i++){
                s1.pop();
            }
        } catch (int e) {
            std::cout << "Stack Underflow"<< std::endl;
        }
        if (s1.isEmpty()){
             std::cout << "The Stack is Empty"<< std::endl;
        }
        
        
        
    }
}
