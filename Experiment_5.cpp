// Parth Borikar
//23070123096
//Experiment 5- To study and implement C++ decision making statements

//Exp 5.1 
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<10;i++){
        cout<<"Hello World ("<<i+1<<")"<<endl;
    }
    return 0;
}

//Exp 5.2

#include <iostream>
using namespace std;
int main()
{
    int i, j, k=0, n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        while(k!=(i-1)){
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
}
