/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:03:10 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/06 01:49:33 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
// char	f(unsigned int s, char c)
// {
// 	return (c + s);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	
	i = 0;
	str = malloc(sizeof(char) * strlen(s) + 1);
	if (!str)
		return (NULL);
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char *ret;

// 	ret = ft_strmapi("abc", &f);
// 	printf("%s", ret);
// }