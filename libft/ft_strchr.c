/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:57:44 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 17:09:57 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0x00)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		++i;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    printf("res:%s\n", ft_strchr(av[1], av[2][0]));
    return (0);
}
*/
