#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string questions[] = {"1) What is Spider-Man's secret identity?",
                          "2) Who wrote All-Star Superman?",
                          "3) Who was the third Robin?",
                          "4) What year did Giant-Size X-Men #1 come out?"
                         };
    
    string answers[][4] = {{"A. Bruce Wayne", "B. Tony Stark", "C. Peter Parker", "D. Steve Ditko"},
                           {"A. Grant Morrison", "B. Clark Kent", "C. Scott Snyder", "D. Zack Snyder"},
                           {"A. Dick Grayson", "B. Tim Drake", "C. Jason Todd", "D. Damien Wayne"},
                           {"A. 1993", "B. 2000", "C. 1975", "D. 1963"}
                          };
    
    char key[] = {'C', 'A', 'B', 'C'};


    int questionSize = sizeof(questions)/sizeof(questions[0]);
    int answerSize = sizeof(answers)/sizeof(answers[0]);
    char userAnswer;
    int score = 0;

    cout << "**********************************************\n";
    cout << "********** Welcome to the Quiz Game **********\n";
    cout << "**********************************************\n\n";

    cout << "Answer correctly to score as many points as you can.\n";
    cout << "Each question is worth 100 points!\n";
    cout << "Let's get started!\n\n";

    for(int i = 0; i < questionSize; i++){
        cout << questions[i] << "\n\n";
        for(int j = 0; j < answerSize; j++){
            cout << answers[i][j] << '\n';
        }
        cout << "Choose your answer (A-D): ";
        cin >> userAnswer;
        
        
        if(userAnswer == key[i]){

            cout << "\nThat is correct!\n";
            cout << "You just earned 100 points!\n\n";
            score += 100;
        }
        else{
            cout << "\nSorry, but that is incorrect.\n";
            cout << "The correct answer was " << key[i] << ".\n\n";
        }
        cout << "Your have a total of " << score << " points.\n";
        
        if(i < questionSize - 1){
            cout << "Let's move on to the next question.\n\n";
        }
    }
    
    cout << "\n\nThat was our final question!\n";
    cout << "The numbers are in and you scored a grand total of " << score << " points!\n";
    cout << "Thank you for playing!";

    return 0;
}