/*
>> distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.
This function is very useful while finding the index.
*/


#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/ sizeof(arr[1]);

    vector<int> vect(arr, arr+n);

    // Return distance of first to maximum element
    cout<<"Distance between first to maximum element is ";
    cout<<distance(vect.begin(), max_element(vect.begin(), vect.end()));



    return 0;
}
