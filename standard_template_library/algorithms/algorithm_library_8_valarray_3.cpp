/*
5. shift() :- This function returns the new valarray after shifting elements by the number mentioned in its argument. If the number is positive, left-shift is applied, if number is negative, right-shift is applied.

6. cshift() :- This function returns the new valarray after circularly shifting(rotating) elements by the number mentioned in its argument. If the number is positive, left-circular shift is applied, if number is negative, right-circular shift is applied.
*/

#include<iostream>
#include<valarray>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    valarray<int> varr = {10, 2, 20, 1, 30};
    valarray<int> varr1;

    varr1 = varr.shift(2);
    // Displaying elements of valarray after shifting 
    cout << "The new valarray after shifting is : "; 
    for ( int&x : varr1) cout << x << " "; 
    cout << endl; 

    varr1 = varr.cshift(-3);
    for ( int&x : varr1) cout << x << " "; 
    cout << endl;

    return 0;
}