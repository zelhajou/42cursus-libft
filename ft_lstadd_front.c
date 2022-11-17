/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:50:11 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/17 20:45:29 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// printf("-------------- \n");

	// printf("%p \n", &lst);
	// printf("%p \n", lst);
	// printf("%p \n", *lst);
	// printf("%p \n", &(*lst));
	// printf("%s \n", (char *)(**lst).next);
	// printf("%p \n", &(**lst));

	// printf("-------------- \n");
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	// printf("%s \n", (*new).content);
	*lst = new;
}
void	del(void *d)
{
	free(d);
}
int main()
{
	t_list *ptr =  ft_lstnew("1");


	printf("ptr address -			%p  \n", &ptr);
	printf("ptr value -			%p  \n", ptr);
	printf("Address derefrencing -		%p  \n---\n", &(*ptr));


	ft_lstadd_front(&ptr, ft_lstnew("2"));
	// ft_lstadd_front(&ptr, ft_lstnew("3"));
	// ft_lstadd_front(&ptr, ft_lstnew("4"));

    ft_lstadd_back(&ptr, ft_lstnew("3"));

	printf("**** %s *** \n\n",(*ft_lstnew("Hello")).content);

	
	
	// printf("%d", ft_lstsize(ptr));
	printf("last one - %s\n", (*ft_lstlast(&(*ptr))).content);



	printf("--- linked list ----- \n");
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}


}