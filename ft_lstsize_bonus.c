#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;
	t_list *str;

	i = 0;
	str = lst;
	while (str)
	{
		str = str->next;
		i++;
	}
	return (i);
}