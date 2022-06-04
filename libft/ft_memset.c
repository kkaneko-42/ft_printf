/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:59 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/05 11:16:35 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*res;

	res = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		res[i] = (unsigned char)c;
		++i;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	ft_memset(str1+2, -10, 0);
	memset(str2+2, -10, 0);
	printf("origin:%s\n", str2);
	printf("made:%s\n", str1);

	return (0);
}
*/
