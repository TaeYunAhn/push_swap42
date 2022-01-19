#include "utils.h"

static size_t space_skipper(const char *str)
{
	size_t idx;

	idx = 0;
	while (*(str + idx))
	{
		if (*(str + idx) == 32 || (9 <= *(str + idx) && *(str + idx) <= 13))
			idx++;
		else
			break;
	}
	return (idx);
}

long long ft_atoll(const char *str)
{
	long long ret;
	long long minus;
	size_t idx;

	idx = space_skipper(str);
	ret = 0;
	minus = 1;
	if (*(str + idx) == '-' || *(str + idx) == '+')
	{
		if (*(str + idx) == '-')
			minus = -1;
		idx++;
	}
	while (*(str + idx))
	{
		ret *= 10;
		ret += ((long long)(*(str + idx) - '0')) * minus;
		idx++;
	}
	return (ret);
}
