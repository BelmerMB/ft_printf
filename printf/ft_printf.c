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

#include <unistd.h>
#include <stdarg.h>

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
			count += write(1, &format[i], 1);//find another way, 
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
	int	d;
	if(*c == '%')
		return (write(1, c, 1));
	if(*c == 'c')
	{
		d = va_arg(doguinho, int);
		return (write(1, &d, 1));
	}
}