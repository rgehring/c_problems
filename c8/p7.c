//changemaker
//

#include <stdlib.h>
#include <stdio.h>


void makechange(int q, int d, int n, int p,  float amt, char denom ) {
  if (denom == 'q' ) {
    while (amt >= 0.25) {
      makechange(q,d,n,p,amt, 'd');
      amt = amt - 0.25;
      q++ ;
    }
  }
  if ( denom == 'd' ) {
    while (amt >= 0.10) {
      makechange(q,d,n,p,amt, 'n'); 
      amt = amt - 0.10;
      d++ ;
    }
  }
  if (denom == 'n' ) {
    while (amt >= 0.05) {
      makechange(q,d,n,p,amt, 'p');
      amt = amt - 0.05;
      n++ ;
    }
  }
  if (denom == 'p' ) {
    while (amt >= 0.01) {
      amt = amt - 0.01;
      p++ ;
    }
  }
  if (amt<=0.0001) {
    printf("Q: %d, D: %d, N: %d, P: %d \n", q,d,n,p);
  }

}


int main() {
  
  makechange(0 , 0 , 0 , 0, 0.75, 'q');
}

