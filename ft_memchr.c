#include "lift.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			return (s[i]); 
		i++;
	}
	return (NULL);
}