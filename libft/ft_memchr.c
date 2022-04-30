/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:09:15 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/07 18:57:53 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryblock, int searchedChar, size_t size)
{
	unsigned char	*data;
	size_t			i;

	data = (unsigned char *)memoryblock;
	i = 0;
	while (size --)
	{
		if (data[i] == (unsigned char)searchedChar)
			return (&data[i]);
		i++;
	}
	return (NULL);
}
