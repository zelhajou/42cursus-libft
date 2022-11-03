/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:28:07 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/02 19:18:22 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	ft_memset() sets the first len bytes of the memory area pointed to by 
	s to the value specified by c
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*obj;

	i = 0;
	obj = (char *)s;
	while (i < n)
	{
		obj[i] = c;
		i++;
	}
	return (obj);
}
