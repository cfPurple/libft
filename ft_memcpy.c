/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:48:39 by cfelix            #+#    #+#             */
/*   Updated: 2022/11/09 16:10:47 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}	
	return dest;
}

int	main()
{
	char dest[50] = "jberifgbger";
	printf ("%p", dest);
	char *src = "aaaaaaaaaaaa";
	printf ("\n%p", ft_memcpy(dest , src ,5));
	printf ("\n%s", dest);
}
