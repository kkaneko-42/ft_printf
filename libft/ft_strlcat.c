/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:06:31 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/13 14:06:59 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i_dst;
	size_t	i_src;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	i_dst = len_dst;
	i_src = 0;
	while (src[i_src] != 0x00 && i_src + len_dst < dstsize - 1)
	{
		dst[i_dst] = src[i_src];
		++i_dst;
		++i_src;
	}
	dst[i_dst] = 0x00;
	return (len_dst + len_src);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av)
{
	char	*dst1 = ft_strdup(av[1]);
	char	*dst2 = ft_strdup(av[1]);
 	size_t	res_origin = strlcat(dst1, av[2], atoi(av[3]));
 	size_t	res_made = ft_strlcat(dst2, av[2], atoi(av[3]));

	printf("dst1 pointer:%p\n", dst1);
	printf("dst2 pointer:%p\n");
 	printf("----origin---\n");
 	printf("dst:%s\n", dst1);
 	printf("res:%zu\n", res_origin);
	printf("dst pointer:%p\n", dst1);
	printf("----made---\n");
 	printf("dst:%s\n", dst2);
 	printf("res:%zu\n", res_made);
	printf("dst pointer:%p\n", dst2);

	printf("------null char check--------\n");
	printf("----origin----\n");
	for (int i = 0; 1; ++i)
	{
		if (dst1[i] == 0x00)
		{
			printf("null char i:%d\n", i);
			break;
		}
	}
	printf("------made------\n");
	for (int i = 0; 1; ++i)
	{
		if (dst2[i] == 0x00)
		{
			printf("null char i:%d\n", i);
			break;
		}
	}
 	return (0);
}
*/
