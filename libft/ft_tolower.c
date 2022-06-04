/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:54:08 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/06 21:19:17 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 0x20);
	return (c);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
//     printf("res:%c\n", ft_tolower(av[1][0]));
//     return (0);
// }
