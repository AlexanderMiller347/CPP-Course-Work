#include <iostream>

using namespace std;

bool validateCard(int number);

int main(){

    int cardNumber;

    cout << "Enter credit card number: ";
    cin >> cardNumber;

    if(validateCard(cardNumber)){
        cout << "\nYour card number is valid!";
    }
    else{
        cout << "\nYour card number is not valid!";
    }

    return 0;
}

bool validateCard(int number){
    int odds;
    int evens;
    
}