#include <stdio.h>

int	mystrlen(char *string)
{
	int i=0;

	while(*string != '\0')  {
		i++;
		string++;
	}
	return(i);	
}
