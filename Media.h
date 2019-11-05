/*
Media parent class header file
 */
#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>



using namespace std;

class Media {
 public:
  Media();
  ~Media();
  //string* getDescription();
  int getID(); //getters and setters
  virtual int* getType();
  virtual char* getPublisher();
  virtual int* getRating();
  virtual int* getDuration();
  virtual char* getDirector();
  virtual char* getArtist();
  //void setType(int* t);
  char* getTitle();
  void setTitle(char* t);
  int* getYear();
  void setYear(int* y);
 private:
  //string* description;
  int id; // pointer variables
  char* title = new char[20];
  int* type = new int;
  int* year = new int;
  int* rating = new int;
  char* publisher = new char[20];
  int* duration = new int;
  char* director = new char[20];
  char* artist = new char[20];
};
#endif

