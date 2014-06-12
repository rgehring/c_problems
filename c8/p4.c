
#include <stdlib.h>
#include <stdio.h>


int num_perms ;
char *all_perms ;
int fullstrlen;
int curr_idx  ;
char *temp ;

void perm(char prefix[],  char mystring[] ) {
  int i, j;
  // fill in output array if no chars remain in input array and return
  if (mystring[0] == '\0') {
    for (i=0; i< fullstrlen; i++ ) {
      all_perms[curr_idx*sizeof(char)*fullstrlen+i ] = prefix[i];
      if (prefix[i] == '\0') {
        break ;
      }
    }
    curr_idx++;
    return; 
  }
  // get the number of chars in prefix
  int prefixlen =0;
  for (i=0; i< fullstrlen; i++ ) {
    if (prefix[i]=='\0') {
      prefixlen=i+1;
      break;
    }
  }

  char *remaining = (char *)malloc(sizeof(char)*fullstrlen  );
 
  for (i=0; i< fullstrlen; i++ ) {
    if (mystring[i] == '\0') {
      break;
    }
    
    for (j=0; j < fullstrlen; j++) {
      if (j<=i) {
        remaining[j] = mystring[j];
      } else {
        remaining[j-1] = mystring[j];
      }
      if (mystring[j] == '\0') {
        break;
      }
    }
    prefix[prefixlen -1 ]=mystring[i];
    prefix[prefixlen  ]='\0';
    perm(prefix, remaining);
  }


}


int main() {
  char mystring[] = "ABCD";
  fullstrlen = (sizeof(mystring ) / sizeof(char)) ;
  int i ;
  
  num_perms = 1 ;
  
  for (i = 1; i < fullstrlen; i++) {
    num_perms = num_perms * i ;
  }

  all_perms = (char *)malloc(num_perms*sizeof(char)*fullstrlen  );
  temp = (char *)malloc(sizeof(char)*fullstrlen  );
  temp[0] = '\0' ;
  for (i = 0; i < num_perms; i++) {
    all_perms[i*sizeof(char)*fullstrlen ] = '\0' ;
  }
   
  curr_idx = 0 ;
  perm( temp ,mystring);
  
  for (i = 0; i < num_perms; i++) {
    printf("%s\n", &all_perms[i*sizeof(char)*fullstrlen ]) ;
  }

}




