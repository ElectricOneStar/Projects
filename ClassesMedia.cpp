/*
Classes by Andrew Thomas 11/5/19 Mr.Galbraith C++/Data Structures Semester 2 P3.
 This is the main class and it is a database of different types of media(parent class). The types of media include video games, music, and movies and they each separate child classes. There are 3 functions ADD, SEARCH, DELETE. ADD, adds a media and its information to the vector of media pointers. SEARCH searches the database for media that matches the inputted title or year. And Delete deletes the media that matches the inputed title or year.
 */
#include <iostream> // including other classes and libraries
#include "Media.h"
#include "videoGames.h"
#include "Movies.h"
#include "Music.h"
#include <vector>
#include <cstring>
using namespace std;

void Add(vector<Media*>* v); // functions
  void Search(vector<Media*>* v);
  void Subtract(vector<Media*>* v);
int main(){
  
  bool play = true; //initialzing local variables
  char input[20];
  vector<Media*>* v = new vector<Media*>; //vector pointer of media pointers 
  cout << "Welcome to Classes. This is a database of different types of media. The types of media include video games, music, and movies. There are 3 functions ADD, SEARCH, and DELETE." << endl;
  do{
    cout << "What would you like to do" << endl;
    cin.get(input, 20); // gets input function
    cin.clear();
      cin.ignore();
      if(strcmp(input, "ADD") == 0){ // add function
	Add(v);
      }
      else if(strcmp(input, "SEARCH") == 0){ // search function
	 Search(v);
       }
      else if(strcmp(input, "DELETE") == 0){ // delete function
	   Subtract(v);
	 }
      else if(strcmp(input, "QUIT") == 0){ // quit function(exits the do while loop)
       play = false;
      }
      else{ // invalid function input
	 cout << "input not recognized. Please check your spelling and make sure everything is uppercase" << endl;
       }
  }
  while(play); // do while loop of the 3 functions
  return 0;
}
void Add(vector<Media*>* v){ // add function
  // cout << "Add" << endl;
  char type[20]; // initializes variables(these are the varibles in which the input is stored)
  char* title = new char[20];
  int* year = new int;
  char* publisher = new char[20];
  int* rating = new int;
  char* director = new char[20];
  int* duration = new int;
  char* artist = new char[20];
  do{ // keeps asking for which media that one wants to add
  cout << "What type of Media would you like to add. There are video games, movies, and music" << endl;
  cin.get(type, 20);
  cin.clear();
  cin.ignore();
  //cout << type << endl;
  }
  while(strcmp(type, "video games") != 0 && strcmp(type, "movies") != 0 && strcmp(type, "music") != 0);
  if(strcmp(type, "video games") == 0){ // add videogames
      //  cout << type << endl;
    videoGames* videogames = new videoGames(); // creates video game
    cout << "What is the title of the video game?" << endl; // sets title
      cin.get(title, 20);
      cin.clear();
      cin.ignore();
      (*videogames).setTitle(title);
      //cout << (*v).getTitle();
      // for(int i=0; i < strlen((*videogames).getTitle()); i ++){
      //	cout << (*videogames).getTitle()[i];
      //}
      // cout << endl;
      cout << "What year was the video game created?" << endl; // sets year
      cin >> (*year);
      cin.clear();
	cin.ignore();
	(*videogames).setYear(year);
	//	cout << (*(*videogames).getYear()) << endl;
	
	cout << "What is the publisher of the video game?" << endl; // sets publisher
      cin.get(publisher, 20);
      cin.clear();
      cin.ignore();
      (*videogames).setPublisher(publisher);
      //cout << (*v).getTitle();
      // for(int i=0; i < strlen((*videogames).getPublisher()); i ++){
      //	cout << (*videogames).getPublisher()[i];
      //}
      // cout << endl;
      cout << "What is the rating of the video game?" << endl; // sets rating
      cin >> (*rating);
      cin.clear();
	cin.ignore();
	(*videogames).setRating(rating);
	//cout << (*(*videogames).getRating()) << endl;
       	(*v).push_back(videogames);	
    }
     
  if(strcmp(type, "music") == 0){ // adding music
    Music* music = new Music();   //creates music 
 //cout << type << endl;
    cout << "What is the title of the music?" << endl; // sets title
      cin.get(title, 20);
      cin.clear();
      cin.ignore();
      (*music).setTitle(title);
      //cout << (*v).getTitle();
      //      for(int i=0; i < strlen((*music).getTitle()); i ++){
      //cout << (*music).getTitle()[i];
      //}
      //cout << endl;
      cout << "What is the artist of the music?" << endl; // sets artist
      cin.get(artist, 20);
      cin.clear();
      cin.ignore();
      (*music).setArtist(artist);
      //cout << (*v).getTitle();
      // for(int i=0; i < strlen((*music).getArtist()); i ++){
      //cout << (*music).getArtist()[i];
      //}
      //cout << endl;
      cout << "What year was the music created?" << endl; // sets year
      cin >> (*year);
      cin.clear();
	cin.ignore();
	(*music).setYear(year);
	//cout << (*(*music).getYear()) << endl;
        cout << "What is the duration of the music?" << endl;// sets duration
      cin >> (*duration);
      cin.clear();
	cin.ignore();
	(*music).setDuration(duration);
	//cout << (*(*music).getDuration()) << endl;
	cout << "What is the publisher of the music?" << endl; // sets publisher
      cin.get(publisher, 20);
      cin.clear();
      cin.ignore();
      (*music).setPublisher(publisher);
      //cout << (*v).getTitle();
      //for(int i=0; i < strlen((*music).getPublisher()); i ++){
      //cout << (*music).getPublisher()[i];
      //}
      //cout << endl;
      (*v).push_back(music);

  }
  if(strcmp(type, "movies") == 0){ // adding movies
    Movies* movies = new Movies(); // creates movies variable
      //cout << type << endl;
    cout << "What is the title of the movie?" << endl; // sets title
      cin.get(title, 20);
      cin.clear();
      cin.ignore();
      (*movies).setTitle(title);
      //cout << (*v).getTitle();
      //for(int i=0; i < strlen((*movies).getTitle()); i ++){
      //cout << (*movies).getTitle()[i];
      //}
      //cout << endl;
      cout << "What is the director of the movie?" << endl; // sets director
      cin.get(director, 20);
      cin.clear();
      cin.ignore();
      (*movies).setDirector(director);
      //cout << (*v).getTitle();
      //for(int i=0; i < strlen((*movies).getDirector()); i ++){
      //cout << (*movies).getDirector()[i];
      //}
      //cout << endl;
      cout << "What year was the video game created?" << endl; // sets year
      cin >> (*year);
      cin.clear();
	cin.ignore();
	(*movies).setYear(year);
	//cout << (*(*movies).getYear()) << endl;
	cout << "What is the duration of the movie?" << endl; // sets duration
      cin >> (*duration);
      cin.clear();
	cin.ignore();
	(*movies).setDuration(duration);
	//cout << (*(*movies).getDuration()) << endl;
	cout << "What is the rating of the movie?" << endl; // sets rating
      cin >> (*rating);
      cin.clear();
	cin.ignore();
	(*movies).setRating(rating);
	//cout << (*(*movies).getRating()) << endl;
       	(*v).push_back(movies);
      //cout << type << endl;
  }
    
}

void Subtract(vector<Media*>* v){ // DELETE function
  // cout << "Delete" << endl;
  char* title = new char[20]; // initializes local variables
  Media* temp = new Media();
  int* year = new int;
  int counter = 0;
  int lossCounter = 0;
  char input[20];
  char sure[20];
  int id = -1;
  //int loss[20];
  bool out = false;
  int loss;
  do{
    cout << "Would you like to use title or year?" << endl; // keeps asking for title or year
      cin.get(input,20);
      cin.clear();
    cin.ignore();

  }
  while(strcmp(input, "title") != 0 && strcmp(input, "year") != 0);
 
  if(strcmp(input,"title") == 0){ 
    cout << "Please enter the title" << endl; // gets the input title
      cin.get(title, 20);
      cin.clear();
      cin.ignore();
      for(vector<Media*>::iterator it = (*v).begin(); it != (*v).end() && out == false; it++){ // iterator that goes through media vector
	//for(int i = 0; i < (*v).size() && out == false; i++){ 
	  id++;
	  if(strcmp((*(*it)).getTitle(), title) == 0){ // title match
	    do{
	      cout << "Are your sure you want to delete this(yes or no)" << endl; // asks if wants to delete
      cin.get(input,20);
      cin.clear();
    cin.ignore();

  }
  while(strcmp(input, "yes") != 0 && strcmp(input, "no") != 0);
	    if(strcmp(input, "yes") == 0){ // delete
	      //(*v).erase(i + (*v).begin());
	      //loss = i; // gets id
	      cout << "Deleted" << endl;
	      //lossCounter++;
	      counter++;
	      //break;
	  temp = (*v).at(id);
	  (*v).erase(id + (*v).begin()); // takes out media from vector
	  delete temp; // deletes pointer to the media
	  return;
	      //out = true;
	      //  break;
	    }
	    else{

	    }
	    counter++;  
	  }
  
      }
	  //break;
	  //if(out){
	  //break;
	  //}
	  //}
	  //if(strcmp(input, "yes") == 0){
	  //temp = (*v).at(loss);
	  //(*v).erase(loss + (*v).begin()); // takes out media from vector
	  // delete temp; // deletes pointer to the media
	//}
	if(counter == 0){ // no match
      cout << "Sorry, there is no media that matches that title" << endl;
    }
    counter = 0;
    }

    if(strcmp(input, "year") == 0){
      cout << "Please enter the year" << endl; // gets the input year
      cin >> (*year);
      cin.clear();
      cin.ignore();
      for(vector<Media*>::iterator it = (*v).begin(); it != (*v).end() && out == false; it++){ // iterator that goes through the media vector
	//for(int i = 0; i < (*v).size() && out == false; i++){
     id++;
     if((*(*(*it)).getYear()) == (*year)){ //match
	    do{
	      cout << "Are your sure you want to delete this?(yes or no)" << endl; // delete??
      cin.get(input,20);
      cin.clear();
    cin.ignore();

  }
  while(strcmp(input, "yes") != 0 && strcmp(input, "no") != 0);
	    if(strcmp(input, "yes") == 0){ // delete
	      //counter++
	       // gets the id 
	      //lossCounter++;
	      cout << "Deleted" << endl;
	      counter++;
	      //out = true;
	     temp = (*v).at(id);
	  (*v).erase(id + (*v).begin()); // takes out media from vector
	  delete temp; // deletes pointer to the media
	  return;
	      
	      //break;
	    }
	    else{
	      //return;
	    }

       counter++;
     }
     }
	  //if(out){
	  //break;
	  //}
      //     }
      //if(strcmp(input, "yes") == 0){
       //for(int i = 0; i<sizeof(loss); i++){
       //(*v).erase(loss[i] + (*v).begin());
      //temp = (*v).at(loss);
	  //(*v).erase(loss + (*v).begin()); // takes out media from vector
	  // delete temp; // deletes pointer to the media
	//}
	  //}

     if(counter == 0){ // no match
      cout << "Sorry, there is no media that matches that year" << endl;
    }

    }

}
void Search(vector<Media*>* v){ // search function
  //cout << "Select" << endl;
  char* title = new char[20]; // initializes variables
  int* year = new int;
  int counter = 0;
  char input[20];
  do{
    cout << "Would you like to search for title or year?" << endl; // asks for title or year
  cin.get(input,20);
  cin.clear();
    cin.ignore();

  }
  while(strcmp(input, "title") != 0 && strcmp(input, "year") != 0);
 
    if(strcmp(input,"title") == 0){
      cout << "Please enter the title" << endl; // gets input title
      cin.get(title, 20);
      cin.clear();
      cin.ignore();
      for(vector<Media*>::iterator it = (*v).begin(); it != (*v).end(); it++){ // iterator that goes through vector
	if(strcmp((*(*it)).getTitle(), title) == 0){ // title match
     cout << "Title: ";
     for(int i=0; i < strlen((*(*it)).getTitle()); i ++){ // output title
	cout << (*(*it)).getTitle()[i];
      }
     cout << endl;
     cout << "Year: "; // output year
     cout << (*(*(*it)).getYear()) << endl;
     if((*(*(*it)).getType()) == 1){ //video games output information
       cout << "Publisher: ";
      for(int i=0; i < strlen((*(*it)).getPublisher()); i ++){
	cout << (*(*it)).getPublisher()[i];
      }
      cout << endl;

       cout << "Rating: ";
       cout << (*(*(*it)).getRating()) << endl; 
     }
     if((*(*(*it)).getType()) == 2){ //movies output information
       cout << "Director: ";
      for(int i=0; i < strlen((*(*it)).getDirector()); i ++){
	cout << (*(*it)).getDirector()[i];
      }
      cout << endl;
       cout << "Duration: ";
       	 cout << (*(*(*it)).getDuration()) << endl;
	 cout << "Rating: ";
        cout << (*(*(*it)).getRating()) << endl;
    
     }
     if((*(*(*it)).getType()) == 3){ //music output information
       cout << "Artist: ";
      for(int i=0; i < strlen((*(*it)).getArtist()); i ++){
	cout << (*(*it)).getArtist()[i];
      }
      cout << endl;
	 cout << "Duration: ";
	 cout << (*(*(*it)).getDuration()) << endl;
	 cout << "Publisher: ";
       for(int i=0; i < strlen((*(*it)).getPublisher()); i ++){
	cout << (*(*it)).getPublisher()[i];
      }
       cout << endl;
     }
     
     counter++;
	  }
  
	}
      if(counter == 0){ // no match
      cout << "Sorry, there is no media that matches that title" << endl;
    }
    counter = 0;

    }
    if(strcmp(input, "year") == 0){ 
      cout << "Please enter the year" << endl; // gets input year
      cin >> (*year);
      cin.clear();
      cin.ignore();
      for(vector<Media*>::iterator it = (*v).begin(); it != (*v).end(); it++){ // iterator that goes through the media vector
	if((*(*(*it)).getYear()) == (*year)){ // year match
     cout << "Title: ";
     for(int i=0; i < strlen((*(*it)).getTitle()); i ++){ 
       cout << (*(*it)).getTitle()[i]; // output title
      }
     cout << endl;
     cout << "Year: ";
     cout << (*(*(*it)).getYear()) << endl; // output year
     if((*(*(*it)).getType()) == 1){ //video games output information
       cout << "Publisher: ";
      for(int i=0; i < strlen((*(*it)).getPublisher()); i ++){
	cout << (*(*it)).getPublisher()[i];
      }
      cout << endl;

       cout << "Rating: ";
       cout << (*(*(*it)).getRating()) << endl; 
     }
     if((*(*(*it)).getType()) == 2){ //movies output information
       cout << "Director: ";
      for(int i=0; i < strlen((*(*it)).getDirector()); i ++){
	cout << (*(*it)).getDirector()[i];
      }
      cout << endl;
       cout << "Duration: ";
       	 cout << (*(*(*it)).getDuration()) << endl;
	 cout << "Rating: ";
        cout << (*(*(*it)).getRating()) << endl;
    
     }
     if((*(*(*it)).getType()) == 3){ //music output information
       cout << "Artist: ";
      for(int i=0; i < strlen((*(*it)).getArtist()); i ++){
	cout << (*(*it)).getArtist()[i];
      }
      cout << endl;
	 cout << "Duration: ";
	 cout << (*(*(*it)).getDuration()) << endl;
	 cout << "Publisher: ";
       for(int i=0; i < strlen((*(*it)).getPublisher()); i ++){
	cout << (*(*it)).getPublisher()[i];
      }
       cout << endl;
     }

     counter++;
	  }
  
      }
      if(counter == 0){ // no match
      cout << "Sorry, there is no media that matches that year" << endl;
    }

    }
  
}

