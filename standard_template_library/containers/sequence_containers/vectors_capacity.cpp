/*
size() – Returns the number of elements in the vector.

max_size() – Returns the maximum number of elements that the vector can hold.

capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.

resize() – Resizes the container so that it contains ‘g’ elements.

empty() – Returns whether the container is empty.

shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.

reserve() – Requests that the vector capacity be at least enough to contain n elements.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> g1;

    for (int i = 1; i <= 5; i++){
        g1.push_back(i);
    }
    cout<<"Size : "<<g1.size()<<endl;
    cout<<"Max_size : "<<g1.max_size()<<endl;
    cout<<"Capacity : "<<g1.capacity()<<endl;

    //prints whole vector before resizing.
    cout<<"prints whole vector before resizing."<<endl;
    for(auto it=g1.begin(); it != g1.end(); it++){
        cout<<*it<<" ";
    } 

    // resizes the vector size to 4 
    g1.resize(4);

    // prints the vector size after resize() 
    cout<<"\nSize after resizing : " <<g1.size()<<endl;

    // prints whole vector after resizing
    cout<<"prints whole vector after resizing"<<endl;
    for(auto it=g1.begin(); it != g1.end(); it++){
        cout<<*it<<" ";
    } 

    // checks if the vector is empty or not 
    if(g1.empty() == false){
        cout << "\nVector is not empty.";
    }else{
        cout << "\nVector is empty.";
    }

    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: "; 
    for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " "; 

    return 0;
}