/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:10:44 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 19:08:12 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	res;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size > dst_len)
	{
		res = dst_len + src_len;
		while ((src[i] != '\0') && (dst_len < (size - 1)))
		{
			dst[dst_len] = src[i];
			i++;
			dst_len++;
		}
		dst[dst_len] = '\0';
		return (res);
	}
	else
		return (src_len + size);
}
