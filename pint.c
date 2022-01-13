# include "monty.h"

/**
 * pint -  prints the value at the top of the stack, followed by a new line
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
