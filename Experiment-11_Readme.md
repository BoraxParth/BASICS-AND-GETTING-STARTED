# AIM
To learn about object oriented programing using class and methods.

# Software Used
VS Code

# Problem Statements

1.) Write a c++ program to show car details using class.

2.) Write a c++ program to make a class by using function.

3.) Write a c++ program to calculate are of rectangle using class.

4.) Write a c++ program to make a class by taking inputs from user.

# Theory
Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc. in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

Class- A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

Class methods – also known as member functions – are functions defined inside a class that operates on the class objects. They access the class's data members and other member functions and define the behavior or actions that objects of the class can perform.

# Problem Codes
```javascript
 //PARTH BORIKAR
 //23070123096

//CAR DETAILS
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}

//CLASS BY FUNCTION
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "Muse";
    string genre = "Rock";
    string country = "England";
    int year = 1994;
    

    void displayInfo(){
cout<< "Band details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Genre: "<< genre<<endl;
 cout <<"Origin: "<< country<<endl;
 cout <<"Established: "<<year<<endl;
    }
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    }

//AREA OF RECTANGLE
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}

//USER CLASS
#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}

```
# Output

1.) CAR DETAILS
![image](https://github.com/user-attachments/assets/7bf2dbfb-c8e3-427e-b88f-265f8c0b9388)




2.) CLASS BY FUNCTION
![image](https://github.com/user-attachments/assets/7a2b9128-011d-4808-9139-5fa33d7819f1)


3.) AREA OF RECTANGLE
![image](https://github.com/user-attachments/assets/32c6bc42-4e7b-45b8-a030-12da364efb6b)


4.) USER CLASS
![image](https://github.com/user-attachments/assets/4520cbed-d301-433a-b65b-baea12db1447)


# Conclusion

We learnt to declare class.

We learnt to create a class by taking inputs from user.

We learnt to make a class by function.
