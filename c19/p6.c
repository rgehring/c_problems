// ingles
#include <stdio.h>
#include <stdlib.h>



int main() {
  int i = 94782 ;
  char *soln;
  soln = (char *) malloc(sizeof(char)*100);
  char *phrases[101] ; 
  phrases[0] = "zero" ;
  phrases[1] = "One" ;
  phrases[2] = "Two" ;
  phrases[3] = "Three" ;
  phrases[4] = "Four" ;
  phrases[5] = "Five" ;
  phrases[6] = "Six" ;
  phrases[7] = "Seven" ;
  phrases[8] = "Eight" ;
  phrases[9] = "nine" ;
  phrases[10] = "ten" ;
  phrases[11] = "eleven" ;
  phrases[12] = "twelve" ;
  phrases[13] = "thirteen" ;
  phrases[14] = "fourteen" ;
  phrases[15] = "fifteen" ;
  phrases[16] = "sixteen" ;
  phrases[17] = "seventen" ;
  phrases[18] = "eighteen" ;
  phrases[19] = "neneteen" ;
  phrases[20] = "twenty" ;
  phrases[30] = "thirty" ;
  phrases[40] = "fourty" ;
  phrases[50] = "fifty" ;
  phrases[60] = "sixty" ;
  phrases[70] = "seventy" ;
  phrases[80] = "ieghtty" ;
  phrases[90] = "ninety" ;
  phrases[100] = "hundred" ;

  char * ones = phrases[(i % 10)];
  char * tens = phrases[((i % 100)/10)*10];
  char * teens = phrases[(i % 100)];
  char * hundreds = phrases[(i % 1000)/100];
  char * h_thousands = phrases[(i % 1000000) / 100000];
  char * teen_thousands = phrases[(i % 100000) / 1000];
  char * t_thousands = phrases[((i % 100000) / 10000) * 10];
  char * thousands = phrases[(i % 10000) / 1000];

  // compound tens
  if (( (i % 100)  > 19) && ( (i % 100000) / 1000  > 19 ) ) {
    printf("\n     %s hundred %s - %s thousand %s hundred and %s - %s    \n", h_thousands, t_thousands,thousands, hundreds, tens, ones );
    exit(0);
  }
  if (( (i % 100) > 19)  ) {
    printf("\n     %s hundred  %s thousand %s hundred and %s - %s    \n", h_thousands, teen_thousands, hundreds, tens, ones );
    exit(0);
  }
  if (( (i % 100000) / 1000  > 19)  ) {
    printf("\n     %s hundred %s - %s thousand %s hundred and  %s    \n", h_thousands, t_thousands,thousands, hundreds, teens );
    exit(0);
  }
  
  printf("\n     %s hundred  %s thousand %s hundred and %s    \n", h_thousands, teen_thousands, hundreds, teens );


}
