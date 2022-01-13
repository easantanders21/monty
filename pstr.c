#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack
 * @stack: stack_t struct
 * @line_number: error line number
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	int str;
	stack_t *tmp = *stack;

	(void) line_number;
	while (tmp)
	{
		str = tmp->n;
		if (str > 0 && str <= 127)
			putchar(str);
		else
			break;
		tmp = tmp->next;
	}
	putchar('\n');
}
