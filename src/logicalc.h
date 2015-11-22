#ifndef LOGICALC_H_
#define LOGICALC_H_

#define AND  &&
#define OR   ||
#define XOR  !=
#define NOT  !
#define NOR  && ! // todo: this needs to be properly tested, and possibly removed :)
#define XNOR ==
// todo: check NAND

bool and(int numOfElements, ...);
bool andList(bool booleanList[]);

bool or(int numOfElements, ...);
bool orList(bool booleanList[]);

bool xor(int numOfElements, ...);
bool xorList(bool booleanList[]);

// todo: implement
bool formalXor(int numOfElements, ...);
bool formalXorList(bool booleanList[]);

// todo: implement
bool not(int numOfElements, ...);
bool notList(bool booleanList[]);

// todo: implement
bool nor(int numOfElements, ...);
bool norList(bool booleanList[]);

// todo: implement
bool nand(int numOfElements, ...);
bool nandList(bool booleanList[]);

// todo: implement
bool xnor(int numOfElements, ...);
bool xnorList(bool booleanList[]);

#endif
