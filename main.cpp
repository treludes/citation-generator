#include<iostream>
#include<iomanip>
#include "citation.h"
#include<string>
#include<iomanip>
#include<cctype>
using namespace std;

struct apaRecord{
  int type;
  string date;
  string pages;
  string author;
  string title;
  string pubCity;
  string PubState;
  string publisher;
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
//Parameters: none                      //
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
cout<<"    ___          _ _                ___"<<endl;                                               
cout<<"   / __\\___   __| (_)_ __   __ _   / _| ___  _ __    __ _    ___ __ _ _   _ ___  ___ "<<endl;
cout<<"  / /  / _ \\ / _  | | '_ \\ / _` | | |_ / _ \\| '__|  / _` |  / __/ _` | | | / __|/ _ \\  "<<endl;
cout<<" / /__| (_) | (_| | | | | | (_| | |  _| (_) | |    | (_| | | (_| (_| | |_| \\__ \\  __/ "<<endl;
cout<<" \\____/\\___/ \\__,_|_|_| |_|\\__, | |_|  \\___/|_|     \\__,_|  \\___\\__,_|\\__,_|___/\\___| "<<endl;
cout<<"                           |___/                                                      "<<endl;
cout<<"    ___ _ _        _   _                 ___                          _" <<endl;              
cout<<"   / __(_) |_ __ _| |_(_) ___  _ __     / _ \\___ _ __   ___ _ __ __ _| |_ ___  _ __" <<endl;  
cout<<"  / /  | | __/ _` | __| |/ _ \\| '_ \\   / /_\\/ _ \\ '_ \\ / _ \\ '__/ _` | __/ _ \\| '__|" <<endl; 
cout<<" / /___| | || (_| | |_| | (_) | | | | / /_\\\\  __/ | | |  __/ | | (_| | || (_) | |" <<endl;    
cout<<" \\____/|_|\\__\\__,_|\\__|_|\\___/|_| |_| \\____/\\___|_| |_|\\___|_|  \\__,_|\\__\\___/|_|" <<endl;
}

void apa(){
  int choice;
  string c;
  bool done = false;
  int type;
  Citation list;

  while (!done){
    cout << "\33[H\33[2J"; // clears the screen
    cout << "1. Journal" << endl
         << "2. Magazine Article" << endl
         << "3. Video" << endl
         << "4. Book" << endl
         << "5. Website" << endl << endl;
    cout << "What type of source are you citing? ";
    cin >> type;

    while (type < 1 || type > 5){
      cout << "\33[H\33[2J"; // clears the screen
      cout << "1. Journal" << endl
           << "2. Magazine Article" << endl
           << "3. Video" << endl
           << "4. Book" << endl
           << "5. Website" << endl << endl;
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
        apaWebsite(list);
        break;
    }

    cout << "Is that all the refrences?(y/N) ";
    getline(cin,c);

    if (tolower(c.front())== 'y')
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
void apaBook(Citation list){
  apaRecord record;
  int choice;
  char c;
  bool done = false;
  int type;
  cin.clear();
  cin.ignore();
  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Enter the author: ";
  cin.clear();
  getline(cin, record.author);

  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Enter the year of publication: ";
  cin.clear();
  getline(cin, record.date);

  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Enter the title: ";
  cin.clear();
  getline(cin, record.title);

  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Enter the Publisher's City: ";
  cin.clear();
  getline(cin, record.pubCity);

  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Enter the publisher's state: ";
  cin.clear();
  getline(cin, record.PubState);

  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Enter the Publisher's Name: ";
  cin.clear();
  getline(cin, record.publisher);

  cout << "\33[H\33[2J"; // clears the screen
  cout << endl;
  cout << "1. Author: " << record.author << endl
       << "2. Year: " << record.date<< endl
       << "3. Publisher City: " << record.pubCity << endl
       << "4. Publisher State: "<< record.PubState << endl
       << "5. Publisher: " << record.publisher << endl
       << "6. Title: " << record.title << endl << endl << endl;

  cout << "Correct? ";
  cin >> c;

  if (c == 'y'){
    list.insertNode(14,record.date,record.pages,record.author,record.title,record.pubCity,record.PubState,record.publisher);
  }
  else
  {
    while(!done){
    cout << "\33[H\33[2J"; // clears the screen
    cout << endl;
    cout << "1. Author: " << record.author << endl
         << "2. Year: " << record.date<< endl
         << "3. Publisher City: " << record.pubCity << endl
         << "4. Publisher State: "<< record.PubState << endl
         << "5. Publisher: " << record.publisher << endl
         << "6. Title: " << record.title << endl
         << "7. Done" << endl << endl << endl;

    cout << "Which field would you like to edit? ";
    cin.clear();
    cin >> choice;

    while (choice < 1 || choice > 7){
      cout << "\33[H\33[2J"; // clears the screen
      cout << endl;
      cout << "1. Author: " << record.author << endl
           << "2. Year: " << record.date<< endl
           << "3. Publisher City: " << record.pubCity << endl
           << "4. Publisher State: "<< record.PubState << endl
           << "5. Publisher: " << record.publisher << endl
           << "6. Title: " << record.title << endl
           << "7. Done" << endl << endl << endl;

      cout << choice << " is not a vaild option.\n";
      cout << "Which field would you like to edit? ";
          cin.clear();
      cin >> choice;
    }
    switch(choice){
      case 1:
        cout << "\33[H\33[2J"; // clears the screen
        cout << endl;
        cout << "1. Author: " << record.author << endl
             << "2. Year: " << record.date<< endl
             << "3. Publisher City: " << record.pubCity << endl
             << "4. Publisher State: "<< record.PubState << endl
             << "5. Publisher: " << record.publisher << endl
             << "6. Title: " << record.title << endl << endl << endl;

        cout << "Enter the author: ";
        cin.ignore();
        getline(cin, record.author);
        break;
      case 2:
        cout << "\33[H\33[2J"; // clears the screen
        cout << endl;
        cout << "1. Author: " << record.author << endl
             << "2. Year: " << record.date<< endl
             << "3. Publisher City: " << record.pubCity << endl
             << "4. Publisher State: "<< record.PubState << endl
             << "5. Publisher: " << record.publisher << endl
             << "6. Title: " << record.title << endl << endl << endl;

        cout << "Enter the year of publication: ";
        cin.ignore();
        getline(cin, record.date);
        break;
      case 3:
        cout << "\33[H\33[2J"; // clears the screen
        cout << "1. Author: " << record.author << endl
             << "2. Year: " << record.date<< endl
             << "3. Publisher City: " << record.pubCity << endl
             << "4. Publisher State: "<< record.PubState << endl
             << "5. Publisher: " << record.publisher << endl
             << "6. Title: " << record.title << endl << endl << endl;

             cout << "Enter the Publisher's City: ";
             cin.ignore();
             getline(cin, record.pubCity);
        break;
      case 4:
      cout << "\33[H\33[2J"; // clears the screen
      cout << endl;
          cout << "1. Author: " << record.author << endl
               << "2. Year: " << record.date<< endl
               << "3. Publisher City: " << record.pubCity << endl
               << "4. Publisher State: "<< record.PubState << endl
               << "5. Publisher: " << record.publisher << endl
               << "6. Title: " << record.title << endl << endl << endl;

               cout << "Enter the publisher's state: ";
               cin.ignore();
               getline(cin, record.PubState);
               break;
      case 5:
        cout << "\33[H\33[2J"; // clears the screen
        cout << endl;
            cout << "1. Author: " << record.author << endl
                 << "2. Year: " << record.date<< endl
                 << "3. Publisher City: " << record.pubCity << endl
                 << "4. Publisher State: "<< record.PubState << endl
                 << "5. Publisher: " << record.publisher << endl
                 << "6. Title: " << record.title << endl << endl << endl;

                 cout << "Enter the publisher's Name: ";
                 cin.ignore();
                 getline(cin, record.publisher);
                 break;
      case 6:
      cout << "\33[H\33[2J"; // clears the screen
      cout << endl;
          cout << "1. Author: " << record.author << endl
               << "2. Year: " << record.date<< endl
               << "3. Publisher City: " << record.pubCity << endl
               << "4. Publisher State: "<< record.PubState << endl
               << "5. Publisher: " << record.publisher << endl
               << "6. Title: " << record.title << endl << endl << endl;

               cout << "Enter the Title: ";
               cin.ignore();
               getline(cin, record.title);
               break;
      case 7:
        list.insertNode(14,record.date,record.pages,record.author,record.title,record.pubCity,record.PubState,record.publisher);
        return;
        break;
    }
  }

  }
}

void apaNewspaper(Citation list){
  apaRecord record;
  int choice;
  char c;
  bool done = false;
  int type;
  cin.clear();
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
    list.insertNode(14,record.date,record.pages,record.author,record.title,record.pubCity,record.PubState,record.publisher);
  }
}

void apaWebsite(Citation list){}
void mlaJournal(Citation list){}
void mlaMagazine(Citation list){}
void mlaVideo(Citation list){}
void mlaBook(Citation list){}
void mlaNewspaper(Citation list){}
void mlaWebsite(Citation list){}
