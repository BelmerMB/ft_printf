/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:52:32 by emetras-          #+#    #+#             */
/*   Updated: 2022/08/03 14:02:37 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"
#include <stdio.h>
int main()
{
    printf("________________________\n\n");
    printf("\noriginal return = %d\n", printf("print           = %%"));
    printf("\nmy       return = %d\n", ft_printf("print           = %%"));
    printf("\n________________________\n\n");
    printf("\noriginal return = %d\n", printf("print           = %c", 50));
    printf("\nmy       return = %d\n", ft_printf("print           = %c", 50));
    printf("\n________________________\n\n");
    return (0);
}