#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst && del)
	{
		while (*lst)
		{
			del((*lst)->content);
			free(*lst);
			*lst = (*lst)->next;
		}
	}
}