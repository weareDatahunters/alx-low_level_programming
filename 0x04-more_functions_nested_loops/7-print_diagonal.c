#include "main.h"

/**
* print_diagonal - prints  diagonal
* @n: lenght of diagonal
*/
void print_diagonal(int n)
{
if (n > 0)
{
int i,j;
for (i = 0; i <= n; i++)
{
for (j = 1; j<=i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}

}
else
{
putchar('\n');
}
