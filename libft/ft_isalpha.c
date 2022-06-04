/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:25 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/10 20:27:52 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	printf("origin:%d\n", isalpha(av[1][0]));
	printf("made:%d\n", ft_isalpha(av[1][0]));
	return (0);
}
*/
