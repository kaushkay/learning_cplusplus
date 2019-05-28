/*
non-contiguous memory allocation

As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. 

Normally, when we say a List, we talk about doubly linked list. For implementing a singly linked list, we use forward list.

*/

#include<iostream>
#include<list>
#include<iterator>

using namespace std;


//function for printing the elements in a list
void showlist(list<int> g){
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout<<"\t"<<*it;
    }
    cout<<"\n";
}

int main(){

    list<int> gqlist1, gqlist2;

    for(int i=0; i<10; i++){

        gqlist1.push_back(i*2);
        gqlist2.push_back(i*3);
    }

    cout<<"\n List 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout<<"\n List 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout<<"\ngqlist1.front() : "<<gqlist1.front();
    cout<<"\ngqlist1.back() : "<<gqlist1.back();

    cout << "\ngqlist1.pop_front() : "; 
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist1.reverse() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist2.sort(): "; 
    gqlist2.sort();
    showlist(gqlist2);






    return 0;
}