/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 04:11:53 by amane             #+#    #+#             */
/*   Updated: 2022/03/14 16:26:19 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	printf("\n");
	ft_printf("== ola mundo %%  |%c|%s|%X|%x|%d| ===", 'B', "OLA MUNDO", 123343, 12343, 5454);
	printf("\n");printf("\n");
	return (0);
}
