/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:52:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/15 13:48:06 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
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

    printf("Decimal test - d\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %d", 0));
    //Original function return error when tries to print "-2147483648" and "2147483648"
    // format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long int’ = "-2147483648" and "2147483648"
    printf("\nmy       return = %d \n", ft_printf("My print        = %d", 0));
    printf("\n________________________\n\n");
    
    printf("Unsigned int test - u\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %u", -245687));
    printf("\nmy       return = %d\n", ft_printf("My print        = %u", -245687));
    printf("\n________________________\n\n");

    printf("MULTI TEST - u\n\n");
    printf("\nOriginal return = %d\n", printf   ("Original print  = %u, %s, %%, %c", -245687, "string", 's'));
    printf("\nmy       return = %d\n", ft_printf("My print        = %u, %s, %%, %c", -245687, "string", 's'));
    printf("\n________________________\n\n");

    
}
