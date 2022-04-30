/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:23:41 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 14:39:53 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	offset;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	offset = d_len;
	while (i < (size - d_len - 1) && src[i])
	{
		dest[offset] = src[i];
		i++;
		offset++;
	}
	dest[offset] = '\0';
	return (d_len + s_len);
}
