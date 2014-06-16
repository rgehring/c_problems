// continuous sum
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  // my dumb way  
  srand(1234);
  int r_five1 = rand() % 5;
  int r_five2 = rand() % 5;
  int r_five3 = rand() % 5;
  int r_five4 = rand() % 5;
  int r_five5 = rand() % 5;
  int r_five6 = rand() % 5;
  int r_five7 = rand() % 5;

  int out = (r_five1+r_five2+r_five3+r_five4+r_five5+r_five6+r_five7 ) % 7;

  // better way-uniform range over base 5 numba
  if (5* r_five1 + r_five2 < 21) return ((5* r_five1 + r_five2 < 21) % 7) ;

}
