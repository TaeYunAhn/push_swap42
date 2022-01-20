#include "utils.h"

t_list	*initList(void)
{
	t_list *tList;

	tList = NULL;
	tList = malloc(sizeof(t_list));
	if (tList == NULL)
		return (NULL);
	tList->head = NULL;
	tList->tail = NULL;
	return (tList);
}

int	addBack(t_list *tList, int value)
{
	t_node	*curNode;

	curNode = NULL;
	curNode = malloc(sizeof(t_node));
	if (curNode == NULL)
		return (1);
	curNode->content = value;
	if (tList->head == NULL)
	{
		tList->head = curNode;
		tList->tail = curNode;
	}
	else
	{
		tList->tail->next = curNode;
		tList->head->prev = curNode;
		curNode->next = tList->head;
		curNode->prev = tList->tail;
		tList->tail = curNode;
	}
	return (1);
}

t_node	*popBack(t_list *list)
{
	t_node	*node;

	if (list->head == list->tail)
	{
		if(list->head == NULL)
			return (NULL);
		node = malloc(sizeof(t_node));
		if (node == NULL)
			return (NULL);
		node->content = list->head->content;
		free(list->head->content);
		list->tail = NULL;
		return (node);
	}
	node = list->tail;
	list->tail->prev->next = list->head;
	list->tail->next->prev = list->tail->prev;
	list->tail = list->tail->prev;
	return (node);
}

static	void	clearNodes(t_list *list, t_node **curNode)
{
	if (*curNode == list->tail)
	{
		free(curNode);
		return ;
	}
	else
	{
		clearNodes(list, &((*curNode)->next));
		free(*curNode);
	}
}

void	clearList(t_list **list)
{
	if ((*list)->head != NULL)
		clearNodes(*list, &(*list)->head);
	free(*list);
}
