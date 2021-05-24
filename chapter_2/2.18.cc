//Exercise 2.18: 
//Write code to change the value of a pointer. 
//Write code to change the value to which the pointer points.

#include<iostream>

int main()
{
  
    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    cout << *p;     // * yields the object to which p points; prints 42
    
    *p = 0; //assign 0 to p therefore address of ival
    cout << *p; // prints 0
    cout << ival; //prints 0
}