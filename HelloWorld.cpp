#include <iostream>
#include <ctime>

using namespace std;

class Hero{
    public:
        string name;
        string power;
    Hero(string name, string power){
        this->name = name;
        this->power = power;

    }
};

int main(){
    Hero IronMan("Iron Man", "Armored Suit");
    cout << "Name: " << IronMan.name << '\n';
    cout << "Power: " << IronMan.power << '\n';
    return 0;
}