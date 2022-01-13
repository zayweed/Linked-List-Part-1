//template of 'Node.cpp'
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>

using namespace std;

class Node {
  //local variables
  Student* student;
  Node* next;
 public:
  Node(Student* inStudent); //constructor
  Student* getStudent(); //getter for student
  Node* getNext(); //getter for next node
  setNext(Node* inNext); //setter for next student
  ~Node(); //destructor
};

#endif
