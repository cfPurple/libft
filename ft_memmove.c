#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *src2;

	src2 = (char *)src; 
	i = 0;
	if (dest == NULL && src2 == NULL)
		return (NULL);
	if ((char *)dest > src2)
	{
		while (i < n)
		{
			((char *)dest)[n - i - 1] = src2[n - i - 1];
			i++;
		}
	}
	else if ((char *)dest <= src2)
	{
		while (i < n)
		{
			((char *)dest)[i] = src2[i];
			i++;
		}
	}
	return (dest);
}