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
void apaJournal(Citation list);
void apaMagazine(Citation list);
void apaVideo(Citation list);
void apaBook(Citation list);
void apaNewspaper(Citation list);
void apaWebsite(Citation list);
void mlaJournal(Citation list);
void mlaMagazine(Citation list);
void mlaVideo(Citation list);
void mlaBook(Citation list);
void mlaNewspaper(Citation list);
void mlaWebsite(Citation list);

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
  string choice = "n";
  bool done = false;
  int type;
  Citation list;
  cout << "\33[H\33[2J"; // clears the screen
  while (!done){

    cout << "1. Journal   2. Magazine Article   3. Video\n "
         << "4. Book      5. Website" << endl << endl;
    cout << "What type of source are you citing? ";
    cin >> type;

    while (choice < 1 || choice > 5){
      cout << "\33[H\33[2J"; // clears the screen
      cout << "1. Journal   2. Magazine Article   3. Video\n "
           << "4. Book      5. Website" << endl << endl;
      cout << type << " is an invaild option.\n";
      cout << "What type of source are you citing? ";
      cin >> type;
    }

    switch (type) {
      case 1:
        apaJournal(list);
        break;
      case 2:
        apaMagazine(list);
        break;
      case 3:
        apaVideo(list);
        break;
      case 4:
        apaBook(list);
        break;
      case 5:
        apaWebsite(list)
        break;
    }

    cout << "Is that all the refrences?(y/N) ";
    getline(cin,done)

    if (tolower(done[0]) == "y")
      done = true;
  }
  cout << "\33[H\33[2J"; // clears the screen
  list.display();

}

void mla(){

}

void apaJournal(Citation list){}
void apaMagazine(Citation list){}
void apaVideo(Citation list){}
void apaBook(Citation list){}
void apaNewspaper(Citation list){
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
}
void apaWebsite(Citation list){}
void mlaJournal(Citation list){}
void mlaMagazine(Citation list){}
void mlaVideo(Citation list){}
void mlaBook(Citation list){}
void mlaNewspaper(Citation list){}
void mlaWebsite(Citation list){}
