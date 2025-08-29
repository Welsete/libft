/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 23:10:37 by wtavares          #+#    #+#             */
/*   Updated: 2025/08/28 04:00:16 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	int	*p1;
	int	*p2;

	a = 4;
	b = 3;
	p1 = &a; // p1 aponta pra endereco da memoria de a (ex 5000)
	p2 = p1; // p2 tambem aponta pro endereco da memoria a (ex 5000)
	*p2 = *p2 + 3; // conteudo apontado por p2(4 [que seria valor da variavel a]). 
	// *p1 a mesma coisa ou seja 4+3 sendo 7. A partir daqui o conteudo de A vale 7, A = 7.
	b = b * (*p1); // b sendo 3 e multiplicando pelo conteudo apontado por p1 que seria o A (7).
	(*p2)++;//Aqui avancamos o conteudo apontado por p2 em 1, ou seja 7 + 1 = 8, entao A passa ser 8.
	p1 = &b;// Aqui o ponteiro de p1 passa apontar pra endereco de B, com o conteudo 21.
	printf("%d %d\n", *p1, *p2); // *p1 como foi atribuido apontando pra B = 21 e *p2 continua sendo 8.
	printf("%d %d\n", a, b); // Conteudo de A passa ser 8 por conta da soma e do avanco de +1.
	//						 B passa ser 21 por conta da multiplicacao anterior.
	//						 Entao saida fica 21, 8 && 8, 21.
}
