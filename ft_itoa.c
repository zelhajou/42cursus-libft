/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:29:47 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/09 15:29:47 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_number(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		number;
	int		nb;

	i = 0;
	nb = n;
	number = count_number(n) - 1;
	str = (char *)malloc(sizeof(char) * (count_number(n) + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		nb *= -1;
	while (number >= 0)
	{
		str[number] = (nb % 10) + '0';
		nb = nb / 10;
		number--;
		i++;
	}
	if (n < 0)
		str[0] = '-';
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	int i = 0;
// 	char *str = ft_itoa(' ');
// 	printf("%s", str);
// }