#include "monty.h"


/**
 * main - Monty interpreter
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	FILE *leer;
	ssize_t status_read = 0;
	size_t lineS = 0;
	char *line = NULL, *command = NULL, *push_arg_check;
	stack_t *stack = NULL;
	unsigned int line_number = 0, status_digit;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	leer = fopen(argv[1], "r");
	if (!leer)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((status_read = getline(&line, &lineS, leer)) != -1)
	{
		line_number++;
		command = strtok(line, " \t\n");
		if (command == NULL || command[0] == '#')
		{
			continue;
		}
		if (strcmp(command, "push") == 0)
		{
			push_arg_check = strtok(NULL, "\t\n ");
			status_digit = _isdigit(push_arg_check);
			if (status_digit == 0)
			{
				fprintf(stderr, "L%d: usage: push integer\n",
				 line_number);
				free(line), free_stack(&stack), fclose(leer), exit(EXIT_FAILURE);
			} push_arg = atoi(push_arg_check);
		}
		match_command(line, command, &stack, line_number, leer);
		/*line_number++;*/
	} free(line), free_stack(&stack), fclose(leer), exit(EXIT_SUCCESS);
}
/**
 * match_command - Match command
 * @line: buffer
 * @command: firs argument of buffer
 * @stack: stack
 * @line_number: line number
 * @leer: file descriptor
 * Return: void
 */
void match_command(char *line, char *command, stack_t **stack,
		   unsigned int line_number, FILE *leer)
{
	int i, flag = 0;

	instruction_t functions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{NULL, NULL}
	};

	for (i = 0; functions[i].opcode != NULL; i++)
	{
		if (strcmp(command, functions[i].opcode) == 0)
		{
			functions[i].f(stack, line_number);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, command);
		free(line);
		free_stack(stack);
		fclose(leer);
		exit(EXIT_FAILURE);
	}
}
/**
 * _isdigit - check if it is digit
 * @digit: digit
 *
 * Return: 0 or 1
 */
int _isdigit(char *digit)
{
	int i;

	for (i = 0; digit[i] != '\0'; i++)
	{
		if (digit[i] < 48 || digit[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}
