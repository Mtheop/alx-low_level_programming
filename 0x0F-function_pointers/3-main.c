#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: the function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


#endif
