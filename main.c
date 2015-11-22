#include <stdio.h>
#include <stdbool.h>
#include "logicalc.h"  /* Include the header here, to obtain the function declaration */

int main() {
  // XOR example
  printf("xor(3, false, false, false): %d\n", xor(3, false, false, false));
  printf("xor(3, true, false, false): %d\n", xor(3, true, false, false));
  printf("xor(3, true, true, false): %d\n", xor(3, true, true, false));
  return 0;
}
