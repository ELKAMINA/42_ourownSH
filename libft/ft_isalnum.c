/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:03 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/07 17:15:51 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int character)
{
	if ((character >= '0' && character <= '9')
		|| (character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	else
		return (0);
}
