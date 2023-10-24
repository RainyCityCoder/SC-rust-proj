#include <iostream>
#include <vector>
#include <list>
#include "print.h"
using namespace std;

int main () {
  vector<int> vectorOne = {2,4,6};
  list<int> listOne = {1,3,5};
  printList(listOne);
  printVector(vectorOne);
  
  // for (int i = 0; i < vectorOne.size(); i++) {

  // }
}