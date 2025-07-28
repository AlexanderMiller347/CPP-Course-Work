#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int num = rand() % 1000 + 1;
    int guess;
    int tries = 0;

    do{
        cout << "Enter a number (1-1000): ";
        cin >> guess;
        if(guess > num){
            cout << "Lower\n";
        }
        else if(guess < num){
            cout << "Higher\n";
        }

        tries += 1;
    }while(num != guess);
    
    cout << "\nThe number was " << num << "!\n";
    if(tries == 1){
        cout << "You got it on your first try!";
    }
    else{
        cout << "It took you " << tries << " guesses to find it!";
    }

    return 0;
}