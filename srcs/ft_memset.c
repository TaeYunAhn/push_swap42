#include  "utils.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		idx;

	idx = 0;
	while (idx < len)
	{
		*((unsigned char *)(b + idx)) = (unsigned char)c;
		idx++;
	}
	return (b);
}
