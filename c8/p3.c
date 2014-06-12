
#include <stdlib.h>
#include <stdio.h>


int num_subsets ;
char *all_subsets ;
int fullstrlen;
int curr_idx  ;
char *temp ;

void ss(char prefix[],  char mystring[] ) {
  int i;

  if (mystring[0] == '\0') {
    for (i=0; i< fullstrlen; i++ ) {
      all_subsets[curr_idx*sizeof(char)*fullstrlen+i ] = prefix[i];
      if (prefix[i] == '\0') {
        break ;
      }
    }
    curr_idx++;
    return; 
  }
  
  for (i=0; i< fullstrlen; i++ ) {
    
    temp[i] = prefix[i];
    if (prefix[i] == '\0') {
      prefix[i] = mystring[0] ;
      prefix[i+1] = '\0' ;
      ss(  prefix,   &mystring[1] ) ;
      temp[i] = '\0' ;
      ss(  prefix,  &mystring[1] ) ;
      break;
    }
  }


}


int main() {
  char mystring[] = "ABCD";
  fullstrlen = sizeof(mystring ) / sizeof(char);
  int i ;
  
  num_subsets = 1 ;
  
  for (i = 0; i < fullstrlen; i++) {
    num_subsets = num_subsets*2 ;
  }

  all_subsets = (char *)malloc(num_subsets*sizeof(char)*fullstrlen  );
  temp = (char *)malloc(sizeof(char)*fullstrlen  );
  temp[0] = '\0' ;
  for (i = 0; i < num_subsets; i++) {
    all_subsets[i*sizeof(char)*fullstrlen ] = '\0' ;
  }
   
  curr_idx = 0 ;
  ss( temp ,mystring);
  
  for (i = 0; i < num_subsets; i++) {
    printf("%s\n", &all_subsets[i*sizeof(char)*fullstrlen ]) ;
  }

}




