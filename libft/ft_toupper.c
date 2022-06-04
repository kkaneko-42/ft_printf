/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:49:09 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/09 11:02:40 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 0x20);
	return (c);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
//     printf("res:%c\n", ft_toupper(av[1][0]));
//     return (0);
// }
