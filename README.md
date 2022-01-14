# 0x19. C - Stacks, Queues - LIFO, Monty Project

![alt text](http://montyscoconut.github.io/assets/media//wallpaper-1024.jpg)

## The Monty Language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```
@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
@ubuntu:~/monty$
```

## Compilation & Output

Your code will be compiled this way:

    $ gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty

## Table of contents
Files | Description
----- | -----------
[monty.h](./monty.h) | Header file containing all the function prototypes of this project, and the definition of the structures
[monty.c](./monty.c) | C main file of the project, contains all work to read, parse, and interpreter monty opcodes
[push.c](./push.c) | C function to pushes an element to the stack.
[pint.c](./pint.c) | C function prints the value at the top of the stack, followed by a new line
[pop.c](./pop.c) | C function that removes the top element of the stack.
[swap.c](./swap.c) | C function that swaps the top two elements of the stack.
[add.c](./add.c) | C function that  adds the top two elements of the stack.
[nop.c](./nop.c) | C function doesn’t do anything.
[sub.c](./sub.c) | C function that subtracts the top element of the stack from the second top element of the stack.
[div.c](./div.c) | C function that divides the second top element of the stack by the top element of the stack.
[mul.c](./mul.c) | C function that  multiplies the second top element of the stack with the top element of the stack.
[mod.c](./mod.c) | C function that get  the rest of the division of the second top element of the stack by the top element of the stack.

## Authors
Edgar Santander
Diego Fernando Jojoa Yandún