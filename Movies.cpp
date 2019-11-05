/*
Movies child class .cpp file
 */
#include <iostream>
#include "Movies.h"
#include <cstring>
using namespace std;

Movies::Movies(){
   (*type) = 2;
}
Movies::~Movies(){
  delete director;
  delete duration;
  delete rating;
  delete type;
}
/*
char* Movies::getTitle(){
  return title;
}
void Movies::setTitle(char* t){
  title = t;
}
*/
int* Movies::getType(){
  return type;
}
char* Movies::getDirector(){
  return director;
}
void Movies::setDirector(char* d){
  director = d;
}
/*
int* Movies::getYear(){
  return year;
}
void Movies::setYear(int* y){
  year = y;
}
*/
int* Movies::getDuration(){
  return duration;
}
void Movies::setDuration(int* d){
  duration = d;
}
int* Movies::getRating(){
  return rating;
}
void Movies::setRating(int* r){
  rating = r;
}
