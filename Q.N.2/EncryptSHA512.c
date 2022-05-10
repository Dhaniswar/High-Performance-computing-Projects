#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <crypt.h>
#include <unistd.h>
/******************************************************************************
  This program is used to set challenges for password cracking programs. 
  Encrypts using SHA-512.
  
  Compile with:
    gcc EncryptSHA512.c -o EncryptSHA512 -lcrypt
    
  To encrypt the password "pass":
    ./EncryptSHA512 pass
    
  It doesn't do any checking, just does the job or fails ungracefully.

  
******************************************************************************/

#define SALT "$6$AS$"

int main(int argc, char *argv[]){
  
  printf("%s\n", crypt(argv[1], SALT));

  return 0;
}
