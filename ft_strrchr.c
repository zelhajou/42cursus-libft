/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:29:24 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/17 19:30:44 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchar(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s);
	while (s[size] >= 0)
	{
		if (s[size] == c)
			return (s + size);
		size--;
	}
	return (s + size);
}
