#include <stdlib.h>

static char *malloctab(int nb)
{
	int i;
	char *tab;

	i = 1;
	if (nb < 0)
	{
		i++;
		nb = -nb; 
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	tab = malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	return (tab);
}
static void lil_itoa(int nb , char **tab)
{
	long long	div;
	long long	ni;
	int i;

	i = 0;
	ni = nb;
	if (ni < 0)
	{
		ni = -ni;
		(*tab)[i++] = '-';
	}
	div = 1;
	while (div <= ni)
		div = div * 10;
	while (div >= 10)
	{
		div = div / 10;
		(*tab)[i++] = ((ni / div) + '0');
		ni = ni % div;
	}
	(*tab)[i] = '\0';
}
char	*ft_itoa(int nb)
{
	char *tab;

	tab = malloctab(nb);
	if (tab == NULL)
		return (NULL);
	if (nb == 0)
	{
		tab[0] = '0';
		tab[1] = '\0';
		return tab;
	}
	lil_itoa(nb , &tab);
	return(tab);
}