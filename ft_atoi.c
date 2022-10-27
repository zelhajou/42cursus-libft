/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:20:39 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/27 13:10:42 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			sign;
	long long	i;
	long long	r;

	i = 0;
	sign = 1;
	r = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-')
	{
			sign *= -1;
			i++;
	}
	else if (str[i] == '+')
	{
			sign *= 1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (sign * r);
}
