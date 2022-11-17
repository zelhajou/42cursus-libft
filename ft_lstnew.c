/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:00:21 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/14 15:00:21 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);	
}

// int main()
// {
// 	t_list s;
// 	//s.content = "hello";

// 	t_list *ptr;

	
// 	char *str = "bye bye";
// 	ptr = ft_lstnew(str);
// 	// ptr = ft_lstnew(s.content);
// 	printf("%p", ptr->content);
// }