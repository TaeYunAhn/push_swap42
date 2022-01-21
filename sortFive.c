#include "utils.h"

static int	getFivePivot(t_stack *aStack)
{
	int		pivot;
	t_array	*sortedArray;

	sortedArray = listToSortedArray(aStack, 5);
	if (sortedArray == NULL)
		return (-1);
	pivot = *(sortedArray->array + 2);
	freeSortedArray(&sortedArray);
	return (pivot);
}

static int	sortFive(t_stack *aStack, t_stack *bStack)
{
	int		i;
	int		piovot;

	if (isStackSorted(aStack, ASC, 5))
		return ;
	pivot = getFivePivot(aStack);
	i = 0;
	while (i < 5)
	{
		if (aStack->list->tail->content < pivot)
			pb(aStack, bSatck)
		else
			ra(aStack);
		i++;
	}
	sortThree(aStack);
	if (bStack->list->head->content > bStack->list->head->next->content)
		sb(bStack);
	pa(aStack, bStack);
	pa(aStack, bStack);
}
