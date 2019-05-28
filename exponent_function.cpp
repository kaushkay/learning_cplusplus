#include<iostream>

using namespace std;

int exponent(int a, int  b){

    int result = 1;
    int i;
    for(i = 1; i<=b; i++){

        result = result*a;
    }
    return result;
}


int main(){

    cout<< exponent(2,5)<<endl;


    return 0;
}
