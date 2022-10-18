/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:29:24 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/18 15:19:53 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchar(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s);
	while (s[size] >= 0)
	{
		if (s[size] == c)
			return ((char *)s + size);
		size--;
	}
	return (0);
}
