#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", a * b);
}
return (0); }
