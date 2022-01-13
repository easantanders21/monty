#include "monty.h"
/**
 * rotr - change bottom node to top node
 * @stack: stack_t struct
 * @line_number: error line number
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1 = *stack;
	stack_t *tmp2 = *stack;
	stack_t *tmp3;

	if (tmp1 == NULL || tmp1->next == NULL)
	{
		return;
	}

	while (tmp1->next != NULL)
	{
		tmp1 = tmp1->next;
	}
	tmp3 = tmp1->prev;
	tmp3->next = NULL;
	tmp1->next = tmp2;
	tmp1->prev = NULL;
	tmp2->prev = tmp1;
	*stack = tmp1;
	(void) line_number;
}
