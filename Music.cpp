/*
Music child class .cpp file
 */
#include "Music.h"
//#include "Media.h"
#include<iostream>
#include<cstring>
//#include "Media.h"
using namespace std;
Music::Music(){
  (*type) = 3;
}
Music::~Music(){
  delete artist;
  delete duration;
  delete type;
  delete publisher;
}
/*
char* Music::getTitle(){
  return title;
}
void Music::setTitle(char* t){
  title = t;
}
*/
char* Music::getArtist(){
  return artist;
}
void Music::setArtist(char* a){
  artist = a;
}
/*
int* Music::getYear(){
  return year;
}
void Music::setYear(int* y){
  year = y;
}
*/
int* Music::getDuration(){
  return duration;
}
void Music::setDuration(int* d){
  duration = d;
}
char* Music::getPublisher(){
  return publisher;
}
void Music::setPublisher(char* p){
  publisher = p;
}
int* Music::getType(){
return type;
}
