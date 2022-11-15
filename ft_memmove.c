#include <stdio.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	char temp;

	i = 0;
	while (i < n)
	{
		temp = ((unsigned char *)src)[i];
		((unsigned char*)dest)[i] = temp;
		i++;
	}	
	return dest;
}

int	main()
{
	char dest[50] = "jberifgbger";
	printf ("%p", dest);
	char *src = "aaaaaaaaaaaa";
	printf ("\n%p", ft_memmove(dest , src ,5));
	printf ("\n%s", dest);
}

