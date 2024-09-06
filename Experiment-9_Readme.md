# AIM
To use pointers and access elements of array and find address of different data types.

# Software Used
VS Code

# Problem Statement

1.) Write a c++ program to initialize pointers of different data types and print the required values.

2.) Write a c++ program to access elements of array using pointer.

3.) Write a c++ program to access elements of array without using pointer variable.

# Theory

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

# Problem Codes

```javascript
 //PARTH BORIKAR
 //23070123096

 //INITIALIZE POINTERS OF DIFFERENT DATA TYPES

//INT
 #include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//FLOAT
 #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//CHAR
#include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    

    char *ptr;

    ptr = &a;

    cout<< "The value pointed by *ptr is"<<*ptr << endl;
    cout << "The value in b is" <<a << endl;
    cout << "The value in pointer variable ptr is"<<(void*)ptr << endl;

    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;

    
}


//ACCESS ELEMENTS OF ARRAY USING POINTER.

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}

//ACCESS ELEMENTS OF ARRAY WITHOUT USING POINTER VARIABLE.

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;

    }
}


```

# Output

1.) INITIALIZE POINTERS OF DIFFERENT DATA TYPES

   A.) INT
 ![image](https://github.com/user-attachments/assets/818fe5b8-55dc-47c5-a6a0-b55ad0555348)


     
   B.) FLOAT
   ![image](https://github.com/user-attachments/assets/eb4b4ed2-82ea-468a-801d-25bcf3af0fad)



   C.) CHAR
   ![image](https://github.com/user-attachments/assets/f104efe8-278a-48f4-a678-ac1cdedf8958)



2.) ACCESS ELEMENTS OF ARRAY USING POINTER
![image](https://github.com/user-attachments/assets/0aed3f9d-271c-4cef-9515-6f3492c396b4)



3.) ACCESS ELEMENTS OF ARRAY WITHOUT USING POINTER VARIABLE
![image](https://github.com/user-attachments/assets/c77bd091-5e6b-4722-878f-a82fd6dda85d)


# Conclusion

We learnt to initialize pointers of different data types.

We learnt to access elements of array using pointers and without pointers variable.


