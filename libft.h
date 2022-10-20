/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:53:36 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/20 16:26:12 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/* ****************************** Mandatory part **************************** */

/* ****************************** Libc functions **************************** */
/* ******************************   <ctype.h>    **************************** */

/* -------------------------------------------------------------------------- */
int		ft_isalpha(int c);/* checks whether the operand is alphabetic		  */
/* -------------------------------------------------------------------------- */
int		ft_isdigit(int c);/* checks whether the operand is a digit			  */
/* -------------------------------------------------------------------------- */
int		ft_isalnum(int c);/* checks whether the operand is alphanumeric		  */
/* -------------------------------------------------------------------------- */
int		ft_isascii(int c);/* test for a 7-bit US-ASCII character			  */
/* -------------------------------------------------------------------------- */
int		ft_isprint(int c);/* checks whether the operand is a printable char	  */
/* -------------------------------------------------------------------------- */
int		ft_tolower(int c);/* converts the operand to lowercase				  */
/* -------------------------------------------------------------------------- */
int		ft_toupper(int c);/* converts the operand to uppercase				  */
/* -------------------------------------------------------------------------- */

/* ******************************   <string.h>   **************************** */

/* -------------------------------------------------------------------------- */
size_t	ft_strlen(const char *s);/* finds the length of a string			  */
/* -------------------------------------------------------------------------- */
char	*ft_strchr(const char *s, int c);/* locates byte c in a string,
searching from the beginning 												  */
/* -------------------------------------------------------------------------- */
char	*ft_strrchr(const char *s, int c); /* locates byte c in a string, 
searching from the end														  */
/* -------------------------------------------------------------------------- */
int		ft_strncmp(const char *s1, const char *s2, size_t n);/* compares up to 
the first n bytes of two strings lexicographically							  */
/* -------------------------------------------------------------------------- */

#endif
