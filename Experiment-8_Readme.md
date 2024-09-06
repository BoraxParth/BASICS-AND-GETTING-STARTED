# AIM
To create a matrix by taking inputs from user and doing operations on it.

# Software Used
VS Code

# Problem Statement
1.) To make a matrix by taking number of rows and column from user.

2.) To make a matrix by taking number of rows and column from user and do their addition and multiplication.

3.) To add the diagonal elements of the matrix.

4.) To make the transpose of a matrix.

# Theory
An array is a type of data structure used to store the collection of the same data type items held at contiguous memory locations. Arrays can be one-dimensional or multidimensional based on the number of directions in which the array can grow. In this article, we will study multidimensional arrays such as two-dimensional arrays and three-dimensional arrays.

To multiply two matrices, the number of columns of first matrix should be equal to the number of rows to second matrix. This program displays the error until the number of columns of first matrix is equal to the number of rows of second matrix.

Matrix addition is a basic C++ procedure that merges two matrices to create a new matrix. Matrices are two-dimensional numerical arrays with rows and columns.

# Program Codes
```javascript
//PARTH BORIKAR
//23070123096

//MATRIX FROM USER
#include<iostream>
using namespace std;
int main()
{
    int r,c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r ;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c];
    for (i=0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>arr[i][j];
        }
    }
for (i=0 ; i<r ; i++)
{
    for(j = 0; j< c ; j++ )
    { 
        cout<< " "<< arr[i][j];
    }
    cout<<endl;
}

}

//MATRIX ADDITION & MULTIPLICATION
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d , i , j ,k , e, f;
    cout<< " Enter matrix-1 rows: ";
    cin>> a ;
    cout<<" Enter matrix-1 columns: ";
    cin>> b;
    cout<< " Enter matrix-2 rows: ";
    cin>> c ;
    cout<<" Enter matrix-2 columns: ";
    cin>> d;

    int mat1[a][b];
    int mat2[c][d];
    int add [a][b];
    int mul [a][d];
    
 
//Taking elements of the matrix   
for (i=0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>mat1[i][j];
        }
    }


    for (i=0 ; i < c ; i++)
    {
        for(j = 0 ; j < d ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>mat2[i][j];
        }
    }
//Checking condition for addition of matrices using if-else loop.
    if ( a !=c || b!=d)
    {
        cout<< "Matrix cannot be added as dimension do not match."<<endl;
    }
    
else
{for (i=0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {
            add[i][j] = mat1[i][j] + mat2 [i][j];

        }
    }
//Printing the sum of matrices.
cout<<"ADDITION OF MATRIX: "<<endl;
for (i=0 ; i< a ; i++)
{
    for(j = 0; j< b ; j++ )
    { 
        cout<< " " <<add[i][j];
    }
    cout<<endl;
}}
//Checking condition for multiplication of matrices.
    if( b != c)
{
    cout<< "Matrices cannot be multiplied as dimensions do not match." <<endl;
    return 1;
}
for(i = 0; i<a ; i++)
{
    for( j = 0; j<d ; j++)
    {
        mul[i][j] = 0;
        for( k=0; k<b ; k++)
        {
            mul[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
//Printing the product of matrices.
cout << "MULTIPLICATION OF MATRIX: "<<endl;
for (i=0 ; i< a ; i++)
{
    for(j = 0; j<d ; j++ )
    { 
        cout<< " " <<mul[i][j];
    }
    cout<<endl;
}
}



//ADDITION OF DIAGONAL ELEMENTS
#include<iostream>
using namespace std;
int main()

{ int i,j, r1, c1, sum=0, sum2=0;
 cout<<"Enter number of rows and columns of matrix: ";
cin>>r1>>c1;
int mat1[r1][c1];
//Checking if square matrix or not
if(r1!=c1)
{
    cout<<"ONLY SQUARE MATRIX ARE TO BE ENTERED!"<<endl;
}
else
{
for(i=0; i<r1; i++)
{
    for (j=0 ; j<c1 ; j++)
    {
        cout<<"Enter elements ("<<i<< "," <<j<<"): ";
        cin>>mat1[i][j];
    }
}


for(i=0; i<r1; i++)
{
    for (j=0 ; j<c1 ; j++)
    { if(i==j)
    {
        sum +=mat1[i][j];
    }
    if (i+j == r1-1)
    sum2 += mat1[i][j];
    }
    }
    cout<< "Sum of diagoal elements is: "<<sum<<endl;
    cout<<"Sum of diagonal elements is: "<<sum2<<endl;
}

}

//TRANSPOSE OF MATRIX
#include<iostream>
using namespace std;
int main()
{
    int r,c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c], arr2[c][r];
    for (i=0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>arr[i][j];
        }
    }
for (i=0 ; i<r ; i++)
{
    for(j = 0; j< c ; j++ )
    { 
        cout<< " "<< arr[i][j];
    }
    cout<<endl;
}
for (i=0 ; i<c ; i++)
{
    for(j = 0; j< r ; j++ )
    { 
        arr2[i][j]= arr[j][i];
    }

    
}
cout<<endl;
for (i=0 ; i<c ; i++)
{
    for(j = 0; j< r ; j++ )
    { 
        cout<< " "<< arr2[i][j];
    }
    cout<<endl;
}

}

```
# Output
1.) MATRIX FROM USER
![image](https://github.com/user-attachments/assets/0a00c1d7-c9e2-4038-b4b6-55a6ba0aaf0d)


2.) MATRIX ADDITION AND MULTIPLICATION
![image](https://github.com/user-attachments/assets/c5d6ebf7-c879-42e5-b35d-c687ac5bda48)

![image](https://github.com/user-attachments/assets/1abbb4dd-c11e-4e25-ab6a-575bdfe9350c)

![image](https://github.com/user-attachments/assets/8ac389e0-0766-4ea8-9825-4f7caaa01251)

![image](https://github.com/user-attachments/assets/9d604a29-1fb3-490b-ae09-783cbdfff36b)


3.) ADDITION OF DIAGONAL ELEMENTS
![image](https://github.com/user-attachments/assets/05d1d778-771d-4f3e-bd10-aa98151be9c9)

![image](https://github.com/user-attachments/assets/a0c6dda1-74b7-4f5b-9f3a-c2d72ea9b347)


4.) TRANSPOSE OF A MATRIX
![image](https://github.com/user-attachments/assets/e26581c0-5510-40cd-ac7d-4b2ffd40b876)



# Conclusion
We learnt to take inputs from user and print the matrix from it, adding and multiplying two matrices using for loop, adding the diagonal elements of the matrix and transpose of a matrix.
