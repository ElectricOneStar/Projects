/*
Media parent class .cpp file
 */
#include <iostream>
#include "Media.h"
//#include "Music.h"
using namespace std;

Media::Media(){ // constructor
  
}
Media::~Media(){ // destructor
  delete type;
  delete year;
  delete rating;
  delete publisher;
  delete duration;
  delete director;
  delete artist;
}
//string* Media::getDescription(){
//return description;
//}
int Media::getID(){ // getters and setters
  return id;
}
int* Media::getType(){
  return type;
}
char* Media::getTitle(){
  return title;
}
void Media::setTitle(char* t){
  title = t;
}
int* Media::getYear(){
  return year;
}
void Media::setYear(int* y){
  year = y;
}
char* Media::getPublisher(){
  return publisher;
}
int* Media::getRating(){
  return rating;
}
int* Media::getDuration(){
  return duration;
}
char* Media::getDirector(){
  return director;
}
char* Media::getArtist(){
  return artist;
}
