#include<iostream>
#include<cmath>

using namespace std;

//void sayHi(string name, int age){
//    cout << "Hello " << name << endl;
//    cout << "Your are is " << age;
//}

//int main()
//
//{
//    sayHi("Mike", 60);
//    return 0;
//}

void sayHi(string name, int age);

int main()
{
    sayHi("Mike", 60);
    return 0;
}


void sayHi(string name, int age){
    cout << "Hello " << name << endl;
    cout << "Your are is " << age;
}
