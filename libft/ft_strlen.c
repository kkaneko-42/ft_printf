/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:15 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/09 11:40:47 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	res;

	res = 0;
	while (s[res] != 0x00)
		++res;
	return (res);
}
/*
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	printf("origin:%ld\n", strlen(NULL));
	printf("made:%ld\n", ft_strlen(av[1]));
}
*/
