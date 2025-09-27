#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _isnumber(char *s)
{
int i = 0;
if (s[0] == '\0')
return 0;
while (s[i])
{
if (!isdigit(s[i]))
return 0;
i++;
}
return 1;
}
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
if (!_isnumber(argv[i]))
{
printf("Error\n");
return 1;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return 0;
}
