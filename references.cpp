#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
When a variable is declared as reference, it becomes an alternative name for an existing variable.
A variable can be declared as reference by putting ‘&’ in the declaration.
*/

int main(){

    int x = 10;
    int& ref = x;

    ref = 20;
    cout<<x<<endl;

    x=30;
    cout<<ref;



    return 0;
}
