#include "monty.h"

/**
 * mod - module the second top element by the top element of the stack.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	stack_t *tmp1 = *stack;
	int mod = 0;

	if ((tmp == NULL) || (tmp->next == NULL && tmp->prev == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	mod =  tmp->n;
	if (mod == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp1 = tmp1->next;
	tmp1->n = tmp1->n % mod;
	*stack = tmp1;

	free(tmp);
	tmp1->prev = NULL;
}
