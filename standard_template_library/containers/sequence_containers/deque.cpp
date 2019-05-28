/*
Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.

Double Ended Queues are basically an implementation of the data structure double ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

The functions for deque are same as vector, with an addition of push and pop operations for both front and back.
*/

#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

void showdq(deque<int> g){
    deque <int> :: iterator it;
    for(it = g.begin(); it!=g.end(); it++){
        cout<<"\t"<<*it;
    }
    cout<< '\n';
}

int main(){

    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_back(20);
    gquiz.push_back(15);
    gquiz.push_back(5);
    cout << "The deque gquiz is : "; 
    showdq(gquiz);

    cout<<"\nSize : "<<gquiz.size()<<endl;;
    cout<<"\nMax Size : "<<gquiz.max_size()<<endl;

    cout<<"\ngquiz.at(2) : "<<gquiz.at(2)<<endl;

    cout<<"\ngquiz.front() : "<<gquiz.front();
    cout<<"\ngquiz.back() : "<<gquiz.back();

    cout<<"\ngquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);

    cout<<"\ngquiz.pop_front() : ";
    gquiz.pop_front();
    showdq(gquiz);
    
    




    return 0;
}