#include "utils.h"

static	int	strChecker(char *new)
{
	int		i;

	i = 0;
	if (new[i] == '+' || new[i] == '-')
		i++;
	while (new[i] != 0)
	{
		if ('0' > new[i] || new[i] > '9')
	}
}
