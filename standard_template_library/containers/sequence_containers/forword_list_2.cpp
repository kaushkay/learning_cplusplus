/*

2. push_front() :- This function is used to insert the element at the first position on forward list. The value from this function is copied to the space before first element in the container. The size of forward list increases by 1.

3. emplace_front() :- This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list.

4. pop_front() :- This function is used to delete the first element of list.

*/


#include<iostream>
#include<algorithm>
#include<forward_list>

using namespace std;

int main(){

    forward_list<int> flist = {10, 20, 30, 40, 50};

    // Inserting value using push_front() 
    // Inserts 60 at front
    flist.push_front(60);

    // Displaying the forward list 
    for(auto it = flist.begin(); it != flist.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // Inserting value using emplace_front() 
    // Inserts 70 at front

    flist.emplace_front(70);
    for(auto it=flist.begin(); it != flist.end(); it++){
        cout<<*it<<" "; 
    }
    cout<<endl;
    // Deleting first value using pop_front() 
    // Pops 70 
    flist.pop_front();
    for(auto it=flist.begin(); it != flist.end(); it++){
        cout<<*it<<" "; 
    }
    cout<<endl;





    return 0;
}