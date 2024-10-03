//DEFINE CONSTRUCTOR.
#include<iostream>
using namespace std;
class MyClass{
    public:
    string a;
MyClass(){

    cout<< "Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< " from constructor !!"<<endl;

}
};
int main(){
    MyClass obj;
    return 0;
}

//PARAMETERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class MyClass{
    public:
    int c;
    MyClass(int val)
{
    c = val*val;
    cout<<"Square of "<<val<<" is: "<<c<<endl;
    
}
};
int main() {
    MyClass obj(9);
    return 0;
}


//COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year "<<value<<endl;

    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
    }

//DEFAULT ARGUMENT
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value1;
    int value2;
    string str1;
    public:
    
    MyClass( int val1= 0, int val2= 0, string a = "none"){
        str1 = a;
        value1= val1;
        value2 = val2;
        cout<<str1<<" played "<<value1<<" ODI matches."<<endl;
        cout<<"He scored "<< value2 << " centuries."<<endl;

    }
};
int main()
{
   
    MyClass obj1(463,49, "Sachin");
    return 0;
    }

//AREA OF RECTANGLE
#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;



    public:
int s,w;
void getinput()
         { 
            cout<<"Enter length and breadth"<<endl;
            cin>>s>>w;
         }

         void display()
         { int a;
         l=s;
         b=w;
    
            a = l*b;
         cout<<"Area of rectangle is: "<< a<< endl;
         }
};
int main(){
    
    MyClass obj1;
    obj1.getinput();
    obj1.display();

    return 0;

//DECONSTURCTOR
#include<iostream>
using namespace std;
class MyClass{
    public:
    ~MyClass(){
        cout<<"Destructor called! "<< endl;
    }
    MyClass(){
        cout<<"Constructor called!"<<endl;

    }
    };
    int main(){
        MyClass obj;
        return 0;
    }
}
