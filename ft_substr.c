#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tab;
	int i;

	i = 0;
	if (!(tab = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] != '\0' && len-- > 0)
	{
		tab[i++] = s[start++];
	}
	tab[i] = '\0';
	return (tab);
}