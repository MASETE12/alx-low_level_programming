#include <stdio.h>
/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */
int main(void)
{ int n1 = 0, n2;
while (n1 < 9)
{ n2 = 0;
while (n2 < 9)
{ if (n1 != n2 && n1 < n2)
{ putchar(n1 + 48);
putchar(n2 + 48); 
if (n1 + n2 != 17)
{ putchar(',');
putchar(' '); } } } }
putchar('\n');
return (0); }
