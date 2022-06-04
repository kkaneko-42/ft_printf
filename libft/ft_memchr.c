/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 06:24:09 by kkaneko           #+#    #+#             */
/*   Updated: 2022/06/02 15:08:57 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*c_str;
	unsigned char	c_c;
	size_t			i;

	c_str = (unsigned char *)s;
	c_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (c_str[i] == c_c)
			return ((void *)&c_str[i]);
		++i;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	char	str[] = "abc\0def";

	printf("ori:%s\n", (char *)memchr(str, av[1][0], atoi(av[2])));
	printf("made:%s\n", (char *)ft_memchr(str, av[1][0], atoi(av[2])));
	return (0);
}
*/
