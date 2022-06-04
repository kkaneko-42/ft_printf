/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:56:54 by kkaneko           #+#    #+#             */
/*   Updated: 2022/06/02 15:09:22 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res_len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (res_len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, res_len + 1);
	return (res);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	char	*res1;
	char	*res2;
	char	*res3;

	if (ac != 5)
		return (1);
	res1 = ft_strjoin(av[1], av[2]);
	printf("res1:%s\n", res1);
	res2 = ft_strjoin(res1, av[3]);
	printf("res2:%s\n", res2);
	res3 = ft_strjoin(res2, av[4]);
	printf("res3:%s\n", res3);
	return (0);
}
*/
