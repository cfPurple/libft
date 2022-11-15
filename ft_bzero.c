/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:19:36 by cfelix            #+#    #+#             */
/*   Updated: 2022/11/09 13:19:40 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr = (unsigned char*)s;
	while (n-- > 0)
		*ptr++ = '\0';
}

int main()
{
	char s[] = "hfvhzfzf";
	ft_bzero(s ,0);
	printf ("%s" ,s);
}
