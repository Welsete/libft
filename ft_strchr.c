/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:21:57 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 22:27:16 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*str;
	unsigned char	cc;

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
