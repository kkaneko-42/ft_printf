/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:42:34 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/16 17:07:20 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	cnt_res_size(int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = (n < 0);
	while (n != 0)
	{
		res += 1;
		n /= 10;
	}
	return (res);
}

static void	rev_str(char *s)
{
	char	tmp;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		++i;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sgn;
	int		res_size;
	int		i;

	sgn = 1 - (2 * (n < 0));
	res_size = cnt_res_size(n);
	res = (char *)malloc(sizeof(char) * (res_size + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (sgn == -1)
		res[i++] = '-';
	while (i < res_size)
	{
		res[i] = ((n % 10) * sgn) + '0';
		n /= 10;
		++i;
	}
	res[i] = 0x00;
	rev_str(res + (sgn == -1));
	return (res);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	//printf("res:%s\n", ft_itoa(atoi(av[1])));
	printf("res:%s\n", ft_itoa(INT_MAX));
	return (0);
}
*/
