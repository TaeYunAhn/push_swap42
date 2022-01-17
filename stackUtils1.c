#include "utils.h"

t_stack *initStack(char name)
{
	t_stack		*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->list = initList();
	if (stack->list == NULL)
	{
		free(stack);
		return (NULL);
	}
	stack->name = name;
	stack->size = 0;
	return (stack);
}

int	sa(t_stack *aStack)
{
	t_node	*firstNode;
	t_node	*secondNode;

	if(aStack->name != 'a' || aStack->size <= 1)
		return (0);
	firstNode = popBack(aStack->list);
	secondNode = popBack(aStack->list);
	if (firstNode == NULL || secondNode == NULL)
		return (0);
	addBackNode(aStack->list, firstNode);
	addBackNode(aStack->list, secondNode);
	return (1);
}

int	sa(t_stack *bStack)
{
	t_node	*firstNode;
	t_node	*secondNode;

	if(bStack->name != 'b' || bStack->size <= 1)
		return (0);
	firstNode = popBack(bStack->list);
	secondNode = popBack(bStack->list);
	if (firstNode == NULL || secondNode == NULL)
		return (0);
	addBackNode(bStack->list, firstNode);
	addBackNode(bStack->list, secondNode);
	return (1);
}

int	ss(t_stack *aStack, t_stack *bStack)
{
	int		ret;

	ret = sa(aStack);
	if (ret == 0)
		return (ret);
	ret = sb(bStack);
	if (ret == 0)
		return (ret);
	return (ret);
}
