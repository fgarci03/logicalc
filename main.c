#include <stdio.h>
#include <stdbool.h>
#include "src/logicalc.h"

int main() {
  bool allFalse[3] = {false, false, false};
  bool oneTrue[3]  = {true, false, false};
  bool someTrue[3] = {true, true, false};
  bool allTrue[3]  = {true, true, true};

  printf("Variables:\n");
  printf("bool allFalse[3] = {false, false, false};\n");
  printf("bool oneTrue[3]  = {true, false, false};\n");
  printf("bool someTrue[3] = {true, true, false};\n");
  printf("bool allTrue[3]  = {true, true, true};\n\n\n");

  printf("AND:\n");

  // AND example
  printf("and(3, false, false, false): %d\n", and(3, false, false, false));
  printf("and(3, true, false, false): %d\n", and(3, true, false, false));
  printf("and(3, true, true, false): %d\n", and(3, true, true, false));
  printf("and(3, true, true, false): %d\n\n", and(3, true, true, true));

  // andList example
  printf("andList({false, false, false}): %d\n", andList(allFalse));
  printf("andList({true, false, false}): %d\n", andList(oneTrue));
  printf("andList({true, true, false}): %d\n", andList(someTrue));
  printf("andList({true, true, true}): %d\n\n\n", andList(allTrue));


  printf("OR:\n");

  // OR example
  printf("or(3, false, false, false): %d\n", or(3, false, false, false));
  printf("or(3, true, false, false): %d\n", or(3, true, false, false));
  printf("or(3, true, true, false): %d\n\n", or(3, true, true, false));

  // orList example
  printf("orList(allFalse): %d\n", orList(allFalse));
  printf("orList(oneTrue): %d\n", orList(oneTrue));
  printf("orList(someTrue): %d\n\n\n", orList(someTrue));


  printf("XOR:\n");

  // XOR example
  printf("xor(3, false, false, false): %d\n", xor(3, false, false, false));
  printf("xor(3, true, false, false): %d\n", xor(3, true, false, false));
  printf("xor(3, true, true, false): %d\n\n", xor(3, true, true, false));

  // xorList example
  printf("xorList(allFalse): %d\n", xorList(allFalse));
  printf("xorList(oneTrue): %d\n", xorList(oneTrue));
  printf("xorList(someTrue): %d\n\n\n", xorList(someTrue));
  return 0;
}
