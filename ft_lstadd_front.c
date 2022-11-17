/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:50:11 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/14 22:50:11 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list *lst = ft_lstnew("Hello");

	printf("%p \n", &lst);
	printf("%s \n", (char *)*lst->content);

	ft_lstadd_front(&lst, ft_lstnew("hehehe"));
	ft_lstadd_front(&lst, ft_lstnew("BYE"));
	ft_lstadd_front(&lst, ft_lstnew("ndndnd"));
	while(lst)
	{
		printf("%s \n ", (char *)lst->content);
		lst = lst->next;
	}
}