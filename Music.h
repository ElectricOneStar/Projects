/*
Music child class header file
 */
#ifndef Music_H
#define Music_H
#include "Media.h"
#include <iostream>
#include <cstring>
using namespace std;

class Music : public Media{
public:
  Music();
  ~Music();
  /*
  char* getTitle();
  void setTitle(char* t);
  */
  char* getArtist();
  void setArtist(char* a);
  /*
  int* getYear();
  void setYear(int* y);
  */
  int* getType();
  int* getDuration();
  void setDuration(int* d);
  char* getPublisher();
  void setPublisher(char* p);

private:
  //char* title = new char[20];
  char* artist = new char[20];
  //int* year = new int;
  int* duration = new int;
  int* type = new int;
  char* publisher = new char[20];
};
#endif

