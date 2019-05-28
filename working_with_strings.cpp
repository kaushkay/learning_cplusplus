#include<iostream>

using namespace std;

int main()
{
    string phrase = "Kaushkay is fool";
    cout << phrase.length() << endl;
    cout << phrase[3] << endl;
    cout << phrase.find("fool", 3) << endl;
    cout << phrase.substr(2,3);

    return 0;

}
