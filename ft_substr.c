/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:30:15 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/04 14:30:34 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	copy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	copy_len = s_len - start;
	if (len > copy_len)
		len = copy_len;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, (s + start), len);
	return (str);
}
