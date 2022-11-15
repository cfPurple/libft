#include "libft.h"

char ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (*little == '\0')
		return (str);
	while (*big != '\0')
	{
		n = 0;
		i = 0;
		while (big[i++] == little[n++])
		{
			if (little[n] == '\0' || n == len)
				return (big);
		}
		big++;
	}
	return (0);
}