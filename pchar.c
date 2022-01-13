# include "monty.h"
/**
 * pchar -  prints the char at the top, followed by a new line.
 * @stack: stack_t structure
 * @line_number: number of error line
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int ch;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	ch = tmp->n;

	if (ch >= 0 && ch <= 255)
	{
		putchar(ch);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
