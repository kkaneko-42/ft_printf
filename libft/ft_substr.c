/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:21:35 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/13 14:06:46 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	char	*src = av[1];
	char	*res = ft_substr(src, atoi(av[2]), atoi(av[3]));

	printf("src:%s\n", src);
	printf("res:%s\n", res);
	return (0);
}
*/
