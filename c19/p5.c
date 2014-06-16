// mastermind
#include <stdio.h>
#include <stdlib.h>

int hits ;
int phits ;

void solve(char guess_color, int guess_slot, char* solution ) {
  if (solution[guess_slot] == guess_color) {
    hits++;
    phits--;
  }
  int i ;
  for (i=0; i<4; i++) {
    if (solution[i] == guess_color) {
      phits++;
    }
  }

}

int main() {
  char  col = 'R';
  int slot = 3 ;
  char soln[4] = "RGBY";
  printf("\n soln: %s  guess: %c %d \n", soln, col , slot );
  solve(col, slot, soln);
  printf("\n hits %d  phits %d  \n", hits, phits );
}
