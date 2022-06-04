/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:36 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/10 20:27:40 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("origin:%d\n", isdigit(av[1][0]));
	printf("made:%d\n", ft_isdigit(av[1][0]));
	return (0);
}
*/
