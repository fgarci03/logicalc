/*
 * main.cpp
 *
 *  Created on: 01/12/2015
 *      Author: N550JV
 */

#include <iostream>
#include <string>
#include "logical.h"

int main (void) {

	  bool allFalse[3] = {false, false, false};
	  bool oneTrue[3]  = {true, false, false};
	  bool someTrue[3] = {true, true, false};
	  bool allTrue[3]  = {true, true, true};
	logical test = logical();
	std::cout << "Output sentence";
	std::cout <<("Variables:\n");
	std::cout <<("bool allFalse[3] = {false, false, false};\n");
	std::cout <<("bool oneTrue[3]  = {true, false, false};\n");
	std::cout <<("bool someTrue[3] = {true, true, false};\n");
	std::cout <<("bool allTrue[3]  = {true, true, true};\n\n\n");

	std::cout <<("AND:\n");
	// test.logical_and() example
	std::cout <<"logical_and(sizeof(allFalse), allFalse)): "<< test.logical_and(sizeof(allFalse), allFalse)<<"\n";
	std::cout <<"logical_and(sizeof(oneTrue), oneTrue)): "<< test.logical_and(sizeof(oneTrue), oneTrue)<<"\n";
	std::cout <<"logical_and(sizeof(someTrue), someTrue)): "<< test.logical_and(sizeof(someTrue), someTrue)<<"\n";
	std::cout <<"logical_and(sizeof(allTrue), allTrue)): "<< test.logical_and(sizeof(allTrue), allTrue)<<"\n";
	  // AND example
	std::cout <<"false AND false AND false: " << (false AND false AND false);
	std::cout <<"\ntrue AND false AND false: " << (true AND false AND false);
	std::cout <<"\ntrue AND true AND false: " << (true AND true AND false);
	std::cout <<"\ntrue AND true AND true: " << (true AND true AND true)<<"\n";

	std::cout <<("OR:\n");
	// test.logical_or() example
	std::cout <<"logical_or(sizeof(allFalse), allFalse)): "<< test.logical_or(sizeof(allFalse), allFalse)<<"\n";
	std::cout <<"logical_or(sizeof(oneTrue), oneTrue)): "<< test.logical_or(sizeof(oneTrue), oneTrue)<<"\n";
	std::cout <<"logical_or(sizeof(someTrue), someTrue)): "<< test.logical_or(sizeof(someTrue), someTrue)<<"\n";
	std::cout <<"logical_or(sizeof(allTrue), allTrue)): "<< test.logical_or(sizeof(allTrue), allTrue)<<"\n";
	  // XOR example
	std::cout <<"true XOR false: "<< (true XOR false);
	std::cout <<"\nfalse XOR false XOR false: "<< (false XOR false XOR false);
	std::cout <<"\ntrue XOR false XOR false: "<< (true XOR false XOR false);
	std::cout <<"\ntrue XOR true XOR false: "<< (true XOR true XOR false);
	std::cout <<"\ntrue XOR true XOR true XOR false: "<< (true XOR true XOR true XOR false)<<"\n";
	// OR example
	std::cout <<"false OR false OR false: " << (false OR false OR false);
	std::cout <<"\ntrue OR false OR false: " << (true OR false OR false);
	std::cout <<"\ntrue OR true OR false: " << (true OR true OR false)<<"\n";

	std::cout <<("XOR:\n");
	// test.logical_xor() example
	std::cout <<"logical_xor(sizeof(allFalse), allFalse)): "<< test.logical_xor(sizeof(allFalse), allFalse)<<"\n";
	std::cout <<"logical_xor(sizeof(oneTrue), oneTrue)): "<< test.logical_xor(sizeof(oneTrue), oneTrue)<<"\n";
	std::cout <<"logical_xor(sizeof(someTrue), someTrue)): "<< test.logical_xor(sizeof(someTrue), someTrue)<<"\n";
	std::cout <<"logical_xor(sizeof(allTrue), allTrue)): "<< test.logical_xor(sizeof(allTrue), allTrue)<<"\n";
	std::cout <<("Strict_XOR:\n");
	// test.logical_strict_xor() example
	std::cout <<"logical_strict_xor(sizeof(allFalse), allFalse)): "<< test.logical_strict_xor(sizeof(allFalse), allFalse)<<"\n";
	std::cout <<"logical_strict_xor(sizeof(oneTrue), oneTrue)): "<< test.logical_strict_xor(sizeof(oneTrue), oneTrue)<<"\n";
	std::cout <<"logical_strict_xor(sizeof(someTrue), someTrue)): "<< test.logical_strict_xor(sizeof(someTrue), someTrue)<<"\n";
	std::cout <<"logical_strict_xor(sizeof(allTrue), allTrue)): "<< test.logical_strict_xor(sizeof(allTrue), allTrue)<<"\n";
	std::cout <<"NOT false: " << NOT false;
	std::cout <<"\nNOT true: " << NOT true << "\n";
	  unsigned short not_i;
	  //Applying not to allFalse array
	  test.logical_not (sizeof(allFalse),allFalse);
	  std::cout <<("allFalseChanged Array:");
	  for (not_i=0;not_i<sizeof(allFalse);not_i++){
		  std::cout <<(allFalse[not_i]);
	  }
	  std::cout <<("\n");

	  //Applying not to ontTrue array
	  std::cout <<("oneTrueOriginal Array:");
	  for (not_i=0;not_i<sizeof(oneTrue);not_i++){
		  std::cout <<(oneTrue[not_i]);
	  }
	  std::cout <<("\n");

	  test.logical_not (sizeof(oneTrue),oneTrue);
	  std::cout <<("oneTrueChanged Array:");
	  for (not_i=0;not_i<sizeof(oneTrue);not_i++){
		  std::cout <<(oneTrue[not_i]);
	  }
	  std::cout <<("\n");

	  //Applying not to someTrue array
	  std::cout <<("someTrueOriginal Array:");
	  for (not_i=0;not_i<sizeof(someTrue);not_i++){
		  std::cout <<(someTrue[not_i]);
	  }
	  std::cout <<("\n");

	  test.logical_not (sizeof(someTrue),someTrue);
	  std::cout <<("someTrueChanged Array:");
	  for (not_i=0;not_i<sizeof(someTrue);not_i++){
		  std::cout <<(someTrue[not_i]);
	  }
	  std::cout <<("\n");

	test.logical_not (sizeof(allTrue),allTrue);
	std::cout <<("allTrueChanged Array:");
	  for (not_i=0;not_i<sizeof(allTrue);not_i++){
		  std::cout <<(allTrue[not_i]);
	  }
	  std::cout <<("\n");

	return 0;
}

