# [libft](https://github.com/zakelhajoui/libft/blob/main/en.subject.pdf)
Libft is a library of various utility functions in C, created as a project for the 42 School curriculum. The library contains custom implementations of standard C library functions, as well as additional functions that can be useful for various programming tasks.




## I. Mandatory part : 
### Part 1 - Libc functions :
The term "**libc**" is commonly used as a shorthand for the "standard C library", a library of standard functions that can be used by all C programs.

```ctype.h``` : This header file defines functions that are used to check or transform characters.

Each functions is receives a character represented as an int, or EOF as an argument. Characters are often manipulated as integers.
EOF normally has the value –1 and that some hardware architectures do not allow negative values to be stored in char variables. Therefore, the character-handling functions manipulate characters as integers.
| No     | Character-handling  |   |
| ------ | ------------------- |  --- |
| 1      | [ft_isalpha](https://github.com/zakelhajoui/libft/blob/main/ft_isalpha.c)      |  |
| 2      | [ft_isdigit](https://github.com/zakelhajoui/libft/blob/main/ft_isdigit.c)      |   |
| 3      | [ft_isalnum](https://github.com/zakelhajoui/libft/blob/main/ft_isalnum.c)      |   |
| 4      | [ft_isascii](https://github.com/zakelhajoui/libft/blob/main/ft_isascii.c)      |   |
| 5      | [ft_isprint](https://github.com/zakelhajoui/libft/blob/main/ft_isprint.c)      |   |
| 6      | [ft_tolower](https://github.com/zakelhajoui/libft/blob/main/ft_tolower.c)      |   |
| 7      | [ft_toupper](https://github.com/zakelhajoui/libft/blob/main/ft_toupper.c)      |  |


<table>
<tr>
<td> Character-handling  </td> <td> Code </td>
</tr>
<tr>
<td> 
 
[ft_isalpha](https://github.com/zakelhajoui/libft/blob/main/ft_isalpha.c)  

</td>
<td>

```c
/*
	ft_isalpha() checks for an alphabetic character
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_isdigit](https://github.com/zakelhajoui/libft/blob/main/ft_isdigit.c)

</td>
<td>

```c
/*
	ft_isdigit() checks for a digit (0 through 9).
*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
```

</td>
</tr>




</table>

```string.h``` : This header file is used to perform operations on the string

There are three types of functions that exist in the string library:
1. the `str` functions manipulate **null-terminated** sequences of characters.
2. the `strn` functions manipulate sequences of **non-null characters**.
3. the `mem` functions manipulate sequences of arbitrary characters without regard to the **null character**.

| No     | String-processing Functions  |  Memory Functions |
| ------ | ------------------- | -------------- |
| 1      | [ft_strlen](https://github.com/zakelhajoui/libft/blob/main/ft_strlen.c)        | [ft_bzero](https://github.com/zakelhajoui/libft/blob/main/ft_bzero.c) |
| 2      | [ft_strchr](https://github.com/zakelhajoui/libft/blob/main/ft_strchr.c)        | [ft_memcmp](https://github.com/zakelhajoui/libft/blob/main/ft_memcmp.c) |
| 3      | [ft_strrchr](https://github.com/zakelhajoui/libft/blob/main/ft_strrchr.c)      | [ft_memchr](https://github.com/zakelhajoui/libft/blob/main/ft_memchr.c) |
| 4      | [ft_strnstr](https://github.com/zakelhajoui/libft/blob/main/ft_strnstr.c)      | [ft_memset](https://github.com/zakelhajoui/libft/blob/main/ft_memset.c) |
| 5      | [ft_strncmp](https://github.com/zakelhajoui/libft/blob/main/ft_strncmp.c)      | [ft_memcpy](https://github.com/zakelhajoui/libft/blob/main/ft_memcpy.c) |
| 6      | [ft_strlcpy](https://github.com/zakelhajoui/libft/blob/main/ft_strlcpy.c)      | [ft_memmove](https://github.com/zakelhajoui/libft/blob/main/ft_memmove.c) |
| 7      | [ft_strlcat](https://github.com/zakelhajoui/libft/blob/main/ft_strlcat.c)      | |

```stdlib.h``` : This is the general purpose standard library header file. It includes functions for type conversion(atof,atoi,etc), memory allocation and deallocation(malloc,calloc,free,etc)

| No     | Type conversion & memory allocation   |
| ------ | ------------------- |
| 1      | [ft_atoi](https://github.com/zakelhajoui/libft/blob/main/ft_atoi.c)      |
| 2      | [ft_calloc](https://github.com/zakelhajoui/libft/blob/main/ft_calloc.c)      |
| 3      | [ft_strdup](https://github.com/zakelhajoui/libft/blob/main/ft_strdup.c)      |

  ### Part 2 - Additional functions :
  
  | No     | Additional functions |
| ------ | ------------------- |
| 1      | [ft_substr](https://github.com/zakelhajoui/libft/blob/main/ft_substr.c)      |
| 2      | [ft_strjoin](https://github.com/zakelhajoui/libft/blob/main/ft_strjoin.c)    |
| 3      | [ft_strtrim](https://github.com/zakelhajoui/libft/blob/main/ft_strtrim.c)    |
| 4      | [ft_split](https://github.com/zakelhajoui/libft/blob/main/ft_split.c)        |
| 5      | [ft_itoa](https://github.com/zakelhajoui/libft/blob/main/ft_itoa.c)          |
| 6      | [ft_strmapi](https://github.com/zakelhajoui/libft/blob/main/ft_strmapi.c)    |
| 7      | [ft_striteri](https://github.com/zakelhajoui/libft/blob/main/ft_striteri.c)  |
| 8      | [ft_putchar_fd](https://github.com/zakelhajoui/libft/blob/main/ft_putchar_fd.c)   |
| 9      | [ft_putstr_fd](https://github.com/zakelhajoui/libft/blob/main/ft_putstr_fd.c)     |
| 10      | [ft_putendl_fd](https://github.com/zakelhajoui/libft/blob/main/ft_putendl_fd.c)  |
| 11      | [ft_putnbr_fd](https://github.com/zakelhajoui/libft/blob/main/ft_putnbr_fd.c)    |

## II - Bonus part :

  | No     | Bonus part |
| ------ | ------------------- |
| 1      | [ft_lstnew](https://github.com/zakelhajoui/libft/blob/main/ft_lstnew.c) |
| 2      | [ft_lstadd_front](https://github.com/zakelhajoui/libft/blob/main/ft_lstadd_front.c)    |
| 3      | [ft_lstsize](https://github.com/zakelhajoui/libft/blob/main/ft_lstsize.c)   |
| 4      | [ft_lstlast](https://github.com/zakelhajoui/libft/blob/main/ft_lstlast.c)        |
| 5      | [ft_lstadd_back](https://github.com/zakelhajoui/libft/blob/main/ft_lstadd_back.c)          |
| 6      | [ft_lstdelone](https://github.com/zakelhajoui/libft/blob/main/ft_lstdelone.c)    |
| 7      | [ft_lstclear](https://github.com/zakelhajoui/libft/blob/main/ft_lstclear.c)  |
| 8      | [ft_lstiter](https://github.com/zakelhajoui/libft/blob/main/ft_lstiter.c)   |


