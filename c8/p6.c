//paint fill recursion
//

#include <stdlib.h>
#include <stdio.h>

int *img ;
int n;
int m;


void printImg() {
  int i = 0;
  for (i=0;i<n*m; i++) {
    if ( (i % m) == 0) {
      printf("\n");
    }
    printf("%d\t", img[i]);
  }
}

void bootstrapMatrix() {
  n=7;
  srand( 1000 ) ;
  m=7;
  img = (int *)malloc(n*m*sizeof(int));
  int i = 0;
  for (i=0;i<(n*m); i++) {
    img[i] = rand() % 3 ;
  }
  printImg();

}

void colorFill(int color_row, int color_col, int color_color, int cur_color) {
  if ((color_row >= n) || (color_row < 0) || (color_col >= m) || (color_col < 0)) {
    return;
  }
  if (img[(color_row*m) + color_col] != cur_color) {
    return ;
  }
  if (img[(color_row*m) + color_col] == color_color) {
    return ;
  }
  img[(color_row*m) + color_col] = color_color;
  colorFill(color_row-1, color_col, color_color, cur_color);
  colorFill(color_row+1, color_col, color_color, cur_color);
  colorFill(color_row, color_col-1, color_color, cur_color);
  colorFill(color_row, color_col+1, color_color, cur_color);
}

void callColorFill( int color_row, int color_col, int color_color ) {
  int color = img[ (m*color_row) + color_col ];
  colorFill(color_row, color_col, color_color, color);
}

int main() {
  bootstrapMatrix();
  int crow = 1;
  int ccol = 1 ;
  int ccolor = 4 ;
  callColorFill(crow, ccol, ccolor); 
  printf( "\n");
  printImg();
}
