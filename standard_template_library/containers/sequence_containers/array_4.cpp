/*
swap() :- The swap() swaps all elements of one array with other.
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<array> // for array, at() 
#include<tuple> // gor get()

using namespace std;

int main(){
    array <int,6> ar1 = {1,2,3,4,5,6};
    array <int,6> ar2 = {7,8,9,10};

    // Printing 1st and 2nd array before swapping 
    cout << "The first array elements before swapping are : ";
    for(int i = 0; i<6; i++){
        cout<<ar1[i]<<" ";
    }
    cout<<endl;

    cout << "The second array elements before swapping are : ";
    for(int i = 0; i<6; i++){
        cout<<ar2[i]<<" ";
    }
    cout<<endl;

    // Swapping ar1 values with ar 
    // for swapping both array is of same size.

    ar1.swap(ar2); // or ar2.swap(ar1);

     // Printing 1st and 2nd array after swapping 
    cout << "The first array elements after swapping are : ";
    for(int i = 0; i<6; i++){
        cout<<ar1[i]<<" ";
    }
    cout<<endl;

    cout << "The second array elements after swapping are : ";
    for(int i = 0; i<6; i++){
        cout<<ar2[i]<<" ";
    }
    cout<<endl;

    



    return 0;
}