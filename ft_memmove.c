/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:55:32 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/04 17:16:39 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_memmove() copies len bytes from string src to string dst. The two strings 
	may overlap; the copy is always done in a non-destructive manner.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dst;
	if (dst <= src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			s2[len] = s1[len];
	}
	return (dst);
}
