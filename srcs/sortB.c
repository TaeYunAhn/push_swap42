#include  "utils.h"

static void	endBRecurse(t_stack *aStack, t_stack *bStack, int size)
{
	t_node		*bTop;

	bTop = bStack->list->tail;
	if (size == 3)
	{
		sortBThree(aStack, bStack);
		return ;
	}
	else if (size == 2)
	{
		if (bTop->content < bTop->prev->content)
			sb(bStack);
		pa(aStack, bStack);
		pa(aStack, bStack);
		return ;
	}
	else if (size == 1)
	{
		pa(aStack, bStack);
	}
}

void	multiPa(t_stack *aStack, t_stack *bStack, int size)
{
	while (size--)
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
		multiPa(aStack, bStack, size);
		return ;
	}
	if (size <= 3)
	{
		endBRecurse(aStack, bStack, size);
		return ;
	}
}
