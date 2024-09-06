# Basics-of-C++
This repository contains experiments 9, 10 which are related to the pointers in C++.

# Pointers
# EXPERIMENT 9:
## Aim: 
To study and implement call by value and call by reference.
## Theory: 
In C++, pointers are variables that store memory addresses of other variables.

They enable direct memory access and manipulation, allowing for efficient array handling, dynamic memory allocation, and complex data structures like linked lists and trees.

In C++, "call by value" refers to a method of passing arguments to functions. When you use call by value, the function receives a copy of the argument's value rather than a reference to the original data.

In C++, "call by reference" means that instead of passing a copy of a variable's value or pointer to a function, you pass a reference to the variable or pointer itself. This allows the function to modify the original variable or pointer directly.
~~~
CODE:

//Program 1 (Swap the numbers using call by value.)
#include<iostream>
using namespace std;
void swap (int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 7, b = 9;
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<"After swap: "<<a<<" "<<b<<endl;
}

//Program 2 (Swap the numbers using call by reference)
#include<iostream>
using namespace std;
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 7, b = 9;
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<"After swap: "<<a<<" "<<b<<endl;
}
~~~

# Conclusion
In C++ we have learnt about pointer operations like call by value and call by reference.

# Outputs
## Program 1
![image](https://github.com/user-attachments/assets/939d20d2-37c9-471c-a768-03276d985081)

## Program 2
![image](https://github.com/user-attachments/assets/40ce7576-6668-4f4b-bc51-d731533ec804)
