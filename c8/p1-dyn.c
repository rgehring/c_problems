
#include <stdlib.h>
#include <stdio.h>

int fib(int n) {
  int i;
  int last = 0;
  int two_last = 0;
  int val = 0;
  for (i = 0; i< n; i++ ) {
    if (i==0 || i==1 ) {
      val+=i;
    }
    two_last = last ;
    last = val ;
  }
  return (last + two_last);
}


int main() {
  int m = 40;
  printf("%d", fib(m)) ;

}




