#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *tab;
	int i;
	
	i = 0;
	if (!(tab = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1))))
		return (NULL);
	while (*s1)
		tab[i++] = *s1++;
	while(*s2)
		tab[i++] = *s2++;
	tab[i] = '\0';
	return (tab);
}