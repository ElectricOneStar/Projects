/*
Student List by Andrew Thomas Mr.Galbraith P5 C++. Resources: Mr.Galbraith and C++ website. This code has a point of a vector with student points. student is a structure and has cstring for first name and lastname, int for id and float for the gpa. One can input the ADD, PRINT, DELETE, QUIT functions to the console. the ADD function adds the student to the vector and promps for the student's properties. PRINT is a function that prints the student properties. DELETE deletes the student pointer from the vector and will prompt for the id of the student you want to remove. Finally, QUIT terminates the program. 
 */
#include <iostream> // initializes libraries
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std; // uses namespace std
struct Student{ // creates the structure student
  char firstName[20]; // initializes variables
  char lastName[20];
  int id;
  float gpa;
};
Student* Add(); // initializes the function
void Subtract(vector<Student*>* v);
void Print(vector<Student*>* v);
int main() { // main function
  bool stop = false; // initializes the variables
  char stopChar;
  vector<Student*>* v = new vector<Student*>;
  cout << "Welcome to StudentList. Here you can add, print, or delete sets of information about studnet. each set has the first name, last name, ID number, and GPA for the student. if you want to quit this app then type QUIT" << endl;
  char input[20];
  char quit[5];
  //int ID;
  //int GPA;
  quit[0] = 'Q'; // sets the cstrings for each of the functions to compare
  quit[1] = 'U';
  quit[2] = 'I';
  quit[3] = 'T';
  quit[4] - '\0'; // QUIT
  
  char add[4];
  add[0] = 'A';
  add[1] = 'D';
  add[2] = 'D';
  add[3] = '\0'; // ADD
  char subtract[7];
  subtract[0] = 'D';
    subtract[1] = 'E';
    subtract[2] = 'L';
    subtract[3] = 'E';
    subtract[4] = 'T';
    subtract[5] = 'E';
    subtract[6] = '\0'; // DELETE
    char print[6];
    print[0] = 'P';
    print[1] = 'R';
    print[2] = 'I';
    print[3] = 'N';
    print[4] = 'T';
    print[5] - '\0'; // PRINT
    
    do{ // Continues running the programm until the QUIT funciton
	    cout << "What would you like to do?" << endl;
	    //if(strcmp(input, subtract) == 0){
	    // cout << "are you sure you want to quit y/n" << endl;
	    cin.get(input, 20); // asks and gets input
	    cin.clear();
	    cin.ignore();
	    if(strcmp(input, add) == 0){ // ADD function
	      (*v).push_back(Add()); // add the student created in ADD funtion the the vector pointer of student pointers
		//	cout << (*v.front()).id << endl;
		//	cout << (*v.front()).gpa << endl;
		//for(int i=0;i<10;i++){
		  // cout << (*v.front()).firstName[i];
		 //}
		  } 
	    else if(strcmp(input, subtract) == 0){ // DELETE function
	      //  cout << "Delete" << endl;
	      Subtract(v); // DELETES
	      }
	    else if(strcmp(input, quit) == 0){ // QUIT function
	      stop = true; // sets the stop boolean to true
	    }
	    else if(strcmp(input, print) == 0){ // PRINT function
	      //cout << "Print" << endl;

	      Print(v); // prints
	    }
	    else{
	      cout << "Command not recognized. Please check your spelling and make sure it is all capital letters." << endl; // input is not any of the commands
	    }
	    
	  }
    while(stop == false); // keeps going while stop is false
	  return 0;
}
Student* Add(){ // creates the student pointer to add to vector
  Student *create = new Student(); // student created
  cout << "Please enter the student's first name." << endl;
  cin.get((*create).firstName, 20); // firstname
  //(*create).firstName.add('\0');
  cin.clear();
  cin.ignore();
  (*create).firstName[20] = '\0';
  cout << "Please enter the student's last name." << endl;
  cin.get((*create).lastName, 20); // lastname
  cin.clear();
  cin.ignore();
  (*create).lastName[20] = '\0';
  cout << "Please enter the student's ID number." << endl;
  cin >>(*create).id; //id
  cin.clear();
  cin.ignore();
    cout << "Please enter the student's GPA." << endl;
    cin >> (*create).gpa; // gpa
    cin.clear();
    cin.ignore();
    //(*create).gpa = (int)((*create).gpa * 100 + 0.5);
    //cout << (*create).gpa << endl;
    //(*create).gpa = (float)(*create).gpa / 100;
  
    //cout << (*create).gpa << endl;
   //  (*create).gpa = round((*create).gpa);

   //cin.ignore();
   return create; // return the created student will these inputed values
}
void Subtract(vector<Student*>* v){ // deletes the student from the vector
  int unwantedID;
  int loss;
  bool del = false;
  cout << "Please enter the ID of the student you want to delete." << endl;
  cin >> unwantedID; // gets the ID
  cin.clear();
  cin.ignore();
  //int i = 0;
   for(vector<Student*>::iterator it = (*v).begin(); it != (*v).end(); ++it){ // goes through vector
     for (int i =0; i < (*v).size(); i++){ // gets id of the elements that the iterator goes through
       if((*(*it)).id == unwantedID){ // if the id match
	 loss = i; // does not delete the student here but saves the information here and deletes after the iterator
       del = true;
      cout << "Deleted" << endl;
       break;
    }
    }
   }
   if(del){
 (*v).erase(loss + (*v).begin());
   }
  return;
}
void Print(vector<Student*>* v){ // prints all the students in the vector
  for(vector<Student*>::iterator it = (*v).begin(); it != (*v).end(); ++it){ // goes through the vector
    for(int j =0; j<20; j++){
      cout << (*(*it)).firstName[j]; //prints first name
    }
    cout << " ";
    for(int f = 0; f<20; f++){
      cout << (*(*it)).lastName[f]; // prints last name
    }
    cout << ", "; 
    cout << (*(*it)).id; // prints ID
  cout << ", ";
  cout << fixed << setprecision(2) << (*(*it)).gpa; // prints GPA
  
  cout  << endl;
  }
  return;
}
