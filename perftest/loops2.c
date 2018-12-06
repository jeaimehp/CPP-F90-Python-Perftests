#include <stdio.h>
#include <stdlib.h>

main() {
  int i,j;
  static int x[16000][16000];
  for (j = 0; j < 16000; j++) {
     for (i = 0; i < 16000; i++) {
       x[j][i] = i + j*i; }
   }
}
