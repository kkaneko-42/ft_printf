/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:12:32 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/17 02:19:24 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	uint_base_len(size_t n, const int base)
{
	int	res;

	res = (n == 0);
	while (n != 0)
	{
		++res;
		n /= base;
	}
	return (res);
}

static void	rec_uintput_base(size_t n, char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n < base_len)
		ft_putchar_fd(base[n], 1);
	else
	{
		rec_uintput_base(n / base_len, base);
		rec_uintput_base(n % base_len, base);
	}
}

int	ft_putuint_base(size_t n, char *base)
{
	if (base != NULL)
	{
		rec_uintput_base(n, base);
		return (uint_base_len(n, ft_strlen(base)));
	}
	return (0);
}
