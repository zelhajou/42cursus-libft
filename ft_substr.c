/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:41:59 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/19 20:43:33 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	substr() is used for string slicing. It can be used to extract a part of 
	a string.

	s:		The string from which to create the substring.
	start:	The start index of the substring in the string ’s’.
	len:	The maximum length of the substring.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*substr;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[++i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
	}
	substr[j] = '\0';
	return (substr);
}
