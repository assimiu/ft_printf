/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:37:06 by amane             #+#    #+#             */
/*   Updated: 2022/03/14 17:38:56 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_longhex(unsigned long long nb, char c)
{
	size_t	i;

	i = 0;
	if (nb <= 15)
		i += ft_printf_hex((unsigned int) nb, c);
	else
	{
		i += ft_print_longhex((nb / 16), c);
		i += ft_print_longhex((nb % 16), c);
	}
	return (i);
}

int	ft_print_pointer(unsigned long long nb)
{
	ft_printstr("0x");
	ft_print_longhex(nb, 'x');
	return (0);
}
