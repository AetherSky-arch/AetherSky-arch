#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;

	long int	num;

	num = atoi(av[1]);
	while(num != 1)
	{
		printf("%s", "I know that you know that ");
		num--;
	}

	printf("%s\n", "I know.");

	return(0);
}
