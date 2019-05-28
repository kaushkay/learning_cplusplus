#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr, arr+n);

    cout<<"Occurance of 20 in vector : ";
    // Counts the occurrences of 20 from 1st to
    // last element

    cout<<count(vect.begin(), vect.end(), 20);

    // find() returns iterator to last address if
    // element not present

    find(vect.begin(), vect.end(), 22) != vect.end()? cout<<"\nElement Found.": cout<< "\nElement not found";
/*find(first_iterator, last_iterator, x)
– Points to last address of vector ((name_of_vector).end()) if element is not present in vector.*/









    return 0;
}
