// todo: how to handle booleans? should we use stdbool.h?

#ifndef LOGICALC_H_
#define LOGICALC_H_

#define AND  &&
#define OR   ||
#define XOR  !=
#define NOT  !

bool logical_and(unsigned short, bool*);

bool logical_or(unsigned short, bool*);

bool logical_xor(unsigned short, bool*);

bool logical_strict_xor(unsigned short, bool*);

bool logical_nor(unsigned short, bool*);

bool logical_xnor(unsigned short, bool*);

bool logical_nand(unsigned short, bool*);

void logical_not(unsigned short, bool*);

#endif
