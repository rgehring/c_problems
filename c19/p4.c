// max 
#include <stdio.h>
#include <stdlib.h>

int msb(unsigned int x) {
  x |= x >> 16;
  x |= x >> 8;
  x |= x >> 4;
  x |= x >> 2;
  x |= x >> 1;
  x ^= x >> 1; 
  return x ;
}

int max(int a, int b ) {
  //bit comparison - do XOR and find the most significant bit then return  (that and a) OR (that and b)
  unsigned int m = msb(a^b);
  return ((m & a) | (m & b)) ;

}

int main() {
  unsigned int  a = 63;
  unsigned int  b = 68;
  printf("max: %d ", max(a, b));
}
