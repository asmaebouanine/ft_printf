/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:27:36 by asbouani          #+#    #+#             */
/*   Updated: 2024/11/25 21:29:26 by asbouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char *str, va_list args)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*str == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*str == 'd' || *str == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*str == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putnbr_hex(va_arg(args, unsigned long), *str);
	}
	else if (*str == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (*str == 'x' || *str == 'X')
		count += ft_putnbr_hex(va_arg(args, unsigned int), *str);
	else if (*str == '%')
		count += ft_putchar('%');
	return (count);
}

int	isformat(char c)
{
	char	*format;

	format = "cspdiuxX%";
	while (*format)
	{
		if (*format == c)
			return (1);
		format++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	count = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (isformat(str[i + 1]))
				count += print_format(&str[++i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
