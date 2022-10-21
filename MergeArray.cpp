/******************************************************************************
Author: Danh Tran
Date: 10/20/2022
File: MergeArray.cpp
Revision: 2


Output:

Merge two sorted int arrays

After merging two arrays (a, b) :  1 3 4 5 7 8

...Program finished with exit code 0
Press ENTER to exit console.

*******************************************************************************/

#include <iostream>
#include<iostream>    
#include<algorithm>
using namespace std;


// Function declaration
void mergeArray(int a[], int b[], int c[], int sizeofArrayA, int sizeofArrayB, int sizeofArrayC);
void build(int revision);

// Global variables
string ERROR_STR = "Testing testing testing";


/****************************************************************
   Main driver

* @see mergeArray
* @return 0
*****************************************************************/
int main()
{
    cout<<"Merge two sorted int arrays";
    
    int a[] = { 1, 4, 5, 8 };
    int b[] = { 3, 7 };
    
    int n = sizeof(a) / sizeof(a[0]); // find the size of array a  
    int m = sizeof(b) / sizeof(b[0]); // find the size of array b
    
    int length = n + m;
    int c[n + m];
    
    // Call mergeArray 
    mergeArray(a, b, c, n, m, length);
    
    // Print output of merge array
    cout<<"\n\nAfter merging two arrays (a, b) : ";
    for(int i=0; i<length; i++) {
        cout<<" "<< c[i];
    }
   
    // Build function
    build(1);

    return 0;
}

/****************************************************************
   Merge two arrays together. 

* @see mergeArray
* @param a the first array.
* @param b the second array.
* @param c the merge Array
* @param sizeofArrayA 
* @param sizeofArrayB
* @param sizeofArrayC
*****************************************************************/
void mergeArray(int a[], int b[], int c[], int sizeofArrayA, int sizeofArrayB, int sizeofArrayC)
{
    int i = 0, j = 0, k = 0;  
    
    // Loop through first array and store it into mergeArray
    while (i < sizeofArrayA) { 
        c[k++] = a[i++]; 
    }  
    
    // Loop through first array and store it into mergeArray
    while (j < sizeofArrayB) { 
        c[k++] = b[j++]; 
    }  
    
    sort(c, c + sizeofArrayC);//Sorting merge array
}

/****************************************************************
   Build code

* @param revision the git resivison number.
*****************************************************************/
void build(int revision)
{
   cout << "Revision: " << revision;
}

