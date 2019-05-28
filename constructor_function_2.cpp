#include<iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;

        }

        Book(string aTitle, string aAuthor, int aPages){ // a is for arguments.
            title = aTitle;
            author = aAuthor;
            pages = aPages;

        }

};
int main(){
    Book book1("Harry Potter", "J K Rowling", 500);
    Book book2("Lord Of the Rings", "Tolkein", 700);
    Book book3;

    cout<<book3.title<<endl;
    cout<<book1.title<<endl;

    return 0;

}
