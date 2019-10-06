// Palindrome by Andrew Thomas. This program will read in an input and process that input(take out the spaces, make it all the same case, and remove any punctuation) to see if it is a palindrome or not(output)
#include <iostream> // gets the libraries 
#include <cstring>
using namespace std;

int main(){ // main block of code
  cout << "Welcome to Palindrome.\n"; // initializes all the variables and introduces the game to the user
  char str[80];
  char str2[80];
  char str3[80];
  int count = 0;
  int count2 = 0;
  int len = 0;
  int alphabet = 0;
  int difference = 0;
  // do{ // do while loop that ensures that the input is at most 80 charecters long.
    cout << "please enter a sentence that is at most 80 charecters long (spaces are a charecter) and this program will say wheather or not it is a palindrome\n";
    
    cin.get(str, 80); // gets a cstring
  cin.get();

  len = strlen(str); //gets length of c string
  // if(len>80){
    // char str[80];
    // }
  // }
  // while(len>80);
  //cout << len << endl;
  for(int j = 0; j < len; j++){ // for loop that processes the initial input
    alphabet = str[j]; 
   difference = 0;
   if(alphabet >= 65 && alphabet <= 90){ // checks if the case is upper with ascii
     difference = alphabet + 32;
     str3[count2] = char(difference); // if it is convert it to lower case
     count2++; 
   }
   if(str[j] != '\0' && str[j] != ' ' && str[j] != ',' && str[j] != ':' && str[j] != ';' && str[j] != '.' && str[j] != '\"' && str[j] != '\'' && str[j] != '?' && str[j] != '!' && alphabet < 65 || alphabet > 90){// checks if lowercase and is not a space or punction
     str3[count2] = str[j]; // if it is put it into the procces input
      count2++;
    }
       }
  str3[len] = '\0'; // puts null terminator character at the end
  //cout << str3 << endl;
  int len2 = 0;
  len2 = strlen(str3); // gets length of processed input
  for(int i = len2 - 1; i >= 0; i--){ // goes through the procced input and reverses it
      if(str[i] != '\0'){
	str2[count] = str3[i]; 
	count++;
      }
    }
  str2[len2] = '\0'; // puts null terminator charecter at the end
    //  cout << str2 << endl;
  if(strcmp(str2, str3) == 0){ // compares processed string and backward string to see if it is a palindrome
    cout << "Palindrome."; // it is
    }
    else{
      cout << "Not a palindrome."; // it is not
    }
  return 0; // terminate the code
}
