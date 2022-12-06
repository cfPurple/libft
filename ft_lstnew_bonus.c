#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *tab;

	tab = malloc(sizeof(t_list));
	if (tab == NULL)
		return (NULL);
	tab->content = content;
	tab->next = NULL;
	return (tab);
}