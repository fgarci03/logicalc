#include <stdbool.h>
#include "logicalc.h"

// todo fgarci03: notice how most functions are the same? Implement an abstract method to be used by all

// AND
bool logical_and(bool booleanList[]) {
  int i;
  int listIterator = sizeof(booleanList) - 1;
  bool result = true;

  for (i = 0; i < listIterator; i++) {
    if (!booleanList[i]) {
      result = false;
      break;
    }
  }

  return result;
}

// OR
bool logical_or(bool booleanList[]) {
  int i;
  int listIterator = sizeof(booleanList) - 1;
  bool result = false;


  for (i = 0; i < listIterator; i++) {
    if (booleanList[i]) {
      result = true;
      break;
    }
  }

  return result;
}

// XOR
bool logical_xor(bool booleanList[]) {
  bool result = false;

  int i;
  int numOfTruths = 0;
  int listIterator = sizeof(booleanList) - 1;

  for (i = 0; i < listIterator; i++) {
    if (booleanList[i]) {
      numOfTruths++;
    }
  }

  if (numOfTruths > 0 && numOfTruths % 2) {
    result = true;
  }

  return result;
}

// formal XOR
bool logical_strict_xor(bool booleanList[]) {
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
