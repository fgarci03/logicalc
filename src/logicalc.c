#include <stdbool.h>
#include "logicalc.h"

static bool logic_iterator(bool initial_result, bool condition_matcher, bool boolean_list[], unsigned short array_size) {
  unsigned short i;
  bool result = initial_result;

  for (i = 0u; i < array_size; i++) {
    if (condition_matcher ? boolean_list[i] : !boolean_list[i]) {
      result = !initial_result;
      break;
    }
  }

  return result;
}

bool logical_and(unsigned short array_size, bool boolean_list[]) {
  return logic_iterator(true, false, boolean_list, array_size);
}

bool logical_or(unsigned short array_size, bool boolean_list[]) {
  return logic_iterator(false, true, boolean_list, array_size);
}

bool logical_xor(unsigned short array_size, bool boolean_list[]) {
  bool result = false;

  unsigned short i;
  unsigned short numOfTruths = 0u;

  for (i = 0u; i < array_size; i++) {
    if (boolean_list[i]) {
      numOfTruths++;
    }
  }

  if (numOfTruths > 0u && numOfTruths % 2u) {
    result = true;
  }

  return result;
}

bool logical_strict_xor(unsigned short array_size, bool boolean_list[]) {
  bool result = false;

  unsigned short i;
  unsigned short numOfTruths = 0u;

  for (i = 0u; i < array_size; i++) {
    if (boolean_list[i]) {
      numOfTruths++;
    }
    if (numOfTruths > 1u) {
      break;
    }
  }

  if (numOfTruths == 1u) {
    result = true;
  }

  return result;
}
