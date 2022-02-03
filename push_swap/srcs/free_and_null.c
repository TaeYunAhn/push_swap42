#include "utils.h"

void	free_and_null(void **ptr)
{
	free(*ptr);
	*ptr = 0;
}
