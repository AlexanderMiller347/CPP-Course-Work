#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void printBoard(char array[][3], int height, int width);
void CPUMove();
int main() {
    
    char board[][3] = {{' ', ' ', ' '},
                       {' ', ' ', ' '},
                       {' ', ' ', ' '}
    };
    int height = sizeof(board)/sizeof(board[0]);
    int width = sizeof(board[0])/sizeof(board[0][0]);
    int playerMove;
    int computerMoves[] = {11,12,13,21,22,23,31,32,33};
    bool cpuValid = false;
    string winner = "None";

    do{
        cout << "Here is the board:\n\n"; 
        printBoard(board,height,width);
        cout << "\nMake your move (11-33): ";
        cin >> playerMove;
        
        if(board[(playerMove/10) - 1][(playerMove%10) - 1] == ' '){
            board[(playerMove/10) - 1][(playerMove%10) - 1] = 'X';
        }
        else{
            cout << "Invalid Move\n";
        }
        
        do{
            srand(time(0));
            int move = computerMoves[rand() % 9];
            if(board[(move/10) - 1][(move%10) - 1] == ' '){
                    board[(move/10) - 1][(move%10) - 1] = 'O';
                    cpuValid = true;
            }
        }while(cpuValid == false);
        cpuValid = false;
    }while(winner == "None");


    return 0;
}

void printBoard(char array[][3], int height, int width){
    
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j ++){
            cout << '[' << array[i][j] << ']';
        }
        cout << '\n';
    }
}
