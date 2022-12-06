/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:05:50 by cfelix            #+#    #+#             */
/*   Updated: 2022/12/06 18:13:53 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
	{
		tab = malloc(sizeof(char));
		if (!tab)
			return (NULL);
		tab[i] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (s[start] && i < len)
		tab[i++] = s[start++];
	tab[j] = '\0';
	return (tab);
}
