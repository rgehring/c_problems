// m from n
#include <stdio.h>
#include <stdlib.h>



int main() {
  int *array = (int *)malloc(52 * sizeof(int)) ;
  int *out = (int *)calloc(52 , sizeof(int)) ;
  int i;
  int m = 17 ;
  srand(123);
  printf("\n");
  for (i =0; i < 52; i++) {
    array[i] = i ;
    printf("%d ", array[i]);
  }
  printf("\n");
  // swap the random element with the first one rather than deleting.
  int sindex = 0;
  int temp ;
  for (i =0; i < m; i++) {
    int arIdx = (rand() %  (52 - sindex)) + sindex ;
    out[ i ] = array[arIdx];
    temp = array[arIdx];
    array[arIdx] = array[sindex] ;
    array[sindex] = temp ;
    sindex++;
  }
  
  printf("\n naive");
  for (i =0; i < 52; i++) {
    printf("%d ", out[i]);
  }



}
