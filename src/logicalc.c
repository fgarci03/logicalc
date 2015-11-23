#include <stdbool.h>
#include "logicalc.h"

static bool logical_iterator(bool initial_result, bool condition_matcher, bool* boolean_list, unsigned short array_size) {
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

static unsigned short logical_truth_counter(bool break_on_condition, unsigned short condition_matcher_number, bool* boolean_list, unsigned short array_size) {
  unsigned short i;
  unsigned short num_of_truths = 0u;

  for (i = 0u; i < array_size; i++) {
    if (boolean_list[i]) {
      num_of_truths++;
    }

    if (break_on_condition AND num_of_truths > condition_matcher_number) {
      break;
    }
  }

  return num_of_truths;
}

bool logical_and(unsigned short array_size, bool* boolean_list) {
  return logical_iterator(true, false, boolean_list, array_size);
}

bool logical_or(unsigned short array_size, bool* boolean_list) {
  return logical_iterator(false, true, boolean_list, array_size);
}

bool logical_xor(unsigned short array_size, bool* boolean_list) {
  bool result = false;
  unsigned short num_of_truths = logical_truth_counter(false, 0, boolean_list, array_size);

  if (num_of_truths > 0u AND num_of_truths % 2u) {
    result = true;
  }

  return result;
}

bool logical_strict_xor(unsigned short array_size, bool* boolean_list) {
  bool result = false;
  unsigned short num_of_truths = logical_truth_counter(true, 1u, boolean_list, array_size);

  if (num_of_truths == 1u) {
    result = true;
  }

  return result;
}

bool logical_nor(unsigned short array_size, bool* boolean_list) {
  return logical_iterator(true, true, boolean_list, array_size);
}

bool logical_xnor(unsigned short array_size, bool* boolean_list) {
  return logical_iterator(false, false, boolean_list, array_size);
}

bool logical_nand(unsigned short array_size, bool* boolean_list) {
  return NOT logical_and(array_size, boolean_list);
}

void logical_not(unsigned short array_size, bool* boolean_list){
  unsigned short i;
  for (i=0u;i<array_size;i++){
      boolean_list[i]= NOT boolean_list[i];
  }

}
