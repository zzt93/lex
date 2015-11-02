#include "op.h"

Operator operators[] = {
    {2, '.', DOT},
    {2, '|', OR},
    {1, '+', PLUS},
    {1, '?', QUES},
    {1, '*', STAR},
    {-1, '(', L_PAREN},
    {-1, ')', R_PAREN},
};

void inOrder2suffix() {
}