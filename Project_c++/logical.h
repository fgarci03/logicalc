/*
 * logical.h
 *
 *  Created on: 01/12/2015
 *      Author: N550JV
 */

#ifndef LOGICAL_H_
#define LOGICAL_H_

#define AND  &&
#define OR   ||
#define XOR  !=
#define NOT  !

class logical {
public:
	logical();
	virtual ~logical();
	bool logical_and (unsigned short,bool*);
	bool logical_or(unsigned short , bool* );
	bool logical_xor(unsigned short, bool*);
	bool logical_strict_xor(unsigned short, bool*);
	bool logical_nor(unsigned short, bool*);
	bool logical_xnor(unsigned short, bool*);
	bool logical_nand(unsigned short, bool* );
	void logical_not(unsigned short, bool* );

private:
	bool logical_iterator (bool,bool,bool*,unsigned short);
	unsigned short logical_truth_counter (bool,unsigned short,bool*,unsigned short);
};

#endif /* LOGICAL_H_ */
