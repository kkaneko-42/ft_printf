/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 09:02:33 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/06 21:43:17 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c_buf;
	size_t			i;

	c_buf = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c_buf[i] = 0;
		++i;
	}
}
