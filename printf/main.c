/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:52:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/05 13:05:21 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"
#include <stdio.h>

void main(void)
{
                //Single test
    printf("________________________\n\n");
    printf("percentage  test - %%\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %%"));
    printf("\nmy       return = %d\n", ft_printf("My print        = %%"));
    printf("\n________________________\n\n");
    
    printf("Caracter  test - c\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %c", 68));
    printf("\nmy       return = %d\n", ft_printf("My print        = %c", 68));
    printf("\n________________________\n\n");
    
    printf("String test - s\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %s", "teste de 36 letras"));
    printf("\nmy       return = %d\n", ft_printf("My print        = %s", "teste de 36 letras"));
    printf("\n________________________\n\n");

    printf("Empty String test - s\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %s", ""));
    printf("\nmy       return = %d\n", ft_printf("My print        = %s", ""));
    printf("\n________________________\n\n");

}
