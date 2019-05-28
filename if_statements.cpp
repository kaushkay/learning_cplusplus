#include<iostream>
#include<cmath>

using namespace std;

int main(){
    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall){
        cout << "You are a tall male." << endl;
    } else if(isMale && !isTall){
        cout << "You are not tall but a male." << endl;


    } else{
        cout << "You ar not male" << endl;
    }

    return 0;
}
