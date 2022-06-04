/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:40:49 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/11 15:21:25 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	cmp_uc(const char c1, const char c2)
{
	return ((unsigned char)c1 - (unsigned char)c2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	while ((unsigned char)s1[i] != 0x00 && \
			(unsigned char)s2[i] != 0x00 && i < n)
	{
		if (cmp_uc(s1[i], s2[i]))
			return (cmp_uc(s1[i], s2[i]));
		++i;
	}
	if (i < n)
		return (cmp_uc(s1[i], s2[i]));
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	printf("origin:%d\n", strncmp(av[1], av[2], atoi(av[3])));
	printf("made:%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	return (0);
}
*/
