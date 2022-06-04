/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 07:24:53 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 16:55:47 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	char	*c_res;
	size_t	i;

	res = malloc(size * count);
	if (res == NULL)
		return (NULL);
	c_res = (char *)res;
	i = 0;
	while (i < count * size)
	{
		c_res[i] = 0;
		++i;
	}
	return (res);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	char	*res_ori = (char *)calloc(atoi(av[1]) , atoi(av[2]));
	char	*res_made = (char *)calloc(atoi(av[1]) , atoi(av[2]));

	printf("ori:");
	for (int i = 0; i < atoi(av[1]); ++i)
		printf("%d ", (int)res_ori[i]);
	putchar('\n');
	printf("made:");
	for (int i = 0; i < atoi(av[1]); ++i)
		printf("%d ", (int)res_made[i]);
	putchar('\n');
	free(res_ori);
	free(res_made);
	system("leaks -q a.out");
	return (0);
}
*/
