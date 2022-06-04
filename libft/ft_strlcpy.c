/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:08:05 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 16:52:28 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	res;

	res = ft_strlen(src);
	if (dstsize == 0)
		return (res);
	i = 0;
	while (src[i] != 0x00 && i < dstsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = 0x00;
	return (res);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	(void)ac;
	size_t	res1;
	size_t	res2;
	char	*tmp;

	tmp = NULL;
	printf("---origin---\n");
	printf("before:%s\n", tmp);
	res1 = strlcpy(tmp, av[2], atoi(av[3]));
	printf("after:%s\n", tmp);
	printf("res:%zu\n", res1);
	printf("---made---\n");
	printf("before:%s\n", av[1]);
	res2 = ft_strlcpy(av[1], av[2], atoi(av[3]));
	printf("after:%s\n", av[1]);
	printf("res:%zu\n", res2);
	return (0);
}
*/
