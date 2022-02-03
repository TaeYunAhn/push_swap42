#include  "utils.h"

static int	dupChecker(t_list *list)
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
			jCur = jCur->next;
		}
		iCur = iCur->next;
	}
	return (1);
}

static int	check_Int_Range(char *tempStr, t_list *ret)
{
	long long	val;

	val = ft_atoll(tempStr);
	free_and_null((void **)&tempStr);
	if (-2147483648 <= val && val <= 2147483647)
	{
		addBack(ret, val);
		return (1);
	}
	return (0);
}

static int	parseWithString(t_list *ret, char *s)
{
	int		prev;
	int		cur;
	char	*temp;

	cur = 0;
	while (s[cur] != 0)
	{
		prev = cur;
		while (s[cur] != ' ' && s[cur] != 0)
			cur++;
		if (cur == prev)
		{
			cur++;
			continue ;
		}
		temp = ft_substr(s, prev, cur - prev);
		if (temp == NULL)
			return (0);
		if (check_Int_Range(temp, ret) == 0)
			return (0);
	}
	return (1);
}

t_list	*parser(char **argv)
{
	int			argvCnt;
	t_list		*ret;

	argvCnt = 0;
	ret = initList();
	if (ret == NULL)
		return (NULL);
	while (*(argv + argvCnt) != NULL)
	{
		if (parseWithString(ret, *(argv + argvCnt)) == 0)
		{
			clearList(&ret);
			return (ret);
		}
		argvCnt++;
	}
	if (dupChecker(ret) == 0)
		clearList(&ret);
	return (ret);
}
