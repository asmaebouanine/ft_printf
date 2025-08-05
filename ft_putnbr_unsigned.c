/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:11:30 by asbouani          #+#    #+#             */
/*   Updated: 2024/11/21 20:45:22 by asbouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_putnbr_unsigned(nb / 10);
		count += ft_putchar(nb % 10 + 48);
	}
	else
		count += ft_putchar (nb + 48);
	return (count);
}
