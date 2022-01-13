#include "monty.h"

/**
 * add - doesn’t do anything.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	stack_t *tmp1 = *stack;
	int sum = 0;

	if ((tmp == NULL) || (tmp->next == NULL && tmp->prev == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum =  tmp->n;
	tmp1 = tmp1->next;

	tmp1->n = tmp1->n + sum;
	*stack = tmp1;

	free(tmp);
	tmp1->prev = NULL;
}
