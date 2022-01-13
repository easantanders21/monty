#include "monty.h"

/**
 * nop - doesn’t do anything.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
