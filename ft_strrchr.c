#include "libft.h"


char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = &((char*)s)[i];
		i++;
	}
	if (c == '\0')
		ptr = &((char*)s)[i];
	return (ptr);

}