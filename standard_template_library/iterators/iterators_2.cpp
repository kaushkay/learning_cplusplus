#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>


using namespace std;

// Iterators are used to point at the memory addresses of STL containers. They are primarily used  in sequence of numbers, characters etc. They reduce the complexity and execution time of program.


/*
Operations of iterators :-

1. begin() :- This function is used to return the beginning position of the container.

2. end() :- This function is used to return the after end position of the container.

3. advance() :- This function is used to increment the iterator position till the specified number mentioned in its arguments.

4. next() :- This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.

5. prev() :- This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.

6. inserter() :- This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.

*/

int main(){

    vector<int> ar = { 1,2,3,4,5,6 };

    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();

    // Using advance() to increment iterator position 
    // points to 4 
    advance(ptr, 3);

    // Displaying iterator position 
    cout << "The position of iterator after advancing is : ";
    cout << *ptr << " ";
    cout<<endl;

    

    




    return 0;
}