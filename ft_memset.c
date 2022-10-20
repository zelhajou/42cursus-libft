/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:28:07 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/20 01:41:58 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*obj;

	i = 0;
	obj = (char *)s;
	while (i < n)
	{
		obj[i] = c;
		i++;
	}
	return (obj);
}