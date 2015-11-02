#include "all_stdlib.h"

int main(int argc, char *argv[]){

	return 0;
}


/*
First compile and debug under here,
then move it to my os user program

read '*.l' file

0. non-standard->standard
[a-z] -> a|b|c...|z

1. add '.' if no operand between two operator
     use an array
2. convert to suffix expression
     use a stack
3. analyze suffix expresion, edge(a, b) operator(*, ., |) -- combine them into a big map,
	regex 's' -- NFA, N(s), regex 't' -- NFA, N(t)
	- r = s|t: merge the start of both
	- r = st: merge the start of s and end of t
	- r = s+: p102
	- r = s*: p102

    use a linked list of linked list
4. travel the map -- NFA
4.1 to produce table of new state -- closure
use set

5. new map of DFA by table
5.1 classify by out edge -- merge same class edge
5.2 travel new map of DFAo and produce switch

*/
