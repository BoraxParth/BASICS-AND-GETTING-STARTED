
#   AIM

To learn about VS code and getting input from user and displaying it.

# Software Used
VS Code

# Problem Statement
 1.) Write a program to print simple 'Hello world' message.

 2.) Write a program to get the  input from user and displaying it.
 
 3.) Write a program to create a basic calculator.

 # Theory
To print a message or output we use _'cout'_ .

The namespace is used to decrease or limit the scope of any variable or function.
 
 _'endl'_ is used to move the cursor to the new line.


## Program Codes


```javascript
//Print hello world
#include<iostream>
using namespace std;
int main()
{
    cout<< "Hello World!";
    return 0;
}


 
// Input from user
#include<iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter your name ";
    getline(cin,a);
    cout<<"Hello  " <<a;
    return 0;
}

//Calculator 
#include<iostream>
using namespace std;
int main()
{ float a,b,c,d,e,f;
    cout<<"enter first number ";
    cin >> a;
    cout<< "enter second number ";
    cin >> b;
    c = a+b ;
    cout << "Sum is: " <<c<<endl;
    d = a-b;
    cout<< "Difference is: "<<d<<endl;
    e = a*b;
    cout<<"Product is:" << e <<endl;
    f = a/b;
    cout<<"Quotient is: "<<f<<endl;
    return 0;
}
```


## Output

1.) Print hello world
![image](https://github.com/user-attachments/assets/749b9a1d-5818-4376-9c61-36c5b8f6f772)


2.) Input from user
![image](https://github.com/user-attachments/assets/399b92c2-1239-44d2-a1e3-db0094b2d286)


3.) Calculator
![image](https://github.com/user-attachments/assets/19eeb2ab-959a-48bc-9332-f843b65c7789)



# Conclusion
We learnt how to take input from user and print it, we learnt to use basic operators like +, - , * and /.



