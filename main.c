//#include "hell_c.h"
#include <stdio.h>
#include <stdlib.h>
/*
USEFLOAT ioputexample THE HELL
GO
  NOSTR ioputs SQUARED1 30 SQUARED2 OMG
  WHAT IN THE "Enter your name: " HELL OMG
  
  SUCKS THE PLS GUDI THE ioputs COMA HOWBIGBALLS THE ioputs HELL IN COMA stdin HELL TWOX NOPE HELL GO 
  
    ERRR THE "No Input" HELL OMG
  BRRRRRR

  WHAT IN THE "Hi %s" COMA ioputs HELL OMG 
  HAVEBACK 0 OMG
BRRRRRR
*/
int ioput() {
  char ioputs[30];
  printf("Enter your name: ");
  if ( fgets(ioputs, sizeof (ioputs), stdin) == NULL ) {
    perror ("No Input");
  }

  printf("Hi %s", ioputs);
  return 0;
}

int main (int argc, char **argv) {
  ioput();
  
  return 0;
}

/*
main
GO
  ioputexample THE HELL OMG
  HAVEBACK 0 OMG
BRRRRRR
*/