/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:35:01 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/10 10:41:30 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	move_back(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t	i;

	i = len;
	while (i != 0)
	{
		dst[i - 1] = src[i - 1];
		--i;
	}
}

static void	move_front(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		++i;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	int				fg_lap;
	unsigned char	*c_dst;
	unsigned char	*c_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	fg_lap = 0;
	i = 0;
	while (i < len)
	{
		if (c_dst + i == src)
			fg_lap = 1;
		if (c_dst - i == src)
			fg_lap = -1;
		++i;
	}
	if (fg_lap == 1)
		move_front(c_dst, c_src, len);
	else
		move_back(c_dst, c_src, len);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	char	*dst1 = strdup(av[1]);
	char	*dst2 = strdup(av[1]);

	printf("-----overlap check------\n");
	printf("---src---\n");
	for (int i = 0; i < strlen(dst1); ++i)
		printf("%c ", dst1[i]);

	printf("\n-----origin-----\n");
	memmove(dst1 + 3, dst1, atoi(av[3]));
	for (int i = 0; i < strlen(dst1); ++i)
		printf("%c ", dst1[i]);
	
	printf("\n----made---\n");
	ft_memmove(dst2 + 3, dst2, atoi(av[3]));
	for (int i = 0; i < strlen(dst2); ++i)
		printf("%c ", dst2[i]);
	
	printf("\n------normal check---------\n");
	printf("---src---\n");
	for (int i = 0; i < strlen(av[1]); ++i)
		printf("%c ", dst1[i]);

	printf("\n-----origin-----\n");
	memmove(dst1, av[2], atoi(av[3]));
	for (int i = 0; i < strlen(av[1]); ++i)
		printf("%c ", dst1[i]);
	
	printf("\n----made---\n");
	ft_memmove(dst2, av[2], atoi(av[3]));
	for (int i = 0; i < strlen(av[1]); ++i)
		printf("%c ", dst2[i]);
	
	putchar('\n');
	return (0);
}
*/
