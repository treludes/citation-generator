#include<iostream>
#include<iomanip>

using namespace std;

int main(){



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

  //variables for the user to enter menu choices
 int selection;
  //main menu with user input
  cout << endl << "-----------------Citation Machine------------------" << endl << endl;
  cout << "Which citation format would you like to use to cite your work?" << endl;
  cout << "1. APA style" << endl << "2. MLA style" << endl;
  cin >> selection;;
  cout << endl << "---------------------------------------------------" << endl << endl;
  //input validating loop
  while (format != 1 && format != 2)
  {
    cout << "INVALID ENTRY!" << endl;
    cout << "Which Format would you like to cite your work?" << endl;
    cout << "1. APA style" << endl << "2. MLA style" << endl;
    cin >> selection;
    cout << endl << "---------------------------------------------------" << endl << endl;
  }

  return selection;
}
//////////////////////////////////////////
//createCitation Function               //
//////////////////////////////////////////
//Creates the final Citation            //
//////////////////////////////////////////
//Parameters:                           //
//                                      //
//                                      //
//////////////////////////////////////////
//return Type: string                   //
//citation-the final citaion            //
//////////////////////////////////////////

//may need different functions for each style
string createCitation(){
  string citation;

  return citation;
}
