//-----------------------------------------------------------------------------
// CommandLineArguments.c
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
   int i;
   printf("agrc = %d\n", argc);
   
   for(i = 0; i<argc; i++ ){
      printf("%s\n", argv[i]);
   }
   return EXIT_SUCCESS;
}
