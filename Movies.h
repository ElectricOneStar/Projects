/*
Movies child class header file
 */

#ifndef Movies_H
#define Movies_H
#include "Media.h"
#include<iostream>
#include<cstring>
using namespace std;

class Movies : public Media{
 public:
  Movies();
  ~Movies();
  // char* getTitle();
  // void setTitle(char* t);
    char* getDirector();
  void setDirector(char* d);
  // int* getYear();
  /// void setYear(int* y);
  int* getDuration();
  void setDuration(int* d);
  int* getRating();
  void setRating(int* r);
   int* getType();
 private:
  // char* title = new char[20];
  char* director = new char[20];
  // int* year = new int;
  int* duration = new int;
  int* rating = new int;
  int* type = new int;
};
#endif
