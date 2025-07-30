#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void printBoard(char array[][3], int height, int width);
string checkWin(char array[][3], int height, int width);

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
    int moveCount = 0;
    bool cpuValid = false;
    bool playerValid = false;
    
    string winner = "Tie";

    do{

        do{
            cout << "Here is the board:\n\n"; 
            printBoard(board,height,width);
            cout << "\nMake your move (11-33): ";
            cin >> playerMove;
            
            if(board[(playerMove/10) - 1][(playerMove%10) - 1] == ' '){
                board[(playerMove/10) - 1][(playerMove%10) - 1] = 'X';
                playerValid = true;
                moveCount++;
            }
            else{
                cout << "Invalid Move\n\n";
            }
        }while(playerValid == false);
        playerValid = false;
        winner = checkWin(board,height,width);

        if(moveCount < 9 && winner == "Tie"){
            do{
            srand(time(0));
            int move = computerMoves[rand() % 9];
            if(board[(move/10) - 1][(move%10) - 1] == ' '){
                    board[(move/10) - 1][(move%10) - 1] = 'O';
                    cpuValid = true;
                    moveCount++;
            }
            }while(cpuValid == false);
            cpuValid = false;
            winner = checkWin(board,height,width);
        }
        
    }while(winner == "Tie" && moveCount != 9);

    cout << '\n';
    printBoard(board,width,height);
    if(winner == "Player"){
        cout << "\nCongratulations! You Win!";
    }
    else if(winner == "CPU"){
        cout << "\nComputer Wins.";
    }
    else{
        cout << "\nIt's a tie.";
    }
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
string checkWin(char array[][3], int height, int width){

    for(int i = 0; i < height; i++){
        if(array[i][0] == array[i][1] && array[i][1] == array[i][2]){
            if(array[i][0] == 'X'){
                return "Player";
            }
            else if(array[i][0] == 'O'){
                return "CPU";
            }
        }

    }

    for(int j = 0; j < width; j++){
        if(array[0][j] == array[1][j] && array[1][j] == array[2][j]){
            if(array[0][j] == 'X'){
                return "Player";
            }
            else if(array[0][j] == 'O'){
                return "CPU";
            }
        }
    }

    if((array[0][0] == array[1][1] && array[1][1] == array[2][2])||(array[0][2] == array[1][1] && array[1][1] == array[2][0])){
        if(array[1][1] == 'X'){
            return "Player";
        }
        else if(array[1][1] == 'O'){
            return "CPU";
        }
    }
    return "Tie";
}