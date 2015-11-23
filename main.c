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
  // logical_and() example
  printf("logical_and({false, false, false}): %d\n", logical_and(allFalse));
  printf("logical_and({true, false, false}): %d\n", logical_and(oneTrue));
  printf("logical_and({true, true, false}): %d\n", logical_and(someTrue));
  printf("logical_and({true, true, true}): %d\n\n", logical_and(allTrue));

  // AND example
  printf("false AND false AND false: %d\n", false AND false AND false);
  printf("true AND false AND false: %d\n", true AND false AND false);
  printf("true AND true AND false: %d\n", true AND true AND false);
  printf("true AND true AND true: %d\n\n\n", true AND true AND true);


  printf("OR:\n");
  // logical_or example
  printf("logical_or(allFalse): %d\n", logical_or(allFalse));
  printf("logical_or(oneTrue): %d\n", logical_or(oneTrue));
  printf("logical_or(someTrue): %d\n\n", logical_or(someTrue));

  // OR example
  printf("false OR false OR false: %d\n", false OR false OR false);
  printf("true OR false OR false: %d\n", true OR false OR false);
  printf("true OR true OR false: %d\n\n\n", true OR true OR false);


  printf("XOR:\n");
  // formalXorList example
  printf("logical_xor(allFalse): %d\n", logical_xor(allFalse));
  printf("logical_xor(oneTrue): %d\n", logical_xor(oneTrue));
  printf("logical_xor(someTrue): %d\n", logical_xor(someTrue));
  printf("logical_xor(allTrue): %d\n\n", logical_xor(allTrue));


  printf("Strict XOR:\n");
  // logical_xor example
  printf("logical_strict_xor(allFalse): %d\n", logical_strict_xor(allFalse));
  printf("logical_strict_xor(oneTrue): %d\n", logical_strict_xor(oneTrue));
  printf("logical_strict_xor(someTrue): %d\n\n", logical_strict_xor(someTrue));

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
