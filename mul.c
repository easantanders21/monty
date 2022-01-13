#include "monty.h"

/**
 * mul -  multiplies the second top element x top element of the stack.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	stack_t *tmp1 = *stack;
	int mul = 0;

	if ((tmp == NULL) || (tmp->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	mul =  tmp->n;
	tmp1 = tmp1->next;

	tmp1->n = tmp1->n * mul;
	*stack = tmp1;

	free(tmp);
	tmp1->prev = NULL;
}
