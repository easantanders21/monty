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

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pstr, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}


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
