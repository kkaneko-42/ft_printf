/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:16 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/17 02:19:46 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define DECI "0123456789"
# define HEXA_L "0123456789ABCDEF"
# define HEXA_S "0123456789abcdef"
# define NUL_STR "(null)"
# include <stdarg.h>
# include <stddef.h>
typedef unsigned int	t_uint;
int	ft_printf(const char *format, ...);
int	ft_putuint_base(size_t n, char *base);
int	ft_putint(int n);

#endif
