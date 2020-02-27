#include <iostream>
using namespace std;
#include <stdlib.h>

string player_RPS(int player_selection);
void RPS_comparison(string, string);

int main (){
    
    int player_selection = 0;
    cout << "Enter your choice (1=paper, 2=scissors, 3=rock): "<< endl;
    cin >> player_selection;
    cout << "Player 1 entered " << player_RPS(player_selection) << " as the choice." << endl;
    
    
    string choice;
    string computer_selection;
    srand(time(0));
    srand(time(0));
    int comp_selection = rand() % 3 + 1;
    if (comp_selection == 1){
        choice = "paper";
    } else if (comp_selection == 2){
        choice = "scissor";
    } else if (comp_selection == 3){
        choice = "rock";
    }
    computer_selection = choice;
    
    cout << "The computer entered " << computer_selection << " as the choice." << endl;
    RPS_comparison(player_RPS(player_selection),computer_selection);
}

string player_RPS(int player_selection){
    string play_select;
    if (player_selection == 1){
        play_select = "paper";
    } else if (player_selection == 2){
        play_select = "scissor";
    } else if (player_selection == 3){
        play_select = "rock";
    }
    
    return play_select;
}


void RPS_comparison(string player_1, string computer){
    
    if ((player_1 == "paper" && computer == "paper") ||(player_1 == "scissor" && computer == "scissor") || (player_1 == "rock" && computer == "rock")){
        cout << "THE FINAL RESULT: TIE" << endl;
    } else if((player_1 == "rock" && computer == "scissor") || (player_1 == "paper" && computer == "rock") || (player_1 == "scissor" && computer == "paper")){
        cout << "THE FINAL RESULT: PLAYER 1 WINS"<< endl;
    } else if((player_1 == "scissor" && computer == "rock") || (player_1 == "rock" && computer == "paper") || (player_1 == "paper" && computer == "scissor")){
        cout << "THE FINAL RESULT: THE COMPUTER WINS" << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
}





