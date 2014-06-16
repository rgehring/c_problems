// check if tic tac toe achieved
#include <stdio.h>
#include <stdlib.h>

int hasWon(int * board) {
  int i, j, p1ck, p2ck;
  //check rows
  for (i=0; i <3 ; i++) {
    p1ck = 0;
    p2ck = 0 ;
    for (j=0; j <3 ; j++) {
      if (board[3*i+j] == 1) {
        p1ck += board[3*i+j];
      }
      if (board[3*i+j] == -1) {
        p2ck += board[3*i+j];
      }
    }
    if (p1ck == 3) return 1 ;
    if (p2ck == -3) return 1 ;
  }
  // check cols
  for (j=0; j <3 ; j++) {
    p1ck = 0;
    p2ck = 0 ;
    for (i=0; i <3 ; i++) {
      if (board[3*i+j] == 1) {
        p1ck += board[3*i+j];
      }
      if (board[3*i+j] == -1) {
        p2ck += board[3*i+j];
      }
    }
    if (p1ck == 3) return 1 ;
    if (p2ck == -3) return 1 ;
  }
  // check diags
  p1ck = 0;
  p2ck = 0 ;
  for (j=0; j <3 ; j++) {
    if (board[3*j+j] == 1) {
      p1ck += board[3*j+j];
    }
    if (board[3*j+j] == -1) {
      p2ck += board[3*j+j];
    }
  }
  if (p1ck == 3) return 1 ;
  if (p2ck == -3) return 1 ;
  
  p1ck = 0;
  p2ck = 0 ;
  for (j=0; j <3 ; j++) {
    if (board[3*j+(2-j)] == 1) {
      p1ck += board[3*j+2-j];
    }
    if (board[3*j+(2-j)] == -1) {
      p2ck += board[3*j+2-j];
    }
  }
  if (p1ck == 3) return 1 ;
  if (p2ck == -3) return 1 ;
  return 0 ;
}



int main() {
  int * board1 ;
  board1 = (int *)calloc(9, sizeof(int));
  int * board2 ;
  board2 = (int *)calloc(9, sizeof(int));
  int * board3 ;
  board3 = (int *)calloc(9, sizeof(int));
  int * board4 ;
  board4 = (int *)calloc(9, sizeof(int));
 
  board1[0] = 1 ;
  board1[1] = 1 ;
  board1[2] = 1 ;
  board2[0] = 1 ;
  board2[3] = 1 ;
  board2[6] = 1 ;
  board3[2] = 1 ;
  board3[4] = 1 ;
  board3[6] = 1 ;


  printf("\ndid they win: %d \n", hasWon(board1));
  printf("\ndid they win: %d \n", hasWon(board2));
  printf("\ndid they win: %d \n", hasWon(board3));
  printf("\ndid they win: %d \n", hasWon(board4));
}
