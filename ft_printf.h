/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:17:43 by asbouani          #+#    #+#             */
/*   Updated: 2024/11/24 13:42:16 by asbouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_printf(const char *str, ...);
int	ft_putnbr_hex(unsigned long nb, const char s);
int	ft_putnbr_unsigned(unsigned int nb);
#endif
