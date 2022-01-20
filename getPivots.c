#include "utils.h"

void	getPivots(int pivots[], t_stack *s, int size)
{
	t_array		*sortedArray;

	sortedArray = listToSortedArray(st, size);
	if (sortedArray == NULL)
		return ;
	pivots[1] = *(sortedArray->array + ((size *2 ) / 3));
	pivots[0] = *(sortedArray->array + ((size) / 3));
	freeSortedArray(&sortedArray);
}
