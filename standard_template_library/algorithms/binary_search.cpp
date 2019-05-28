/*Binary search is a widely used searching algorithm that requires
the array to be sorted before search is applied. */

/*The main idea behind this algorithm is to keep dividing the array in half (divide and conquer)
until the element is found, or all the elements are exhausted.*/

#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[], int arraySize){
    for(int i=0; i<arraySize; i++){
        cout<<a[i]<<" ";
    }
}

int main(){

    int a[] = {1,5,2,6,1,7,5,9,4,2};
    int aSize = sizeof(a)/sizeof(a[0]);
    cout << "\n\nLet's say we want to search for 2 in the array";
    cout << "\n So, we first sort the array";

    sort(a, a+aSize);

    cout << "\n\n The array after sorting is : ";
    show(a, aSize);

    cout << "\n\nNow, we do the binary search";

    if(binary_search(a, a+aSize, 2)){
        cout<<"\nThe Element is found.";
    }else{
        cout<<"\nThe element is not found.";
    }

    if(binary_search(a, a+aSize, 10)){
        cout<<"\nThe element is found.";
    }else{
        cout<<"\nThe element is not found.";
    }



    return 0;
}
