/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:21:59 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/04 15:22:05 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1_size;
	size_t	s2_size;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!s)
		return (NULL);
	ft_memcpy(s, s1, s1_size);
	ft_memcpy((s + s1_size), s2, s2_size + 1);
	return (s);
}
