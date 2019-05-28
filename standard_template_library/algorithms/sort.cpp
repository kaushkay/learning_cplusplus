#include<iostream>
#include<algorithm>

using namespace std;

void show(int arr[]){
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10] = {1,4,2,5,34,6,3,2,6,32};
    cout<<"The array before sorting is : ";
    show(arr);

    sort(arr,arr+10);

    cout << "\n\n The array after sorting is : ";
    show(arr);


}
