/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02 - Vetores e exemplo pratico.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 00:08:16 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/02 17:47:27 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	soma_vetor_com_escalar(int	v[], int n, int escalar)
{
	int	i;

	i = 0;
	while (i < n)
	{
		v[i] += escalar;
		i++;
	}
}

void	print_vetor(const int *v, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]); // v[] eh a mesma coisa que *v!!!
		i++;
	}
	puts("");
}

void	desaloca_vetor(int **v)
{
	free(*v);
	*v = NULL;
}

int	main(void)
{
	int i;

	i = 0;
	puts("### VETOR ESTATICO");
	int vs[5] = {0, 10, 20, 30, 40};
	
	print_vetor(vs, 5);
	soma_vetor_com_escalar(vs, 5, 9);
	print_vetor(vs, 5);
	
	puts("### VETOR DINAMICO");
	int *vw = malloc(5 * sizeof(int));
	while(i < 5)
	{
		vw[i] = i * 100;
		i++;
	}
	
	print_vetor(vw, 5);
	soma_vetor_com_escalar(vw, 5, 10);
	print_vetor(vw, 5);
	desaloca_vetor(&vw); // Limpamo a bagunca
}