/*
Guessing Game by Andrew Thomas 09/05/19 the computer will pick a random number between 0 and 100 inclusive and the user has to guess that number.
The program will give feedback if the guess was too high or too low until the user guesses correctly. Then it will display the number of guesses and asks the user if they want to play again.
*/
#include <iostream> // set up
using namespace std;

int main() // main code block
{
  char again; // initializing variables
  do{ // do while loop that will contiue to do the game while the users still says yes
  int input = 101;
  srand(time(NULL));
  int computerNumber = rand() % 101;
  int counter = 1;

  cout << "This is the Guessing Game. The computer will pick a number between 0 and 100 inclusive and you have to guess that number. Please enter that number" << endl; // intro
  do{ // do while loop that will make the user keep guessing until the guess matches the random number
  cin >> input;
  while(!cin){ // integer validation
    cout << "Please enter an integer\n";
    cin.clear();
    cin.ignore();
    cin >> input;
    }
  if(input > 100 || input < 0){ // checks if the integer is in the proper range
    cout << "Please enter a number between 0 and 100\n";
  }

  else if(input > computerNumber){ // checks if the integer guess is greater than the random number
    cout << "That number is too high please try again\n";
    counter++;

  }
  else if(input < computerNumber){ // checks if hte integer guess is lower than the random number
    cout << "That number is too low please try again\n";
    counter++;

  }
  }
  while(input != computerNumber);
  cout << "Congratulations you guessed the right number with " << counter << " tries. Would you like to try again (y/n)\n";
  cin >> again; // asks if player wants to play again
  }
  while(again == 'y');

  return 0; // terminates the code


}
