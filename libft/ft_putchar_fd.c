/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:15:51 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/14 01:09:18 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int	main(int ac, char **av)
{
	int fd = open("putchar_test.txt", O_RDWR | O_CREAT, S_IREAD | S_IWRITE);
	ft_putchar_fd(av[1][0], fd);
	system("cat putchar_test.txt");
	close(fd);
	return (0);
}
*/
