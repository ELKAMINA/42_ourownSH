/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:04:51 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 21:23:03 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ret;

	if (!lst)
		return (0);
	ret = ft_lstnew((*f)(lst->content));
	if (!ret)
		return (0);
	tmp = ret;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew((*f)(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (ret);
}
