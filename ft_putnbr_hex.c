/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:20 by asbouani          #+#    #+#             */
/*   Updated: 2024/11/22 18:09:21 by asbouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long nb, const char s)
{
	int	count;

	count = 0;
	if (nb > 15)
	{
		count += ft_putnbr_hex(nb / 16, s);
		count += ft_putnbr_hex(nb % 16, s);
	}
	else
	{
		if (nb < 10)
			count += ft_putchar(nb + 48);
		else
		{
			if (s == 'x' || s == 'p')
				count += ft_putchar (nb - 10 + 'a');
			else if (s == 'X')
				count += ft_putchar (nb - 10 + 'A');
		}
	}
	return (count);
}
