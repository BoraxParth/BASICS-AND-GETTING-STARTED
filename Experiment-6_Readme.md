# Aim
To learn about for loop and while loop.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ code for printing numbers using for loop.

2.) Write a c++ code for printing numbers using while loop.

3.) Write a c++ code for making a triangular star pattern.

4.) Write a c++ code for making a square shaped star pattern.

5.) Write a c++ code for making a pyramid of star.

6.) Write a c++ code to get sum of the numbers printed.

7.) Write a c++ code to make a Floyd triangle.

8.) Write a c++ code to make Floyd triangle of alphabets.

9.) Write a c++ code for password validation till correct password is entered.

#  Theory
In C++, for loop is an entry-controlled loop that is used to execute a block of code repeatedly for the specified range of values. Basically, for loop allows you to repeat a set of instructions for a specific number of iterations.

While Loop in C++ is used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test condition. Loops in C++ come into use when we need to repeatedly execute a block of statements.

Floyd's triangle is a triangular array of natural numbers used in computer science education. It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left corner

# Program Codes
```javascript
 //Printing numbers using for loop.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}

//Printing numbers using while loop.
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}

//Triangular star pattern
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Square shaped star pattern.
#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}

//Pyramid of star
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Sum of the numbers printed
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        

    }
    cout << "Sum is: "<<sum;
    return 0;

}

//Floyd triangle
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Floyd triangle of alphabets
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Password validation
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Success !!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
```
#Output
1.) Printing numbers using for loop.
![image](https://github.com/user-attachments/assets/057bd795-0a49-4cc4-93c4-d0e98b89d9eb)



2.) Printing numbers using while loop.
![image](https://github.com/user-attachments/assets/f855fe00-43a4-4e0b-ad0a-7ced99e1744d)



3.) Triangular star pattern
![image](https://github.com/user-attachments/assets/cbc8da72-66e8-427f-99a9-c0a445a9f008)


4.) Square shaped star pattern
![image](https://github.com/user-attachments/assets/a509f593-0f3c-4a51-8775-f788b02ec36c)


5.) Pyramid of star
![image](https://github.com/user-attachments/assets/726901d8-3113-4e42-8ed2-8faa105fe3ae)


6.) Sum of the numbers printed
![image](https://github.com/user-attachments/assets/520ba10b-f5d2-4026-a1df-65832fc5da76)


7.) Floyd triangle
![image](https://github.com/user-attachments/assets/09da9233-762e-41af-a239-e6740d39c6f7)



8.) Floyd triangle of alphabets
![image](https://github.com/user-attachments/assets/73f4b5aa-4663-40d3-ba76-a8265b493513)



9.) Password validation
![image](https://github.com/user-attachments/assets/b7958d07-05d8-4e25-a4cf-b96828f65f91)


# Conclusion
We learnt to use for loop, while loop and nested for loop.


