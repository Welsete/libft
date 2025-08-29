/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 20:14:10 by wtavares          #+#    #+#             */
/*   Updated: 2025/08/28 22:33:03 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	int_soma_sub(int x, int y, int *soma, int *sub)
{
	*soma = x + y;
	*sub = x - y;
}

int	main(void)
{
	int	subsbs;
	int	adicao;

	int_soma_sub(10, 20, &subsbs, &adicao);
	printf("\n%d\n%d\n\n", subsbs, adicao);
	return (0);
}
