/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:37:26 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/07 19:32:08 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*sent;
	unsigned char	character;
	size_t			i;
	int				j;

	sent = (char *)s;
	character = (unsigned char)c;
	i = 0;
	j = -1;
	while (i <= ft_strlen(s))
	{
		if (sent[i] != character)
			i++;
		else
		{
			j = i;
			i++;
		}
	}
	if (j == -1)
		return (NULL);
	return (&sent[j]);
}
