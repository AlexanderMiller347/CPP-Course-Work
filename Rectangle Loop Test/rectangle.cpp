#include <iostream>

using namespace std;

int main() {
    int rows;
    int columns;

    cout << "How many rows: ";
    cin >> rows;

    cout << "How many columns: ";
    cin >> columns;

    for(int i = rows; i >= 1; i--){
        for(int j = columns; j >= 1; j--){
            cout << "#";
        }
        cout << '\n';
    }
    return 0;
}