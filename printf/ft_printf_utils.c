/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:58:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/08 13:58:24 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(va_list	list)
{
	char				*str;
	unsigned int		i;

	i = 0;
	str = va_arg(list, char *);
	while (str[i])
		i++;
	return (write(1, str, i));
}

int	ft_print_dec(va_list list)
{
	int	i;

	i = va_arg(list, int);
	
}