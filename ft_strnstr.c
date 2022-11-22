/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:26:10 by cfelix            #+#    #+#             */
/*   Updated: 2022/11/22 16:26:48 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		n = 0;
		i = 0;
		while (big[i++] == little[n++])
		{
			if (little[n] == '\0' || n == len)
				return ((char *)big);
		}
		big++;
	}
	return (0);
}
