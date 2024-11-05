# AIM
To learn about exception handling in c++.

# Problem Statement

1.) Write a c++ program to get a customized error for entering a negative number.

2.) Write a c++ program to get a customized error for entering a year less than 2000.

# Theory

In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called exception handling. Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.

So basically using exception handling in C++, we can handle the exceptions so that our program keeps running.

# Problem Codes

```javascript
//Parth Borikar
//23070123096

//NEGATIVE NUMBER ERROR
# include<iostream>
using namespace std;
 int main()
 {  float a;
    cout<< "Enter a positive  numbers: "<<endl;
    cin>>a;

try {
    if ( a<0)
    {
        throw a;
    }
else {
 cout<< "The number  is: "<<a<<endl;
 }
}
catch (const float n)
{
    cout<<"You entered " <<a<<" which is a negative number"<<n;
}
 }

//YEAR LESS THAN 2000
# include<iostream>
using namespace std;
 int main()
 { int year;
    cout << "Enter year greater than 2000: "<<endl;
    cin>>year;

    try{
if ( year<2000)
{
    throw "You entered a year less than 2000";

}
else{
    cout<< "Entered year is: "<<year<<endl;
}
    }

    catch ( const char*msg)

    { 
        cout << msg;

    }
 }

```
# Output

1.) NEGATIVE NUMBER ERROR
![image](https://github.com/user-attachments/assets/60d152ca-9fc6-421c-a68c-69def7eec66a)


![image](https://github.com/user-attachments/assets/9815b316-4ae7-4cac-bfb6-b70fb74b94e2)


2.) YEAR EXCEPTION
![image](https://github.com/user-attachments/assets/ea6d286b-319d-44f9-9a33-48baf1333fe3)


![image](https://github.com/user-attachments/assets/6c39b3e0-f72e-4679-8906-30f33ca65189)






# Conclusion

We learnt to use exception handling in c++.
