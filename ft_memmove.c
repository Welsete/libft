/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:30:41 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 14:31:09 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sc;
	unsigned char	*dst;

	if (!dest && !src)
		return (NULL);
	sc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (dst > sc)
	{
		sc += n - 1;
		dst += n - 1;
		while (n--)
			*dst-- = *sc--;
	}
	else
	{
		while (n--)
			*dst++ = *sc++;
	}
	return (dest);
}
