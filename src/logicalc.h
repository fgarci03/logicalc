// todo: how to handle booleans? should we use stdbool.h?

#ifndef LOGICALC_H_
#define LOGICALC_H_

#define AND  &&
#define OR   ||
#define XOR  !=
#define NOT  !

bool logical_and(unsigned short array_size, bool boolean_list[]);

bool logical_or(unsigned short array_size, bool boolean_list[]);

bool logical_xor(unsigned short array_size, bool boolean_list[]);

bool logical_strict_xor(unsigned short array_size, bool boolean_list[]);

bool logical_nor(unsigned short array_size, bool boolean_list[]);

bool logical_xnor(unsigned short array_size, bool boolean_list[]);

bool logical_nand(unsigned short array_size, bool boolean_list[]);

// todo fgarci03 -> luis06: implement
bool logical_not(unsigned short array_size, bool boolean_list[]);

void logical_not(unsigned short array_size, bool *boolean_list);

#endif
