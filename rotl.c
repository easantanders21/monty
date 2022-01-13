#include "monty.h"
/**
 * rotl - change top node to end node
 * @stack: stack_t struct
 * @line_number: error line number
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1 = *stack;
	stack_t *tmp2 = *stack;

	if (tmp1 == NULL || tmp1->next == NULL)
	{
		return;
	}

	tmp1 = tmp1->next;
	*stack = tmp1;
	tmp2->next = NULL;
	tmp1->prev = NULL;

	while (tmp1->next != NULL)
	{
		tmp1 = tmp1->next;
	}
	tmp1->next = tmp2;
	tmp2->prev = tmp1;
	(void) line_number;
}
