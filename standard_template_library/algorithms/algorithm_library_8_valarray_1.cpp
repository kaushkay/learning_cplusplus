/*
valarray in c++

It supports element-wise mathematical operations and various forms of generalized subscript operators, slicing and indirect access.

As compare to vectors, valarrays are efficient in certain mathematical operations than vectors also.

Public member functions in valarray class :

1. apply() :- This function applies the manipulation given in its arguments to all the valarray elements at once and returns a new valarray with manipulated values.

2. sum() :- This function returns the summation of all the elements of valarrays at once.

*/



#include<iostream>
#include<vector>
#include<algorithm>
#include<valarray>

using namespace std;

int main(){

    // Initializing valarray 
    valarray<int> varr = { 10, 2, 20, 1, 30 };

    valarray<int> varr1;
    // Using apply() to increment all elements by 5 

    varr1 = varr.apply([](int x){return x = x+5;});

    // Displaying new elements value 
    cout << "The new valarray with manipulated values is : "; 
    for (int i=0; i<varr1.size(); i++){
        cout << varr1[i] << " "; 
    }
    cout << endl; 

    // Displaying sum of both old and new valarray
    cout << "The sum of old valarray is : "; 
    cout << varr.sum() << endl; 
    cout << "The sum of new valarray is : "; 
    cout << varr1.sum() << endl; 





    return 0;
}