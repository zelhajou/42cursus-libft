/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:53:42 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/19 20:42:34 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	pos = ft_lstlast(*lst);
	pos->next = new;
}
