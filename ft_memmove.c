#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char temp;

	i = 0;
	while (i < n)
	{
		temp = ((unsigned char *)src)[i];
		((unsigned char*)dest)[i] = temp;
		i++;
	}	
	return dest;
}