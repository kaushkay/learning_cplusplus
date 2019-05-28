#include<iostream>

using namespace std;

class Chef{ // super-class
    public:
        void makeChicken(){
            cout << "The chef makes chicken." << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad." << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs." << endl;
        }

};

class ItalianChef : public Chef{ //inheritance // sub-class
    public:
        void makePasta(){
            cout << "The italian chef is making pasta." <<endl;
        }

        void makeSpecialDish(){ //overwriting a function.
            cout << "The chef is making chicken parm." <<endl;
        }
};

int main(){

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSalad();
    italianChef.makePasta();
    italianChef.makeSpecialDish();
    return 0;
}
