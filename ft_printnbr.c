/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:08:13 by amane             #+#    #+#             */
/*   Updated: 2022/03/14 15:45:07 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_printchar('-');
	}
	if (nb >= 0 && nb <= 9)
		return (ft_printchar('0' + nb));
	i += ft_printnbr(nb / 10);
	i += ft_printnbr(nb % 10);
	return (i);
}
