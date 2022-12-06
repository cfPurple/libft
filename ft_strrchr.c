#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (((char*)s)[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);

}