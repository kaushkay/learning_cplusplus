#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    int arr[] = {10, 20, 5, 23, 42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr, arr+n);
    cout << "Vector is: ";
    for(int i=0; i<n; i++){
        cout<<vect[i]<<" ";
    }
    // Sorting the Vector in Ascending order
    sort(vect.begin(), vect.end());

    cout << "\nVector after sorting is: ";
    for(int i=0; i<n; i++){
        cout<<vect[i]<<" ";
    }

    // Reversing the Vector
    reverse(vect.begin(), vect.end());
    cout << "\nVector after reversing is: ";
    for (int i=0; i<6; i++)
        cout << vect[i] << " ";

    cout << "\nMaximum element of vector is: ";
    cout<<*max_element(vect.begin(), vect.end());

    cout << "\nMininum element of vector is: ";
    cout<<*min_element(vect.begin(), vect.end());

    // Starting the summation from 0
    cout<<"\nSummation  of the vector elements is: ";
    cout<<accumulate(vect.begin(), vect.end(), 0);



    return 0;
}
