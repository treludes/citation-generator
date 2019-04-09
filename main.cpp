#include<iostream>
#include<iomanip>
#include "citation.h"
#include<string>
#include<iomanip>
using namespace std;

struct apaRecord{
  int type;
  string date;
  string pages;
  string author;
  string title;
};

using namespace std;
void splash();
void apa();
void mla();
int menu();

int main(){


  splash();
  switch (menu()){
    case 1:
      apa();
      break;
    case 2:
      mla();
      break;
  }


  return 0;
}
//////////////////////////////////////////
//Menu Function                         //
//////////////////////////////////////////
//Displays the main menu and sub menus  //
//////////////////////////////////////////
//Parameters:                           //
//                                      //
//                                      //
//////////////////////////////////////////
//return Type: int                      //
//selection-indicates the style and type//
//////////////////////////////////////////
int menu(){

  //menu function
  cout << "\33[H\33[2J"; // clears the screen
  //variables for the user to enter menu choices
  int selection;
  //main menu with user input
  cout << endl << "-----------------Citation Machine------------------" << endl << endl;
  cout << "Which citation format would you like to use to cite your work?" << endl;
  cout << "1. APA style" << endl << "2. MLA style" << endl;
  cin >> selection;
  cout << endl << "---------------------------------------------------" << endl << endl;
  //input validating loop
  while (selection != 1 && selection != 2)
  {
    cout << "INVALID ENTRY!" << endl;
    cout << "Which Format would you like to cite your work?" << endl;
    cout << "1. APA style" << endl << "2. MLA style" << endl;
    cin >> selection;
    cout << endl << "---------------------------------------------------" << endl << endl;
  }

  return selection;
}


void splash(){
  cout << "\33[H\33[2J"; // clears the screen
}

void apa(){
  bool done = false;
  char choice;
  Citation list;
  while (!done){
    apaRecord record;
    cin.clear();
    cin.ignore();
    cout << "\33[H\33[2J"; // clears the screen
    cout << endl;
    cout << "Author: " << setw(20) << left << record.author
         << "Date: " << setw(10) << left << record.date
         << "Pages: " << setw(10) << left << record.pages << endl;
    cout << "Title: " << record.title << endl << endl << endl;

    cout << "Enter the author: ";
    getline(cin, record.author);

    cout << "\33[H\33[2J"; // clears the screen
    cout << endl;
    cout << "Author: " << setw(20) << left << record.author
         << "Date: " << setw(10) << left << record.date
         << "Pages: " << setw(10) << left << record.pages << endl;
    cout << "Title: " << record.title << endl << endl << endl;

    cout << "Enter the Date: ";
    getline(cin, record.date);

    cout << "\33[H\33[2J"; // clears the screen
    cout << endl;
    cout << "Author: " << setw(20) << left << record.author
         << "Date: " << setw(10) << left << record.date
         << "Pages: " << setw(10) << left << record.pages << endl;
    cout << "Title: " << record.title << endl << endl << endl;

    cout << "Enter the pages: ";
    getline(cin, record.pages);

    cout << "\33[H\33[2J"; // clears the screen
    cout << endl;
    cout << "Author: " << setw(20) << left << record.author
         << "Date: " << setw(10) << left << record.date
         << "Pages: " << setw(10) << left << record.pages << endl;
    cout << "Title: " << record.title << endl << endl << endl;

    cout << "Enter the title: ";
    getline(cin, record.title);

    cout << "\33[H\33[2J"; // clears the screen
    cout << endl;
    cout << "Author: " << setw(20) << left << record.author
         << "Date: " << setw(10) << left << record.date
         << "Pages: " << setw(10) << left << record.pages << endl;
    cout << "Title: " << record.title << endl << endl << endl;

    cout << "Correct? ";
    cin >> choice;

    if (choice == 'y'){
      list.insertNode(0,record.date,record.pages,record.author,record.title);
    }

    cout << "Is that all the refrences? ";
    cin >> done;
  }
  cout << "\33[H\33[2J"; // clears the screen
  list.display();

}

void mla(){

}
