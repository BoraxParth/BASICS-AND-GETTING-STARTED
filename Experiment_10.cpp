//Name - Parth Borikar
//PRN -  23070123096
//Batch -  ENTC B1

//Program 1 (Swap numbers using call by value)
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

//Output
/*
Before swap: 7 9
After swap: 7 9
/*

//Program 2 (Swap number using call by reference)
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

//Output
/*
Before swap: 7 9
After swap: 9 7
*/
