/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:31:40 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/03 02:26:45 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	ft_memcpy() function copies n bytes from memory area src to memory area dest
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
