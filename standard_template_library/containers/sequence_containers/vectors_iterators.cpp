#include<iostream>
#include<vector>
#include<algorithm>

/*
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

begin() – Returns an iterator pointing to the first element in the vector

end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

cbegin() – Returns a constant iterator pointing to the first element in the vector.

cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.

crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

*/

using namespace std;

int main(){

    vector<int> g1;
    for (int i = 1; i<=5; i++ ){
        g1.push_back(i);
    } 
    cout << "Output of begin and end: ";
    for(auto it=g1.begin(); it != g1.end(); it++){
        cout<<*it<<" ";
    }

    cout << "\nOutput of cbegin and cend: ";
    for(auto it=g1.cbegin(); it != g1.cend(); it++){
        cout<<*it<<" ";
    }

    cout << "\nOutput of rbegin and rend: ";
    for(auto it = g1.rbegin(); it!=g1.rend(); it++){
        cout<<*it<<" ";
    }

    cout << "\nOutput of crbegin and crend : "; 
    for(auto it=g1.crbegin(); it!=g1.crend(); it++){
        cout<<*it<<" ";
    }
    





    return 0;
}