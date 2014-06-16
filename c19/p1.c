// swap 2 vars in place
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  *b = *b - *a;
  *a = *a + *b ;
  *b = -(*b - *a) ; 
}

int main() {
  int * a ;
  int * b ; 
  a = (int *)malloc(sizeof(int));
  b = (int *)malloc(sizeof(int));
  *a = 1 ;
  *b = 2 ;
  swap(a, b) ;
  printf("a: %d, b: %d", *a , *b);
}
