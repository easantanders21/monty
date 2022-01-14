# 0x19. C - Stacks, Queues - LIFO,

## The Monty Language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

``julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$``

## Table of contents
Files | Description
----- | -----------
[monty.h](./monty.h) | Header file containing all the function prototypes of this project, and the definition of the structures
[0-print_dlistint.c](./0-print_dlistint.c) | C function that prints all the elements of a dlistint_t list
[1-dlistint_len.c](./1-dlistint_len.c) | C function that returns the number of elements in a linked dlistint_t list
[2-add_dnodeint.c](./2-add_dnodeint.c) | C function that adds a new node at the beginning of a dlistint_t list
[3-add_dnodeint_end.c](./3-add_dnodeint_end.c) | C function that adds a new node at the end of a dlistint_t list
[4-free_dlistint.c](./4-free_dlistint.c) | C function that free a dlistint_t list
[5-get_dnodeint.c](./5-get_dnodeint.c) | C function that returns the nth node of a dlistint_t linked list
[6-sum_dlistint.c](./6-sum_dlistint.c) | C function that returns the sum of all the data (n) of a dlistint_t linked list
[7-insert_dnodeint.c](./7-insert_dnodeint.c) | C function that inserts a new node at a given position
[8-delete_dnodeint.c](./8-delete_dnodeint.c) | C function that deletes the node at index index of a dlistint_t linked list

## Author
Diego Fernando Jojoa Yandún