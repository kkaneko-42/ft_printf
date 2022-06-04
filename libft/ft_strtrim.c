/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:15:44 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/13 14:06:51 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	char_in_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != 0x00)
	{
		if (set[i] == c)
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_i;
	size_t	end_i;
	char	*res;

	if (s1 == NULL || set == NULL)
		return ((char *)s1);
	start_i = 0;
	while (char_in_set(s1[start_i], set))
		++start_i;
	if (s1[start_i] == 0x00)
		return (ft_strdup("\0"));
	end_i = ft_strlen(s1) - 1;
	while (char_in_set(s1[end_i], set))
		--end_i;
	res = (char *)malloc(sizeof(char) * (end_i - start_i + 2));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1 + start_i, end_i - start_i + 2);
	return (res);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*s1 = ft_strdup("\0\0a\0\0\0");
	char	*set = ft_strdup("\0");
	printf("src:%s\n", s1);
	printf("res:%s\n", ft_strtrim(s1, set));
	return (0);
}
*/
