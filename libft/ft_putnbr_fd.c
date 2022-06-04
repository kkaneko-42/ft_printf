/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/17 02:15:03 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec_put(long long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		rec_put(n / 10, fd);
		rec_put(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	rec_put((long long)n, fd);
}
/*
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int	main(int ac, char **av)
{
	int fd = open("putnbr_test.txt", O_RDWR | O_CREAT, S_IREAD | S_IWRITE);
	ft_putnbr_fd(atoi(av[1]), fd);
	system("cat putnbr_test.txt");
	close(fd);
	return (0);
}
*/
