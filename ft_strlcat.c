/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:00:07 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/03 02:07:27 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t len;
	size_t	index;
	
	if (!dst && !dstsize)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	j = 0;
	index = ft_strlen(dst);
	len = ft_strlen(dst);
	while(src[j] != '\0' && j < (dstsize - len - 1))
	{
		dst[index] = src[j];
		index++;
		j++;
	}
	dst[index] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
