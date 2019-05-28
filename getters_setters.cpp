#include<iostream>

using namespace std;

class Movie{
    private: // any attribute, any function, any variables that we put under this will remain private.
        string rating; // now we cannot access the rating in int main.
        // nobody can access it directly.


    public: // it is public i.e. anyoen can use it from outside.
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);

        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }

};

int main(){

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << avengers.getRating() <<endl;

    avengers.setRating("Dog");

    cout<< avengers.getRating() <<endl;


    return 0;
}
