/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:13:48 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/17 02:19:18 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	int_len(int n)
{
	int	res;

	res = (n < 0 || n == 0);
	while (n != 0)
	{
		++res;
		n /= 10;
	}
	return (res);
}

static void	rec_intput(long long n)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n *= -1;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', 1);
	else
	{
		rec_intput(n / 10);
		rec_intput(n % 10);
	}
}

int	ft_putint(int n)
{
	rec_intput((long long)n);
	return (int_len(n));
}
