#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tab;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
	{
		tab = malloc(sizeof(char));
		if (!tab)
			return (NULL);
		tab[i] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			tab[j++] = s[i];
		}
		i++;
	}
	tab[j] = '\0';
	return (tab);
}