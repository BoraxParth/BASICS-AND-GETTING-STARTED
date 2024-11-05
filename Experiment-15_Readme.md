# AIM
To learn about recursion in c++.

# Problem Statement
1.) Write a c++ program to get factorial of a number using recursion.

2.) Write a c++ program to find fibonacci number in the fibonacci sequence using recursion.

3.) Write a c++ program to find sum of n natural numbers using recursion.

# Theory

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.


# Problem Codes
```javascript
//Parth Borikar
//23070123096

//FACTORIAL
# include<iostream>
using namespace std;
 int factorial (int n)
{ if ( n == 0)
{
    return 1;
}
else 
{
    return n*factorial(n-1);
    }
    }
    int main()
    {  int num;
       cout<<"Enter a number: "<<endl;
       cin>>num;

       cout<<"The factorial of "<<num<<" is: "<< factorial(num)<<endl;
       return 0;
    }

//FIBONACCI SEQUENCE
# include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
     return (fib(n-1) + fib(n-2));
    }

}
int main()
{
    int f,n;
    cout << "Enter number of elements: "<<endl;
    cin >> n ;

    cout << n <<"th Fibonacci number in Fibonacci sequence is: "<<fib(n) ;
 
}

//SUM OF 'n'  NATURAL NUMBERS
# include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        cout<< " Number should be greater than 1"<<endl;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
     return (n+sum(n-1));

    }
}
    int main()
{
    int f,n;
    cout << "Enter a number : ";
    cin >> n ;

    cout << n <<endl<<"Sum of numbers from 1 to "<<n<<" is: "<<" : "<<sum(n) ;
 
}
```

# Output
1.) FACTORIAL
![image](https://github.com/user-attachments/assets/0cb1c53a-ce2a-418c-b909-7334cd3b3853)


2.) FIBONACCI SEQUENCE
![image](https://github.com/user-attachments/assets/3a03392a-377f-4c4f-b652-705451a58a74)

3.) SUM OF 'n'  NATURAL NUMBERS
![image](https://github.com/user-attachments/assets/34ca3014-4d9a-4769-8a4a-52f871ee1e48)





# Conclusion

We learnt to find factorial, fibonacci sequence and sum of 'n' natural numbers using recursion.
