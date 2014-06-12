#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int n;

void printAllCombos(int left, int right, char* str, int strlen ) {
  char *temp = (char *)malloc(2*n*sizeof(char)+1);
  strcpy(temp, str);

  if (left > 0) {
    temp[strlen]='(' ;
    printAllCombos(left -1, right, temp, strlen+1 );
  }
  if ((right > left) && right > 0) {
    temp[strlen]=')' ;
    printAllCombos(left, right -1, temp, strlen+1 );
  }
  if ((left == 0) && (right == 0)) {
    temp[strlen] = '\0';
    printf("%s\n", temp);
  }
}



int main() {
  //print all open / close combos of N parens
  int n = 4;
  char *parray = (char *)malloc(2*n*sizeof(char)+1);
  printf("\n");
  printAllCombos( n, n, parray, 0);

}
