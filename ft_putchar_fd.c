/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:11:51 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/05 02:23:28 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd = open("txt.txt", O_CREAT | O_RDWR);
// 	printf("%d\n", fd);
// 	int fd1 = open("txt1.txt", O_CREAT | O_RDWR);
// 	printf("%d\n", fd1);	
// 	int fd2 = open("txt2.txt", O_CREAT | O_RDWR);
// 	printf("%d\n", fd2);
// 	ft_putchar_fd('X', fd);
// 	while (1);
// }