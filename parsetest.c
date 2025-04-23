#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "errormsg.h"

extern int yyparse(void);

void parse(string fname) 
{EM_reset(fname);
 if (yyparse() == 0) /* parsing worked */
   fprintf(stderr,"Parsing successful!\n");
 else fprintf(stderr,"Parsing failed\n");
}


int main(int argc, char **argv) {
//  if (argc!=2) {fprintf(stderr,"usage: a.out filename\n"); exit(1);}
 for(int i = 1; i <= 7; i++){
  char filename_buffer[20] = "tests/test"; 
  filename_buffer[10] = i + '0';
  parse(filename_buffer);
  printf("\n");
 }
 
 return 0;
}
