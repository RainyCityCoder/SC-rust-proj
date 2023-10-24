#include <iostream>
#include <vector>
#include <list>
#include "print.h"
using namespace std;

struct holder {
  vector<int> vectorHolder;
  list<int> listHolder;
};

int main() {
  vector<int> vectorOne = {2,4,6};
  list<int> listOne = {1,3,5};
  printList(listOne);
  printVector(vectorOne);

  holder holderA;
  holderA.vectorHolder.swap(vectorOne);
  holderA.listHolder.merge(listOne);
  printList(listOne);
  printVector(vectorOne);
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);

  holder holderB {move(holderA)};
  printList(listOne);
  printVector(vectorOne);
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);
  printList(holderB.listHolder);
  printVector(holderB.vectorHolder);


  return 0;
}