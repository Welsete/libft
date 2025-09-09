/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:10:26 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/09 15:58:57 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = 0;
}
#include <stdio.h>
#include <string.h> // só pra comparar resultado
#include "libft.h"

int main(void)
{
    char buf1[10] = "abcdef";
    char buf2[10] = "abcdef";

    // usando sua ft_bzero
    ft_bzero(buf1, 3);
    printf("ft_bzero -> %s\n", buf1); // esperado: "" (string vazia) porque zerou logo no índice 0

    // usando a bzero da libcsdadasdasd
    bzero(buf2, 3);
    printf("bzero    -> %s\n", buf2);

    // caso parcial (zerando só do meio pra frente)
    char buf3[10] = "abcdef";
    ft_bzero(buf3 + 2, 3); // começa a zerar no índice 2
    printf("parcial  -> a%c%c%c%s\n", buf3[1], buf3[2], buf3[3], buf3 + 4);
    // esperado: "a" depois de zeros invisíveis, depois "f"

    return (0);
}
