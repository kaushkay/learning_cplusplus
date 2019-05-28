/*
1. at() :- This function is used to access the elements of array.

2. get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple.

3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.

*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<array> // for array, at() 
#include<tuple> // gor get()

using namespace std;

int main(){
    // Initializing the array elements 

    array<int, 6> ar = {1,2,3,4,5,6};

    // Printing array elements using at() 
    cout<<"The array elements are (using at()) : ";
    for(int i = 0; i<6; i++){
        cout<<ar.at(i)<<" ";
    }
    cout<<endl;

    // Printing array elements using get() 
    cout << "The array elemets are (using get()) : ";
    cout << get<0>(ar)<<" "<< get<1>(ar) <<" ";
    cout << get<2>(ar)<<" "<< get<3>(ar) <<" ";
    cout << get<4>(ar)<<" "<< get<5>(ar) <<" ";
    cout<<endl;

    // Printing array elements using operator[]
    cout<<"Printing array elements using operator[] : ";
    for(int i=0; i<6; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;



    return 0;
}