/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 23:02:35 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 23:06:21 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *base, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *) base);
	i = 0;
	while (base[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && base[i + j] && find[j]
			&& base[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return ((char *)&base[i]);
		i++;
	}
	return (NULL);
}
