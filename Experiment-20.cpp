//Parth Borikar
//23070123096

//SELECTION SORT
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}
void s_sort(int *a, int elements){
    int n=0;
    int *b;

    while (n!= elements){
        b = a+1; 
        for(int i = 0; i<(elements-1)-n; i++){
            if(*a > *b) {
                swap(a,b);
            }
            b++;
        }
        n++;
        a++;
    }
}
int main(){
    int no_el;
    cout << "How many elements in your array ? "<<endl;
    cin>>no_el;
    int arr[no_el];
    cout<<"Enter "<<no_el<<" Elements: "<<endl;
    for(int i=0; i<no_el;i++){
        cin>>arr[i];
    }
    cout<<"Sorted Array: ";
    s_sort(&arr[0],no_el);

    for(int i=0; i<no_el;i++){
        cout<<arr[i]<< " ";

    }
    return 0;


}

//INSERTION SORT
#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for (int i = 1; i<n ; i++){
        int key = arr [i];
        int j =i-1;

        while (j>= 0 &&  arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }
}
int main(){
    int arr[]= {64, 25, 12,22,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< "Original array: ";
    for (int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertionsort(arr,n);
    cout<< "\n Sorted array: ";
    for (int i = 0; i< n ; i++){
        cout << arr[i]<<" ";
    }
    return 0;
    }

//BUBBLE SORT
#include<iostream>
using namespace std;

void swap(int* a,int* b){
int temp;
 temp=*a;
*a=*b;
 *b=temp;
}
int main(){
 int elements;
  cout<<"How many elements in the array? :";
  cin>>elements;
   int array[elements];
 cout<<"Enter elements:";
for(int i=0;i<elements;i++){
 cin>>array[i];
 }
for(int i=0;i<elements;i++){
 cout<<array[i]<<" ";
  }
 int n=0;
while(n!=elements){
 for(int i=0;i<elements-n;i++){
if(array[i]>array[i+1]){
swap(&array[i],&array[i+1]);
 }
}
 n++;
 }
 cout<<"\nSorted array is:"<<endl;
for(int i=0;i<elements;i++){
 cout<<array[i]<<" ";
 }

 return 0;
}
