#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include "print.h"

struct holder {
  vector<int> vectorHolder;
  list<int> listHolder;
};

int main() {
  std::vector<int> vectorOne = {2,4,6};
  std::list<int> listOne = {1,3,5};
  cout << "Moving vectorOne & listOne as one data structure, here are our starting list & vector respectively: " << endl;
  printList(listOne);
  printVector(vectorOne);

  holder holderA;
  holderA.vectorHolder.swap(vectorOne);
  holderA.listHolder.merge(listOne);
  std::cout << "Put both into struct holderA, print both to show they're in one data structure: " << endl;
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);

  std::unique_ptr<holder> pointer1 = make_unique<holder>(holderA);

  holder holderB {std::move(holderA)};
  std::cout << "Move them to holderB, show original vector & list, now empty..." << endl;
  printList(listOne);
  printVector(vectorOne);
  std::cout << "...and holderA, now empty..." << endl;
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);
  std::cout << "...and holderB: " << endl;
  printList(holderB.listHolder);
  printVector(holderB.vectorHolder);
  std::cout << "" << endl;

  std::cout << "Moving elements individually: holderB's items back to holderA" << endl;
  for (auto i : holderB.vectorHolder){
    holderA.vectorHolder.push_back(i);
  }
  holderB.vectorHolder.clear();
    
  for (auto i : holderB.listHolder) {
    holderA.listHolder.push_back(i);
  }
  holderB.listHolder.clear();
  std::cout << "HolderB's list & vector respectively, now empty:" <<endl;
  printList(holderB.listHolder);
  printVector(holderB.vectorHolder);
  std::cout << "HolderA's list & vector respectively:" <<endl;
  printList(holderA.listHolder);
  printVector(holderA.vectorHolder);
  
  return 0;
} 