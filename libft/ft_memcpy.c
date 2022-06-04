/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 09:02:45 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 16:53:11 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*c_dst;
	unsigned char	*c_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		++i;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	for (int i = 0; i < strlen(av[1]); ++i)
		printf("%c ", av[1][i]);
	printf("\n");
	memcpy(NULL, NULL, atoi(av[3]));
	for (int i = 0; i < strlen(av[1]); ++i)
		printf("%c ", av[1][i]);
	printf("\n");
}
*/
