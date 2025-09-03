/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:20:53 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 13:27:11 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sc;
	unsigned char	*dst;

	if (!dest && !src)
		return (NULL);
	sc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (n--)
		*dst++ = *sc++;
	return (dest);
}
