/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:35:26 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/09 12:50:27 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int	main(int ac, char **av)
{
	int fd = open("putstr_test.txt", O_RDWR | O_CREAT, S_IREAD | S_IWRITE);
	ft_putstr_fd(av[1], fd);
	system("cat putstr_test.txt");
	close(fd);
	return (0);
}
*/
