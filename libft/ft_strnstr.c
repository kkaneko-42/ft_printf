/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 06:41:33 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/10 20:28:03 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == 0x00)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != 0x00 && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != 0x00 && haystack[i + j] == needle[j] \
					&& i + j < len)
				++j;
			if (needle[j] == 0x00)
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	printf("origin:%s\n", strnstr(av[1], av[2], atoi(av[3])));
	printf("made:%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}
*/
