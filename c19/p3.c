// trailing zeroes in n factorial
#include <stdio.h>
#include <stdlib.h>

int tzero(int a ) {
  int cnt_fives =0;
  int i;
  for (i=5; i <= a; i*=5) {
    cnt_fives+=(a/i) ;
  }
  return cnt_fives ;
}

int main() {
  int  a = 63;
  printf("a: %d, ", tzero(a));
}
