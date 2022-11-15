#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	str = (unsigned char*)s;
	i = 0;
	while (*str && i < n)
	{
		if (*str == c)
			return (str); 
		str++;
		i++;
	}
	return (0);
}