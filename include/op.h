#ifndef __OP_H__
#define __OP_H__


typedef enum {
	DOT, // .
    OR, // |
	PLUS, // +
	QUES, // ?
	STAR, // *
    L_PAREN, // (
    R_PAREN, // )
} Precedence;

typedef struct {
       int operand_num;
       char name;// . + ? *
       Precedence precedence;
} Operator;


#endif /* __OP_H__ */