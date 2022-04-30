/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:38:41 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/07 19:09:10 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const	void *pointer1, const	void *pointer2, size_t size)
{
	unsigned char	*data1;
	unsigned char	*data2;
	size_t			i;

	data1 = (unsigned char *)pointer1;
	data2 = (unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (data1[i] != data2[i])
			return (data1[i] - data2[i]);
		i ++;
	}
	return (0);
}
