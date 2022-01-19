#include "utils.h"

static	int	dupChecker(t_list *list)
{
	t_node		*iCur;
	t_node		*jCur;

	iCur = list->head;
	while (iCur != list->tail)
	{
		jCur = iCur->next;
		while (jCur != list->head)
		{
			if (iCur->content == jCur->content)
				return (0);
			jCur = iCur->next;
		}
		iCur = iCur->next;
	}
	return(1);
}

static int	check_Int_Range(char *tempStr, t_list *ret)
{
	long long val;

	val = ft_atoll(tempStr);
	free(tempStr);
	if (-2147483648 <= val && val <= 2147483647)
	{
		addBack(ret, val);
		return (1);
	}
	return (0);
}
