/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:58:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/12 10:40:25 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_print_str(va_list	list)
{
	char				*str;
	unsigned int		i;

	i = 0;
	str = va_arg(list, char *);
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		i++;
	return (write(1, str, i));
}

int	ft_print_dec(va_list list)
{
	int		i;
	char	*asc;

	i = va_arg(list, int);
	asc = ft_itoa(i);
	i = 0;
	while (asc[i])
		i++;
	write(1, asc, i);
	free (asc);
	return (i);
}

