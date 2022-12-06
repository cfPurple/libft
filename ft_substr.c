#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tab;
	int i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
	{
		tab = malloc(sizeof(char) * 1);
		if (!tab)
			return (NULL);
		tab[i] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		tab[i++] = s[start++];
		len--;
	}
	tab[i] = '\0';
	return (tab);
}