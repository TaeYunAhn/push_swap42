#include  "utils.h"

void	addBackNode(t_list *tList, t_node *curNode)
{
	if (tList->head == NULL)
	{
		tList->head = curNode;
		tList->tail = curNode;
	}
	else
	{
		tList->tail->next = curNode;
		tList->head->prev = curNode;
		curNode->prev = tList->tail;
		curNode->next = tList->head;
		tList->tail = curNode;
	}
}
