// continuous sum
#include <stdio.h>
#include <stdlib.h>



int main() {
  int data[10] = {1, -3, 5, 2, 4, -6, -8, 1, -8, 2};
  int i, total;
  total = data[0];
  int champtotal = total ;

  // increment right counter
  for (i =1; i < 10; i++) {
    total = total + data[i] ;
    if (champtotal< total) {
      champtotal = total ;
    }
    if (total < 0) {
      total = 0 ; 
    }
  }  
  printf("\n%d\n", champtotal);

}
