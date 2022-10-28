/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 07:48:23 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/28 19:16:59 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *str_first_set(const char *s1, const char *set)
{
    int     i;
    int     c;
    int     j;
    
    i = 0;
    while (s1[i] != '\0')
    {
      c = 0;
      j = 0;
      while(set[j] != '\0')
      {
        if(set[j] == s1[i])
          c--;
        j++;
      }
      if (c == 0)
         return (char *)&(s1[i]);
      i++;
    }
    return ((char *)s1);
}
char  *str_last_set(const char *s1, const char *set, int len)
{
    int     c;
    int     j;

    while (len--)
    {
      c = 0;
      j = 0;
      while(set[j] != '\0')
      {
        if(set[j] == s1[len])
          c--;
        j++;
      }
      if (c == 0)
        return (char *)&(s1[len]);
    }
    return ((char *)s1);
}

size_t    ft_strlen_stop(const char *s, const char *s2)
{
    size_t    i;

    i = 1;
    while (s < s2)
    {
        i++;
        s++;
    }
    return (i);
}



char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    int     len;
    int     i;
    int loc;
    
    i = 0;
    if (!s1)
        return (NULL);
    len = ft_strlen(s1);

    char *str = str_first_set(s1, set);
    char *str2 = str_last_set(s1, set, len);
    loc = ft_strlen_stop(str, str2);
    ptr = (char *)malloc(sizeof(char) * loc + 1);
    if(ptr == NULL)
      return (NULL);
    while(str <= str2)
    {
      ptr[i] = *str;
      str++;
      i++;
    }
    ptr[i] = '\0';
    return ptr;
}
