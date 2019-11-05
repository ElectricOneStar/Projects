/*
video games child class .cpp file
 */
#include <iostream>
#include "videoGames.h"
#include <cstring>
using namespace std;

videoGames::videoGames(){
  (*type) = 1;
}
videoGames::~videoGames(){
  delete type;
  delete rating;
  delete publisher;
}
/*
char* videoGames::getTitle(){
  return title; 
}
void videoGames::setTitle(char* t){
  title = t;
}


int* videoGames::getYear(){
  return year; 
}
void videoGames::setYear(int* y){
  year = y;
}
*/
char* videoGames::getPublisher(){
  return publisher; 
}
void videoGames::setPublisher(char* p){
  publisher = p;
}
int* videoGames::getRating(){
  return rating; 
}
void videoGames::setRating(int* r){
  rating = r;
}
int* videoGames::getType(){
  return type;
}
