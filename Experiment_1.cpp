#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout<<"Enter the number of natural numbers you want to add : ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum= sum+i;
    }
    cout<<"The sum of first "<<n<<" is "<<sum;
}
