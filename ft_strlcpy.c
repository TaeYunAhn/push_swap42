#include "utils.h"

size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
    size_t i;

    if (!dst && !src)
        return (0);
    i = 0;
    while (*(src + i) != 0 && i + 1 < len)
    {
        *(dst + i) = *(src + i);
        i++;
    }
    if (len != 0)
        *(dst + i) = 0;
    while (*(src + i) != 0)
    {
        i++;
    }
    return (i);
}
