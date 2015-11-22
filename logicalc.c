#include <stdarg.h>
#include <stdbool.h>
#include "logicalc.h"

bool xor(int numOfElements, ...) {
  bool result = false;

  int i;
  int numOfTruths = 0;

  va_list args;
  va_start(args, numOfElements);

  for (i = 0; i < numOfElements; i++) {
    if (va_arg(args, int)) {
      numOfTruths++;
    }
    if (numOfTruths > 1) {
      break;
    }
  }
  va_end(args);

  if (numOfTruths == 1) {
    result = true;
  }

  return result;
}

bool xorList(bool booleanList[]) {
  bool result = false;

  int i;
  int numOfTruths = 0;
  int listIterator = sizeof(booleanList) - 1;

  for (i = 0; i < listIterator; i++) {
    if (booleanList[i]) {
      numOfTruths++;
    }
    if (numOfTruths > 1) {
      break;
    }
  }

  if (numOfTruths == 1) {
    result = true;
  }

  return result;
}
