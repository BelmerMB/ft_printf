/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:58:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/28 17:26:05 by emetras-         ###   ########.fr       */
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

int	ft_print_unsigned (unsigned int nbr)
{
	unsigned int	sz;
	unsigned int	i;
	char			*ptr;

	sz = nbr;
	i = 0;
	while (sz)
	{
		sz = sz /10;
		i++;
	}
	ptr = ft_calloc(i, sizeof (unsigned int));
	if (!ptr)
		return (0);
	while (i-- >= 1)
	{
		ptr[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	i = ft_strlen(ptr);
	write(1, ptr, i);
	free (ptr);
	return (i);
}


