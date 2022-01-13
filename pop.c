#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *temp2 = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (temp2->next != NULL)
	{
		temp2 = temp2->next;
		temp2->prev = NULL;
		*stack = temp2;
		free(temp);
	}
	else
	{
		free(temp);
		*stack = NULL;
	}
}
