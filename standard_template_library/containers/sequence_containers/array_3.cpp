/*
6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack.

7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value.
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<array> // for array, at() 
#include<tuple> // gor get()

using namespace std;

int main(){

    array <int, 6> ar = {1,2,3,4,5,6};

    // Printing number of array elements 
    cout<<"Printing number of array elements ";
    cout<<ar.size();
    cout<<endl;
    // Printing maximum elements array can hold.
    cout<<"Printing maximum elements array can hold ";
    cout<<ar.max_size();
    cout<<endl;




    return 0;
}