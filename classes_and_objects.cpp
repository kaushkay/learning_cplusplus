#include<iostream>

using namespace std;

class Book { //it is a class, template for what a book is.
    public:
        string title;
        string author;
        int pages;
};



int main()

{
    Book book1; //it is an object. or it is an instance of a class Book.
    book1.title = "Harry Potter";
    book1.author = "J K Rowling";
    book1.pages = 500;

    Book book2; //it is an object. or it is an instance of a class Book.
    book2.title = "Lord of the rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.author << endl;

    return 0;
}
