/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:00:03 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/13 14:02:35 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sgn;
	long long	res;

	res = 0;
	sgn = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' \
			|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		sgn *= ',' - str[i];
		++i;
	}
	while (ft_isdigit(str[i]))
	{
		res += str[i] - '0';
		res *= 10;
		++i;
	}
	res /= 10;
	return (sgn * (int)res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	char	str[] = "-2147483648";
	printf("LONG_MIN:%ld\n", LONG_MIN);
	printf("LONG_MAX:%ld\n", LONG_MAX);
	printf("origin:%d\n", atoi(av[1]));
	printf("made:%d\n", ft_atoi(av[1]));
	return (0);
}
*/
