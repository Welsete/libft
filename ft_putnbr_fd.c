/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:54:09 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/04 15:54:22 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_long;

	n_long = (long) n;
	if (n < 0)
	{
		n_long *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n_long >= 10)
		ft_putnbr_fd((n_long / 10), fd);
	ft_putchar_fd((n_long % 10 + '0'), fd);
}
