#include <iostream>
int *doubleCapacity(int *list, int size) {
  static int dlist[20000];
  int i;
  for (i = 0; i < size; i++) {
    dlist[i] = list[i];
    dlist[size+i] = 0;
  }
  return dlist;
}

int main() {
  int list[5]={1,2,3,4,5};
  int *newlist = doubleCapacity(list,5);
  for(int i=0;i<2*5;i++)
    printf("%d ",*(newlist+i));
}
