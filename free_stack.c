#include "monty.h"
void free_stack(stack_t **stack)
{
	stack_t *tmp;

	while ((*stack) != NULL)
	{
		tmp = (*stack);
		(*stack) = (*stack)->next;
		free(tmp);
	}
}
