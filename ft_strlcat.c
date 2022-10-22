/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:00:07 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/22 02:03:12 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dst, const void *src, size_t dstsize)
{
	size_t	len;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	len = ft_strlen(dst);
}
