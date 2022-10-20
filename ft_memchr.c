/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:55:53 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/20 04:55:55 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		n;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while(i < n)
	{
		if(s[i] == (char)c)
			return (&ptr[i])
		i++;
	}
	return (0);
}
