/*

C++ has a class in its STL algorithms library which allows us easy partition algorithms using certain inbuilt
functions. Partition refers to act of dividing elements of containers depending upon a given condition.
Partition operations :

1. partition(beg, end, condition) :- This function is used to partition the elements on basis of
condition mentioned in its arguments.

2. is_partitioned(beg, end, condition) :- This function returns boolean true if container is partitioned
else returns false.

*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int arr[] = {1,2,52,23,63,23,63};

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr, arr+n);


    is_partitioned(arr, arr+7, [](int x){return x%2==0;})?
        cout<<"Vector is partitioned":
        cout<<"Vector is not partitioned";

    cout<<endl;

    // partitioning vector using partition() 
    // partitioning vector using partition() 
    partition(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    }); 

    is_partitioned(vect.begin(), vect.end(), [](int x){return x%2==0;})?
        cout << "Now, vector is partitioned after partition operation": 
        cout << "Vector is still not partitioned after partition operation"; 
    cout << endl;

     // Displaying partitioned Vector 
    cout << "The partitioned vector is : "; 
    for (int i=0; i<vect.size(); i++){
        cout << vect[i]<< " "; 
        }
      
    return 0; 




    return 0;
}