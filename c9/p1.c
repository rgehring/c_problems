//sorted array merge

#include <stdlib.h> 
#include <stdio.h> 



int a[10] = {2,3,5,7,0,0,0, 0, 0,0} ;
int b[3] = {1,4,6};

void merge_in_place(int big[], int small[], int alen, int blen) {
  int i = 0 ; 
  int j = 0 ;
  while 1 {
    if (i == alen || j == blen) {
      break
    }
    if (a[i] > b[j] ) {
      // move array right and put b in place  
    }
  }
}


int main() {
  int i;
  printf( "\n"  );
  for ( i=0;  i < (sizeof(a) / sizeof(a[0]) ) ; i++ ) {
    printf("%d", a[i] );
  }
  merge_in_place(a, b, sizeof(a)/sizeof(a[0], sizeof(b)/sizeof(b[0]) )) ;
  for ( i=0;  i < (sizeof(a) / sizeof(a[0]) ) ; i++ ) {
    printf("%d", a[i] );
  }


}
