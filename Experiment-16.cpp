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
