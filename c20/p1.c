// bit sum
#include <stdio.h>
#include <stdlib.h>


int addEm(int a, int b) {
  if (b==0) return a;
  int sum = a ^ b ;
  int carries = (a &b )  << 1 ;
  return addEm(sum, carries);
}



int carries(int a, int b) {
  return ( (a & b) << 1) ;
}

int main() {
  unsigned int a=2;
  unsigned int b=7;
  
  printf("\n%d\n", addEm(a, b));
}
