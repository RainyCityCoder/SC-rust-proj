#include <stdio.h>

int main () {
  int a[5] = {0,0,0};
  int * p = &a[0];

  while (a[0] < 3) {
    printf("%d.%d%d\n", a[0], a[1], a[2]);
    ++*p;
  }
  ++p;
  while (a[1] < 1) {
    printf("%d.%d%d\n", a[0], a[1], a[2]);
    ++*p;
  }
  ++p;
  while (a[2] < 4) {
    printf("%d.%d%d\n", a[0], a[1], a[2]);
    ++*p;
  }
  p=p-2;
  while (a[0] > 0) {
    printf("%d.%d%d\n", a[0], a[1], a[2]);
    --*p;
  }
  ++p;
  while (a[1] > 0) {
    printf("%d.%d%d\n", a[0], a[1], a[2]);
    --*p;
  }
  ++p;
  while (a[2] > 0) {
    printf("%d.%d%d\n", a[0], a[1], a[2]);
    --*p;
  }
  printf("%d.%d%d\n", a[0], a[1], a[2]);

  return 0;
}