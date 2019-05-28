// C++ code to demonstrate working of all_of()
#include<iostream>
#include<algorithm> // for all_of()
using namespace std;
int main()
{
    
    int arr[6] = {1,2,3,4,5,-6};

    // Checking if all elements are positive
    all_of(arr, arr+6, [](int x){return x>0;})?
        cout<<"\nAll elements are positive.":
        cout<<"\nAll elements are not positive.";


    any_of(arr, arr+6, [] (int x){return x<0; })?
        cout<<"\nSome of the elements are negative.":
        cout<<"\nNone of them are negative.";

    int arr2[] = {1,2,3,4,5,6};

    none_of(arr2, arr2+6, [](int x){return x<0;})?
        cout<<"\nNone of the elements are negative.":
        cout<<"\nSome elements are negative.";

/*
copy_n() copies one array elements to new array. This type of copy creates a deep copy of array. This function takes 3 arguments, source array name, size of array and the target array name.
*/

    int arr3[6];

    copy_n(arr, 6, arr3);

    // Displaying the copied array 
    cout << "The new array after copying is : "; 
    for (int i=0; i<6 ; i++) 
       cout << arr3[i] << " "; 

/*
iota()
This function is used to assign continuous values to array. This function accepts 3 arguments, the array name, size, and the starting number.
*/

/*
    int arr4[6] = {0};
    // Using iota() to assign values 
    iota(arr4, arr4+6, 20);
    for (int i=0; i<6 ; i++) 
       cout << arr4[i] << " "; 

*/

    return 0;
}
