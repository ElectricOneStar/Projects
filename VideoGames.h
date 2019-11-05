/*
video games child class header file
 */
#ifndef videoGames_H
#define videoGames_H
#include "Media.h"
#include <iostream>
#include <cstring>
using namespace std;

class videoGames : public Media{
 public:
  videoGames();
  ~videoGames();
  //char* getTitle();
  //void setTitle(char* t);
  //int* getYear();
  //void setYear(int* y);
  int* getType();
  char* getPublisher();
  void setPublisher(char* p);
    int* getRating();
  void setRating(int* r);
 private:
  //char* title = new char[20];
  //int* year = new int;
    char* publisher = new char[20];
  int* rating = new int;
  int* type = new int;
};
#endif
