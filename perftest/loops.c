#include <stdio.h>
#include <stdlib.h>

int main() {
  int i,j;
  static int x[16000][16000];
  for (i = 0; i < 16000; i++) {
    for (j = 0; j < 16000; j++) {
      x[j][i] = i + j*i; }
  }
}
