/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:21:57 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 22:23:39 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*str;
	unsigned char	cc;

	if (!s)
		return (NULL);
	str = s;
	cc = (unsigned char) c;
	while (*str)
	{
		if (*str == cc)
			return ((char *) str);
		str++;
	}
	if (*str == cc)
		return ((char *) str);
	return (NULL);
}
