#include <stdio.h>
#include <strings.h>

int main()
{
	char	InputString[50];
	int	size;

	printf("Enter a string:  ");
	scanf("%s", InputString);
	size = mystrlen(InputString);
	printf("Length of the string is : %d\n", size);
}
