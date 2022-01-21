#include "utils.h"

void	sortAThree(t_stack *aStack)
{
	t_node		*aTail;

	aTail = aStack->list->tail;
	if (aTail->content > aTail->prev->content && \
		aTail->prev->content < aTail->prev->prev->content)
		caseOne(aStack);
	else if (aTail->content > aTail->prev->content && \
		aTail->prev->content > aTail->prev->prev->content)
		caseTwo(aStack);
	else if (aTail->content < aTail->prev->content && \
		aTail->prev->content > aTail->prev->prev->content)
	{
		if (aTail->content > aTail->prev->prev->content)
		{
			caseThree(aStack);
			return ;
		}
		caseFour(aStack);
	}
}
