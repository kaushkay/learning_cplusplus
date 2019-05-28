// C++ program to demonstrate working of next_permutation()
// and prev_permutation()

/*
1. next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
2. prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
*/


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){

    // Initializing vector with array values
    int arr[] = {5, 10, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr, arr+n);
    cout << "Given Vector is:\n";
    for(int i = 0; i<n; i++){
        cout<<vect[i]<<" ";
    }
    // modifies vector to its next permutation order
    // next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing permutation:\n";
    do {
        for(int i=0; i<vect.size(); i++)
            cout<<vect[i]<<" ";
        cout<<endl;
    }while( next_permutation(vect.begin(), vect.end()) );

    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }

    return 0;
}
