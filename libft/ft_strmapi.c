/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:49:36 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 12:23:58 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0x00)
	{
		res[i] = f(i, s[i]);
		++i;
	}
	res[i] = 0x00;
	return (res);
}
/*
#include <stdio.h>
char	eg_func(unsigned int i, char c)
{
	if (ft_isdigit((int)c) && i % 2 == 0)
		return ('o');
	if (i % 2 == 0)
		return ('x');
	return (c);
}

int	main(int ac, char **av)
{
	char	*res;

	res = ft_strmapi(av[1], NULL);
	printf("arg:%s\n", av[1]);
	printf("res:%s\n", res);
	return (0);
}
*/
