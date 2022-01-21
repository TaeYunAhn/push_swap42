#include "utils.h"

static	void	case123(t_stack *aStack)
{
	ra(aStack);
	sa(aStack);
}

static	void	case231(t_stack *aStack)
{
	sa(aStack);
	ra(aStack);
}


void	sortThree(t_stack *aStack)
{
	t_node		*aHead

	aHead = aStack->list->head;
	if (aHead->content < aHead->next->content && \
		aHead->next->content < aHead->next->next && \
		aHead->content < aHead->next->next->content)
		caseOne(aStack); // 123
	else if (aHead->content < aHead->next->content && \
		aHead->next->content > aHead->next->next->content && \
		aHead->content < aHead->next->next->content)
		rra(aStack); // 132
	else if (aHead->content < aHead->next->content && \
		aHead->next->content > aHead->next->next->content &&\
		aHead->content > aHead->next->next->content)
		case231(aStack); // 231
	else if (aHead->content > aHead->next->content && \
		aHead->next->content < aHead->next->next->content &&\
		aHead->content < aHead->next->next->content)
		ra(aStack); // 213
	else if (aHead->content > aHead->next->content && \
		aHead->next->content < aHead->next->next->content &&\
		aHead->content > aHead->next->next->content)
		sa(aStack); //312
}
