#include "utils.h"

void	multiPa(aStack, bStack, size)
{
	while(size--)
		pa(aStack, bStack);
}

void	sortB(t_stack *aStack, t_stack *bStack, int size)
{
	int		counts[4];
	int		pivots[4];

	getPivots(pivots, bStack, size);
	ft_memset(counts, 0, size);
	if (isStackSorted(bStack, DESC, sizeof(int) * 4))
	{

	}

}
