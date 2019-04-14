#include "citation.h"
#include <iostream>
#include <string>
using namespace std;
//**************************************************
// constructor								                     *
// 												                         *
//**************************************************
Citation::Citation(){
  //Make sure head starts out pointing to NULL
  head = nullptr;
  //numCitations = 0;
}
//**************************************************
// Destructor                                      *
// This function deletes every node in the list.   *
//**************************************************
Citation::~Citation(){
  //create pointers
  ListNode *previousNode;
  ListNode *nodePtr;

  //set initaial pointer to the head
  nodePtr = head;

  //step through the list, deleting each node
  while(nodePtr != nullptr){
    previousNode = nodePtr;
    nodePtr = nodePtr->next;
  }



}

void Citation::insertNode(int type,string date, string pg, string auth,
        string title, string pubCity, string PubState, string publisher){
  //create pointers
  ListNode *newNode;
  ListNode *nodePtr;

  //create new node
  newNode = new ListNode;
  newNode->type = type;
  newNode->date = date;
  newNode->pages = pg;
  newNode->author = auth;
  newNode->title = title;

  newNode->next = nullptr;
  //numCitations++;
  //check for head
  if(!head){
	   head = newNode;
	}
	else{
	   nodePtr = head;
     //fix this section
		while(nodePtr->next && newNode->author < nodePtr->author){
		   nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
}

void Citation::deleteNode(string value){
  //create pointers
  ListNode *previousNode;
  ListNode *nodePtr;

  if(!head)
    return;

  if(head->author == value)
  {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }

  else{
    nodePtr = head;
    while(nodePtr != nullptr && nodePtr->author != value){
      previousNode = nodePtr;
      nodePtr = nodePtr->next;
    }
    //numCitations--;
  }

  if(nodePtr){
    previousNode->next = nodePtr->next;
    delete nodePtr;
  }
}
void Citation::display(){
  //create pointer
  ListNode *nodePtr;
  nodePtr = head;
  cout << "\t\t\t" << "Refrences" << endl;
  while(nodePtr){
  cout << nodePtr->author << "(" << nodePtr->date
       << ") pg " <<nodePtr->pages << endl << "\t" << nodePtr->title << endl << endl;
  nodePtr = nodePtr->next;
  }
}
void Citation::save(){}
void Citation::load(){}
void Citation::printToFile(){}
void Citation::setType(string value){}
void Citation::setAuthor(string value){}
void Citation::setDate(string value){}
void Citation::setTitle(string value){}
void Citation::setPages(string value){}
