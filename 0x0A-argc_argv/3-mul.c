#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
int multi;
if (argc == 3)
{
multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
}
return (0);
if ((argc <= 2) || (argc > 3))
printf("Error \n");
return (1);
}
