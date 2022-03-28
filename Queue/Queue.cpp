#include <iostream>

template <typename T>

class Queue {

  struct Node {
    T data;
    Node* next;
  };

  int size = 0;
  Node* head = NULL;
  Node* tail = NULL;

  public: 
  void Enqueue(T data) {
    Node* newNode = new Node();
    newNode -> data = data;

    if (size == 0) {
      head = newNode;
      tail = newNode;
      size ++;
    } else {
      tail -> next = newNode;
      tail = newNode;
      size ++;
    }
  }

  T Dequeue() {
    T temp = head -> data;

    if (size == 1) {
      head = NULL;
      tail = NULL;
      size --;
    } else if (size > 1) {
      head = head -> next;
      size --;
    }
    return temp;
  }

  bool isEmpty() {
    if (size == 0) {
      return true;
    }
    return false;
  }
};
