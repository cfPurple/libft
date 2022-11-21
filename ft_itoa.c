#include <stdlib.h>
static char *malloctab(int nb)
{
	int i;
	char *tab;

	i =0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	if (!(tab = malloc(sizeof(char) * i + 1)))
		return (NULL);
	return (tab);
}
char	*ft_itoa(int nb)
{
	long long	div;
	long long	ni;
	char *tab;
	int i;

	i = 0;
	tab = malloctab(nb);
	if (nb == 0)
	{
		tab[i++] = '0';
		return tab;
	}
	ni = nb;
	if (ni < 0)
	{
		ni = -ni;
		tab[i++] = '-';
	}
	div = 1;
	while (div <= ni)
		div = div * 10;
	while (div >= 10)
	{
		div = div / 10;
		tab[i++] = ((ni / div) + '0');
		ni = ni % div;
	}
	tab[i] = '\0';
	return(tab);
}