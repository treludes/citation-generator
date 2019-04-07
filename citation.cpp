#include "citation.h"
//**************************************************
// constructor								                     *
// 												                         *
//**************************************************
Citation::Citation(){
  //Make sure head starts out pointing to NULL
  head = nullptr;
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

void Citation::insertNode(Citation value){
  //create pointers
  ListNode *newNode;
  ListNode *nodePtr;

  //create new node
  newNode = new ListNode;
  newNode->value = value;
  newNode->next = nullptr;

  //check for head
  if(!head){
	   head = newNode;
	}
	else{
	   nodePtr = head;
     //fix this section
		while(nodePtr->next){
		   nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
}

void Citation::deleteNode(Citation value){
  //create pointers
  ListNode *previousNode;
  ListNode *nodePtr;

  if(!head)
    return;

  if(head->value == value)
  {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }

  else{
    nodePtr = head;
    while(nodePtr != nullptr && nodePtr->value != value){
      previousNode = nodePtr;
      nodePtr = nodePtr->next;
    }
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
  while(nodePtr){
  cout << nodePtr->value << endl;
  nodePtr = nodePtr->next;
  }
}
void Citation::save(){

}
void Citation::load(){

}
void Citation::printToFile(){

}
void Citation::setType(){

}
void Citation::setAuthor(){

}
void Citation::setDate(){

}
void Citation::setTitle(){

}
void Citation::setPages(){

}
