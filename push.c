#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: struct stack_t
 * @line_number: line number to show in error case
*/
void push(stack_t **stack, unsigned int line_number)
{
	if (variables.flag == 0)
	{
		stack_t *temp;
		stack_t *new;

		temp = *stack;
		new = malloc(sizeof(stack_t));
		if (new == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			free_stack(stack);
			exit(EXIT_FAILURE);
		}
		new->n = variables.push_arg;
		new->prev = NULL;
		new->next = *stack;
		if (temp != NULL)
			temp->prev = new;
		*stack = new;
	}
	if (variables.flag == 1)
		add_end(stack);
	(void) line_number;
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
/**
 * add_end - adds a new node at the end of a dlistint_t list.
 * @stack: head of the list.
 */
void add_end(stack_t **stack)
{
	stack_t *new_node, *tmp = *stack;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (*stack == NULL)
	{
		new_node->n = variables.push_arg;
		*stack = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new_node->n = variables.push_arg;
		tmp->next = new_node;
		new_node->prev = tmp;
		new_node->next = NULL;
	}
}
