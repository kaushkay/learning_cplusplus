/*
3. min() :- This function returns the smallest element of valarray.

4. max() :- This function returns the largest element of valarray.
*/


#include<iostream>
#include<valarray>
#include<algorithm>

using namespace std;

int main(){
    valarray<int> varr = {23,53,1,24,6,34,23,43};

    cout<<varr.min()<<endl;
    cout<<varr.max()<<endl;


    return 0;
}


