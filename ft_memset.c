/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:35:06 by cfelix            #+#    #+#             */
/*   Updated: 2022/11/09 13:35:10 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char*)s;
	while (n-- > 0)
		*ptr++ = c;
	return s;
}

int main()
{
	char s[] = "hfvhzfzf";
	ft_memset(s ,56 ,5);
	printf ("%s" ,s);
}
