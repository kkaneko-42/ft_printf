/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 06:38:24 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/07 06:39:52 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t			i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
			return (c_s1[i] - c_s2[i]);
		++i;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	char	s1[] = "abc\0def ";
	char	s2[] = "abc\0defg";

	printf("ori:%d\n", memcmp(s1, s2, atoi(av[1])));
	printf("made:%d\n", ft_memcmp(s1, s2, atoi(av[1])));
	return (0);
}
*/
