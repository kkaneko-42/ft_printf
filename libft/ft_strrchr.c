/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:22:35 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 12:09:48 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	res = NULL;
	i = 0;
	while (s[i] != 0x00)
	{
		if (s[i] == c)
			res = (char *)&s[i];
		++i;
	}
	if (s[i] == c)
		res = (char *)&s[i];
	return (res);
}
/*
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	printf("origing:%s\n", strrchr(av[1], av[2][0]));
	printf("made:%s\n", ft_strrchr(av[1], av[2][0]));
	return (0);
}
*/
