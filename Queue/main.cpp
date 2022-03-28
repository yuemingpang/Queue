#include "Queue.cpp"
#include <iostream>
using namespace std;


int main() {
  //do something!!
  Queue<int>* q = new Queue<int>();
  q -> Enqueue(3);
  q -> Enqueue(6);
  q -> Dequeue();
  q -> Dequeue();
  cout<< q -> isEmpty();

}