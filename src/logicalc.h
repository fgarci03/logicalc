// todo: how to handle booleans? should we use stdbool.h?

#ifndef LOGICALC_H_
#define LOGICALC_H_

#define AND  &&
#define OR   ||
#define XOR  !=
#define NOT  !


bool and(int numOfElements, ...);
bool andList(bool booleanList[]);

bool or(int numOfElements, ...);
bool orList(bool booleanList[]);

bool xor(int numOfElements, ...);
bool xorList(bool booleanList[]);

bool formalXor(int numOfElements, ...);
bool formalXorList(bool booleanList[]);

// todo: implement
bool nor(int numOfElements, ...);
bool norList(bool booleanList[]);

// todo: implement
bool nand(int numOfElements, ...);
bool nandList(bool booleanList[]);

// todo: implement
bool xnor(int numOfElements, ...);
bool xnorList(bool booleanList[]);

// todo fgarci03 -> luis06: check possible implementations for a NOT function (return an array of the inverse values? return void and change the values directly with pointers?)
bool not(int numOfElements, ...);
bool notList(bool booleanList[]);

#endif
