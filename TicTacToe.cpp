//TicTacToe by Andrew Thomas. This game is the standard two-player tic tac toe game. There are two players X and O(X goes first) that alernate playing pieces on a 3 by 3 two dimentional board. If a player has 3 pieces lined up in any direction they win. If the board is filled and no player has won then it is a tie. This code will ask the player if they want to play again.  
#include <iostream> //getting the libraries 
#include <cstring>
using namespace std; 
void CreateBoard(char **strptr); // these are initializeing all the functions used
void UpdateBoard(char **strptr, int a, int b, int player, int &here);
bool CheckWin(char **strptr, int &a, int &b, int player);
bool CheckTie(char **strptr, int a);
int main(){ // main block of code
  cout << "Welcome to TicTacToe. This is the two player game. Each player should know if they are X or O(X goes first). Three in a row of the same mark wins. If the board is filled and no player won there is a tie." << endl; // intro
  int tieCounter = 0; // initializing variables
  int givenRowInt;
  bool tie = false;
  bool win = false;
  int givenCollumnInt;
  int x_counter = 0;
  int o_counter = 0;
  int x_player = 1;
  int o_player = 0;
  char playAgain;
  //int x_turn = 3;
  char **strptr = new char*[4]; // initializing the two dimentional charecter array with pointer
  for(int i = 0; i<4; i++){
    char *row = new char [4];
    strptr[i] = row;
    
  }
  strptr[0][0] = ' '; // outlines the axies of the board
  strptr[0][1] = 'a';
  strptr[0][2] = 'b';
  strptr[0][3] = 'c';
  strptr[1][0] = '1';
  strptr[2][0] = '2';
  strptr[3][0] = '3';
  do{ // do loop that will continue to run the tic tac toe game while the user enters y when asked to play again
    CreateBoard(strptr); // creates or resets the board by setting all the coordinates as a blank space
    char input[2];  // initializing cstring
 int x_turn = 3; 
 do { // does the game until there is a tie or a win
   do{ // ask the player for a coordinate and keeps asking while it is invalid
	 cout << "Please enter a coordinate that is on the grid." << endl;
	 cin.get(input, 3); //getting the c string
  cin.ignore();
  givenRowInt = input[0];
  givenRowInt = givenRowInt - 96; // manipulating the ascii value
  givenCollumnInt = input[1];
  givenCollumnInt= givenCollumnInt - 48; //manipulating the ascii value

	}
	while(givenRowInt > 3 || givenCollumnInt > 3);
    
   if(x_turn == 3){ // while it is x turn, update the board with the move and check if there is a win

      UpdateBoard(strptr, givenRowInt, givenCollumnInt, x_player, x_turn);
      win = CheckWin(strptr, x_counter, o_counter, x_player);
    }
   else{ // while it is the o turn, update the board with the move and check if there is a win
     
      UpdateBoard(strptr,givenRowInt, givenCollumnInt, o_player, x_turn);
      win = CheckWin(strptr, x_counter, o_counter, o_player);
    }
   tie = CheckTie(strptr, tieCounter); // checks if there is a tie
      }
    while(tie == false && win == false);
     cout << "X player score: " << x_counter << endl;
     cout << "O player score: " << o_counter << endl;  
     cout << "Would you like to play again(y/n)?" << endl; 
     cin >> playAgain; // asks if the player would like to play again
     cin.ignore();
  }
  while(playAgain == 'y');

  return 0; // the player said n and the code is terminated

}

void CreateBoard(char **strptr){ // creates or resets the board
  
  for(int i = 1; i<4; i++){
    for(int j = 1; j<4; j++){
      strptr[i][j] = ' '; // puts blank spaces in all the coordinates
    }
  }
  for(int i = 0; i <4; i ++){
    for(int j = 0; j<4; j++){
      cout << strptr[i][j]; // prints the reset board
    }
    cout << endl;
  }
}
void UpdateBoard(char ** strptr, int a, int b, int player, int &here){ // puts move into the board

  if(player == 1 && strptr[b][a] == ' '){ // if x player and there is no other play on that coordinate, put an X there and alternate the turn
  strptr[b][a] = 'X';
  here = 4;
    }
  else if(player == 0 && strptr[b][a] == ' '){ // if there is a o player and there is no other play on that coordinate, put an O there and alternate the turn
    strptr[b][a] = 'O';
    here = 3;
  }
  else{
    cout << "There is already a piece in that spot." << endl; // says that there is already a move there and does not alternate the turn
    return;
  }
  for(int i = 0; i<4; i++){
    for(int j = 0; j<4; j++){
      cout<<strptr[i][j]; // prints out the updated board
    }
    cout << endl;
  }
  
    
  
}
bool CheckTie( char **strptr, int a){ // checks for the tie
  for(int i = 1; i <4; i++){
    for(int j=1; j<4; j++){
      if(strptr[i][j] != ' '){ // if there is a move in the coordinate increment the tally
	    a++;

	  }
	  
    }
  }
  if(a == 9){ // if all the coordinates have a move say there is a tie or return true
    cout << "tie" << endl;
    return true;
  }
  return false; // no tie
}
bool CheckWin(char **strptr, int &a, int &b, int player){ // checks for win 
  char piece;
  if(player == 1){ // if x player then use an x piece
    piece = 'X';
  }
  if(player == 0){ // if o player then use an o piece
    piece = 'O';
  }
  for(int i = 1; i< 4; i++){
    if(strptr[1][i] == piece && strptr[2][i] == piece && strptr[3][i] == piece){ // 3 in a row vertically 
      if(player == 1){ // x win increment tally
      cout << "Congratulations X player you win!" << endl;
      a++; 
      }
      if(player == 0){ // o win increment tally
	cout << "Congratulations O Player you win!" << endl;
	b++;
      }
      return true;
    }
    else if (strptr[i][1] == piece && strptr[i][2] == piece && strptr[i][3] == piece){ // 3 in a row horizontially
      if(player == 1){ // x win
      cout << "Congratulations X player you win!" << endl;
      a++;
      }
      if(player == 0){ // o win
	cout << "Congratulations O player you win!" << endl;
	b++;
      }
      return true;
    }
  }
  if(strptr[1][1] == piece && strptr[2][2] == piece && strptr[3][3] == piece){ // 3 in a row diagonal 
    if(player == 1){ // x win 
      cout << "Congratulations X player you win!" << endl;
      a++;
    }
    if(player == 0){ // o win
      cout << "Congratulations O player you win!" << endl;
      b++;
    }
    return true;
  }
  if(strptr[1][3] == piece && strptr[2][2] == piece && strptr[3][1] == piece){ // 3 in a row diagonal
    if(player == 1){ // x win
      cout << "Congratulations X player you win!" << endl;
      a++;
    }
    if(player == 0){ // o win
      cout << "Congratulations O player you win!" << endl;
      b++;
    }
    return true;
  } 
  return false; // there is no win for that player
}
  
