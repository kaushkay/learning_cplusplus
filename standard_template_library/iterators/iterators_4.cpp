#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>


using namespace std;
int main(){
    vector<int> ar = {1,2,3,4,5};
    vector<int> ar1 = {10,20,30};

    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();
    // Using advance to set position
    advance(ptr, 3);
    // copying 1 vector elements in other using inserter() 
    // inserts ar1 after 3rd position in ar 
    // copy (InputIterator first, InputIterator last, OutputIterator result)
    copy(ar1.begin(), ar1.end(), inserter(ar, ptr));
    cout<<endl;
    // Displaying new vector elements
    cout<<"the new elements after inserting is : ";
    for(auto it = ar.begin(); it != ar.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;





    return 0;
}