#include <iostream>
#include <vector>
#include <list>
#include "print.h"

struct holder {
  vector<int> vectorHolder;
  list<int> listHolder;
};

int main() {
  std::vector<int> vectorOne = {2,4,6};
  std::list<int> listOne = {1,3,5};
  cout << "Start with vectorOne & listOne, we'll move them as one data structure: " << endl;
  printList(listOne);
  printVector(vectorOne);

  holder holderA;
  holderA.vectorHolder.swap(vectorOne);
  holderA.listHolder.merge(listOne);
  cout << "Put both into struct holderA, print original vector and list to show they're one data structure: " << endl;
  printList(listOne);
  printVector(vectorOne);
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);

  holder holderB {std::move(holderA)};
  cout << "Move them to holderB, show original vector & list and holderA to show they're moved as one data structure: " << endl;
  printList(listOne);
  printVector(vectorOne);
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);
  printList(holderB.listHolder);
  printVector(holderB.vectorHolder);

  std::vector<int> vectorTwo = {2,4,6};
  std::list<int> listTwo = {1,3,5};
  cout << "Start with vectorTwo & listTwo, we'll move them element-by-element: " << endl;
  printList(listTwo);
  printVector(vectorTwo);

  return 0;
} 