/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:36:33 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/13 14:06:41 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	skip_sep(char *str, char c, size_t *index)
{
	while (str[*index] == c || str[*index] == 0x00)
	{
		if (str[*index] == 0x00)
			return (1);
		++*index;
	}
	return (0);
}

static char	**free_res(char	**res)
{
	size_t	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		++i;
	}
	free(res);
	return (NULL);
}

static char	**check_error(char const *s, char c)
{
	char	**res;
	size_t	res_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	res_len = 1;
	i = -1;
	while (s[++i] != 0x00)
	{
		if (s[i] == c)
		{
			if (i == 0)
				--res_len;
			++i;
			++res_len;
			if (skip_sep((char *)s, c, &i))
				--res_len;
		}
	}
	res = (char **)malloc(sizeof(char *) * (res_len + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}

static char	**mk_res(char **res, char c)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	while (res[j][++i] != 0x00)
	{
		if (res[j][i] == c)
		{
			res[j][i++] = 0x00;
			if (skip_sep(res[j], c, &i))
			{
				res[j + 1] = NULL;
				return (res);
			}
			++j;
			res[j] = ft_strdup(&res[j - 1][i]);
			if (res[j] == NULL)
				return (free_res(res));
			i = 0;
		}
	}
	res[j + 1] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	i = 0;
	res = check_error(s, c);
	if (res == NULL)
		return (NULL);
	if (skip_sep((char *)s, c, &i))
	{
		res[0] = NULL;
		return (res);
	}
	res[0] = ft_strdup(&s[i]);
	if (res[0] == NULL)
		return (free_res(res));
	return (mk_res(res, c));
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	char	**res = ft_split(av[1], av[2][0]);

	printf("pointer of res:%p\n", res);
	if (res == NULL)
	{
		printf("res is NULL\n");
		return (0);
	}
	for (int i = 0; res[i] != NULL; ++i)
	{
		printf("res[%d]:%s\n", i, res[i]);
		printf("pointer[%d]:%p\n", i, res[i]);
	}
	printf("free_res(res):%p\n", free_res(res));
	system("leaks -q a.out");
	return (0);
}
*/
