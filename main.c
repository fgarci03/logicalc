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

  // and example
  printf("and(3, false, false, false): %d\n", and(3, false, false, false));
  printf("and(3, true, false, false): %d\n", and(3, true, false, false));
  printf("and(3, true, true, false): %d\n", and(3, true, true, false));
  printf("and(3, true, true, false): %d\n\n", and(3, true, true, true));

  // andList example
  printf("andList({false, false, false}): %d\n", andList(allFalse));
  printf("andList({true, false, false}): %d\n", andList(oneTrue));
  printf("andList({true, true, false}): %d\n", andList(someTrue));
  printf("andList({true, true, true}): %d\n\n", andList(allTrue));

  // AND example
  printf("false AND false AND false: %d\n", false AND false AND false);
  printf("true AND false AND false: %d\n", true AND false AND false);
  printf("true AND true AND false: %d\n", true AND true AND false);
  printf("true AND true AND true: %d\n\n\n", true AND true AND true);


  printf("OR:\n");

  // OR example
  printf("or(3, false, false, false): %d\n", or(3, false, false, false));
  printf("or(3, true, false, false): %d\n", or(3, true, false, false));
  printf("or(3, true, true, false): %d\n\n", or(3, true, true, false));

  // orList example
  printf("orList(allFalse): %d\n", orList(allFalse));
  printf("orList(oneTrue): %d\n", orList(oneTrue));
  printf("orList(someTrue): %d\n\n", orList(someTrue));

  // OR example
  printf("false OR false OR false: %d\n", false OR false OR false);
  printf("true OR false OR false: %d\n", true OR false OR false);
  printf("true OR true OR false: %d\n\n\n", true OR true OR false);


  printf("XOR:\n");

  // XOR example
  printf("xor(3, false, false, false): %d\n", xor(3, false, false, false));
  printf("xor(3, true, false, false): %d\n", xor(3, true, false, false));
  printf("xor(3, true, true, false): %d\n\n", xor(3, true, true, false));

  // xorList example
  printf("xorList(allFalse): %d\n", xorList(allFalse));
  printf("xorList(oneTrue): %d\n", xorList(oneTrue));
  printf("xorList(someTrue): %d\n\n", xorList(someTrue));


  printf("formalXor:\n");

  // formalXor example
  printf("formalXor(3, false, false, false): %d\n", formalXor(3, false, false, false));
  printf("formalXor(3, true, false, false): %d\n", formalXor(3, true, false, false));
  printf("formalXor(3, true, true, false): %d\n", formalXor(3, true, true, false));
  printf("formalXor(3, true, true, true): %d\n\n", formalXor(3, true, true, true));

  // formalXorList example
  printf("formalXorList(allFalse): %d\n", formalXorList(allFalse));
  printf("formalXorList(oneTrue): %d\n", formalXorList(oneTrue));
  printf("formalXorList(someTrue): %d\n", formalXorList(someTrue));
  printf("formalXorList(allTrue): %d\n\n", formalXorList(allTrue));

  // XOR example
  printf("true XOR false: %d\n", true XOR false);
  printf("false XOR false XOR false: %d\n", false XOR false XOR false);
  printf("true XOR false XOR false: %d\n", true XOR false XOR false);
  printf("true XOR true XOR false: %d\n", true XOR true XOR false);
  printf("true XOR true XOR true XOR false: %d\n\n\n", true XOR true XOR true XOR false);


  printf("NOT:\n");

  // NOT example
  printf("NOT false: %d\n", NOT false);
  printf("NOT true: %d\n\n\n", NOT true);
  return 0;
}
