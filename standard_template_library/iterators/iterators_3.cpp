#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>


using namespace std;

int main(){
    vector<int> ar = {1,2,3,4,5};

    // Declaring iterators to a vector
    vector<int>::iterator ptr = ar.begin();
    vector<int>::iterator ftr = ar.end();

    // Using next() to return new iterator 
    // points to 4
    auto it = next(ptr, 3);

    // Displaying iterator position
    cout<<"The position of new iterator using next() is : "; 
    cout<<*it<<" ";
    cout<<endl;

    // Using prev() to return new iterator 
    // points to 3 

    auto it1 = prev(ftr, 3);
    
    // Displaying iterator position
    cout<<"The position of new iterator using prev() is : ";
    cout<<*it1<<" ";
    cout<<endl;

    return 0;
}