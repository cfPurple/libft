#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return((char *)s + i); 
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}