/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:42:59 by wtavares          #+#    #+#             */
/*   Updated: 2025/09/03 22:46:12 by wtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	char			*sop;
	size_t			i;

	cc = (unsigned char)c;
	sop = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			sop = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		sop = (char *) &s[i];
	return (sop);
}
