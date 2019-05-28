// also called singly linked list.

#include<iostream>
#include<algorithm>
#include<forward_list>

using namespace std;

/*

forward list are useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements.

It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, thus increasing the storage space required to store each element. 

The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly.

Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of graph, etc.
*/


/*

1. assign() :- This function is used to assign values to forward list, its another variant is used to assign repeated elements.

*/


int main(){
    
    // Declaring forward list
    forward_list<int> flist1;

    // Declaring another forward list
    forward_list<int> flist2;

    // Assigning values using assign()
    flist1.assign({1,2,3});

    // Assigning repeating values using assign()
    // 5 elements with value 10
    flist2.assign(5,10);

    // Displaying forward lists 
    cout<<"Displaying the elements of first forward lists : ";
    for(auto it = flist1.begin(); it != flist1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Displaying the elements of second forward lists : ";
    for(auto it = flist2.begin(); it != flist2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;




    return 0;
}
