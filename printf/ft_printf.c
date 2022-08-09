/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:12:20 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/02 13:12:20 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_arguments(const char	*c, va_list	doguinho);

int	ft_printf(const char *format, ...)
{
	va_list	dog;
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_start(dog, format);
	while(format[i])
	{
		if(format[i] != '%')
			//I have to print a hole string at once to be more efficient
			count += write(1, &format[i], 1);	//find another way, because Write is too slow.
		else
		{
			i++;
			count += ft_arguments(&format[i], dog);
		}
		i++;
	}
	return (count);
}

static int ft_arguments(const char *c, va_list doguinho)
{
	int ax;

	if(*c == '%')
		return (write(1, c, 1));
	if(*c == 'c')  //put in to another file
	{
		ax = va_arg(doguinho, int);
		return (write(1, &ax, 1));
	}
	if(*c == 's')
		return (ft_print_str(doguinho));
	if (*c == 'd')
		return (ft_print_dec(doguinho));

	return (0); //aaaaaaaaaaaaaaa
}