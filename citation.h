#ifndef CITATION_H
#define CITATION_H

Class Citation{
private:
  int type;
  std::string author;
  int date;
  std::string title;
  int pages;

  static int numCitations;

  struct ListNode{
    struct ListNode *next;
    struct ListNode *previous;
    Citation value;
  };

  ListNode *head;

public:
  Citation();
  ~Citation();
  void insertNode();
  void deleteNode();
  void display() const;
  void save() const;
  void load() const;
  void printToFile() const;
  void setType();
  void setAuthor();
  void setDate();
  void setTitle();
  void setPages();
};
