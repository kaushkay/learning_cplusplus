/*
1. arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes
the vector elements accordingly.
2. arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted
vector in a single line.

3. unique: Removes all but the first element from every consecutive group of equivalent elements in the range [first,last)
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr, arr+n);

    cout<<"Vector is : ";
    for(int i=0; i<n; i++){
        cout<<vect[i]<<" ";
    }

    // Delete second element of a vector;
    vect.erase(vect.begin()+1);

    cout<<"\nVector after erasing an element";
    for(int i = 0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }

    // sorting to enable use of unique()
    sort(vect.begin(), vect.end());

    cout << "\nVector before removing duplicate "
             " occurrences: ";

    for(int i = 0; i<vect.size(); i++){
        cout<<vect[i]<< " ";
    }

    // Deletes the duplicate occurrences

    vect.erase(unique(vect.begin(), vect.end()), vect.end());

    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
        cout << vect[i] << " ";


    return 0;
}
