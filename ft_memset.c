/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:28:07 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/19 19:42:24 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stddef.h>
void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	char *obj = (char *)s;
	while(i < n)
	{
		obj[i] = c;
		i++;
	}
	return (obj);
}

int	main(void)
{
	char *s = "HEEEELlloo";
	ft_memset(s, 'z', 3);
	printf("%s", s);
}
