/*
An iterator is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container. They can be visualised as something similar to a pointer pointing to some location and we can access content at that particular location using them.

Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers.

The most obvious form of iterator is a pointer. A pointer can point to elements in an array, and can iterate through them using the increment operator (++). But, all iterators do not have similar functionality as that of pointers.

Depending upon the functionality of iterators they can be classified into five categories,

>> Random-access....(Most Powerful) >>>Supported by Vectors, Deque
>> Bidirectional >>>Supported by Lists, Map, Multimap, Set, Multiset
>> Forward
>> Input and Output....(Least Powerful)

No iterator supported >>> Stack, Queue, Priority Queue.

each one of these iterators are not supported by all the containers in STL, different containers support different iterators

Types of iterators: Based upon the functionality of the iterators, they can be classified into five major categories:

Input Iterators: They are the weakest of all the iterators and have very limited functionality. They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially such that no element is accessed more than once.

Output Iterators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.

Forward Iterator: They are higher in hierarachy than input and output iterators, and contain all the features present in these two iterators. But, as the name suggests, they also can only move in forward direction and that too one step at a time.

Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators, as they can move in both the directions, that is why their name is bidirectional.

Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests, they can randomly access any element inside the container. They are the ones whose functionality is same as pointers.

>> Benefits of an iterator.
1.Convenience in programming: It is better to use iterators to iterate through the contents of containers, as if we will not use an iterator and access elements using [ ] operator, then we need to be always vary of the size of the container, whereas with iterators we can simply use member function end() and iterate through the contents without having to keep anything in mind.

2. Code reusability: Now consider if we make v a list in place of vector in the above program and if we were not using iterators to access the elements and only using [ ] operator, then in that case this way of accessing was of no use for list (as they donot support random-access iterators).
However, if we were using iterators for vectors to access the elements, then just changing the vector to list in the declaration of the iterator would have served the purpose, without doing anything else
So, iterators support reusability of code, as they can be used to access elements of any container.

3. Dynamic processing of container: Iterators provide us the ability to dynamically add or remove elements from the container as and when we want with ease.

*/

// C++ program to demonstrate iterators
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //Declaring a vector.
    vector<int> v = {1,2,3};

    //declaring an iterator.
    vector<int>::iterator i;

    int j;
    cout << "Without iterators = "; 
      
    // Accessing the elements without using iterators
    for(j=0; j<3; j++){
        cout<<v[j]<<" ";

    }
    cout<<endl;
     
    cout << "\nWith iterators = "; 
      
    // Accessing the elements using iterators
    for(i=v.begin(); i!=v.end(); i++){
        cout<<*i<<" "; 
    }

    // Inserting element using iterators 

    for(i = v.begin(); i != v.end(); i++){
        if(i == v.begin()){
            i = v.insert(i, 5);
        }
    }

    // v contains 5,1,2,3

    // Deleting a element using iterators 
    for(i = v.begin(); i != v.end(); i++ ){
        if(i == v.begin()+1){
            i = v.erase(i);
            // i now points to the element after the 
            // deleted element 
        }
    }
    // v contains 5, 2, 3
    cout<<endl;
    // Accessing the elements using iterators
    for(i = v.begin(); i != v.end(); i++){
        cout<<*i<<" ";
    }

    cout<<endl;
    return 0;
}

