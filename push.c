#include "monty.h"
int push_arg;
/**
 * push - pushes an element to the stack.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void push(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	stack_t *temp = *stack;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(1);
	}
	new->n = push_arg;
	new->prev = NULL;
	new->next = *stack;
	if (temp != NULL)
		temp->prev = new;
	*stack = new;
}

/**
 * pall -  prints all the values stack, starting from the top of the stack
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void pall(stack_t **stack, unsigned int line_number)
{
	int i;
	stack_t *temp = *stack;

	(void) line_number;

	for ( ; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
