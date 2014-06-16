// all pairs of ints that sum to a value
#include <stdio.h>
#include <stdlib.h>


int main() {
  int coolint[10] = {1 ,  3, 4 , 9, 19, 21, 22, 2, 29, 111};
  int target = 5 ;
  int i;
  // hash table way --- for each element < target, put into hash table the element needed to sum to target. if its there, pairs ++ .
  // linear in time, linear in space.
  // an n2 time, constant space alg is to search array for any matches if ele < target.
  
  for (i=0; i< 10; i++) {
    if (hashtable_get(coolint[i] ) != -1 ) {
      printf("%d, %d", target - coolint[i] , coolint[i]) ;
    }
    else {
      hashtable_add(target - coolint[i] );
    }
  }
}
