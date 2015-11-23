// todo: how to handle booleans? should we use stdbool.h?

#ifndef LOGICALC_H_
#define LOGICALC_H_

#define AND  &&
#define OR   ||
#define XOR  !=
#define NOT  !

bool logical_and(bool booleanList[]);

bool logical_or(bool booleanList[]);

bool logical_xor(bool booleanList[]);

bool logical_strict_xor(bool booleanList[]);

// todo: implement
bool logical_nor(bool booleanList[]);

// todo: implement
bool logical_nand(bool booleanList[]);

// todo: implement
bool logical_xnor(bool booleanList[]);

// todo fgarci03 -> luis06: implement
bool logical_not(bool booleanList[]);

#endif
