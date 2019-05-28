#include<iostream>

using namespace std;

int main()
{
    int age;
    char favC;
    string name;

//    cout << "What's your age?" << endl;
//    cin >> age;
//    cout << "You are " << age << " years old" << endl;
//    cout << "What's your fav letter?" << endl;
//    cin >> favC;
//    cout << "Your fav character is " << favC <<endl;
     
    cout << "What's your name?" << endl;
    getline (cin, name);
    cout << "Hello " << name;

    return 0;
}
