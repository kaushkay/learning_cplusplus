/*
4. front() :- This returns the first element of array.

5. back() :- This returns the last element of array.

*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<array> // for array, at() 
#include<tuple> // gor get()

using namespace std;

int main(){

    array <int,6> ar = {1,2,3,4,5,6};

    // Printing first element of array 
    cout << "First element of array is : ";
    cout<<ar.front();


    // Printing last element of array 
    cout << "Last element of array is : ";
    cout << ar.back();
    return 0;
}