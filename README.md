<div align="center">
	
![ascii-text-art](https://github.com/zelhajou/libft/assets/39954629/8271db59-ccf2-4d99-a843-cea22c51e848)

</div>

# Overview
Libft is a library of various utility functions in C, created as a project for the 42 School curriculum. The library contains custom implementations of standard C library functions, as well as additional functions that can be useful for various programming tasks.

# I. Mandatory part : 
## Part 1 - Libc functions :
The term "**libc**" is commonly used as a shorthand for the "standard C library", a library of standard functions that can be used by all C programs.

```ctype.h``` : This header file defines functions that are used to check or transform characters.

Each functions is receives a character represented as an int, or EOF as an argument. Characters are often manipulated as integers.
EOF normally has the value –1 and that some hardware architectures do not allow negative values to be stored in char variables. Therefore, the character-handling functions manipulate characters as integers.

<details>

<summary> Character-handling 

[ft_isalpha](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isalpha.c), [ft_isdigit](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isdigit.c), [ft_isalnum](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isalnum.c), [ft_isascii](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isascii.c), [ft_isprint](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isprint.c), [ft_tolower](https://github.com/zakelhajoui/libft/blob/main/libft/ft_tolower.c), [ft_toupper](https://github.com/zakelhajoui/libft/blob/main/libft/ft_toupper.c)


</summary>

<table>
<tr>
<td> Character-handling  </td> <td> Code </td>
</tr>
<tr>
<td> 
 
[ft_isalpha](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isalpha.c)  

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
 
[ft_isdigit](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isdigit.c)

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

<tr>
<td> 
 
[ft_isalnum](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isalnum.c)

</td>
<td>

```c
/*
	ft_isalnum() checks for an alphanumeric character; 
	it is equivalent to (ft_isalpha(c) || ft_isdigit(c)).
*/

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_isascii](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isascii.c) 

</td>
<td>

```c
/*
	ft_isascii() checks whether c is a 7-bit unsigned char value that fits into 
	the ASCII character set.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

```

</td>
</tr>

<tr>
<td> 
 
[ft_isprint](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isprint.c)

</td>
<td>

```c
/*
	ft_isprint() checks for any printable character including space.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_tolower](https://github.com/zakelhajoui/libft/blob/main/libft/ft_tolower.c) 

</td>
<td>

```c
/*
	ft_tolower() converts the letter c to lower case, if possible.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_toupper](https://github.com/zakelhajoui/libft/blob/main/libft/ft_toupper.c)

</td>
<td>

```c
/*
	ft_toupper() converts the letter c to upper case, if possible.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
```

</td>
</tr>


</table>

</details>




```string.h``` : This header file is used to perform operations on the string

There are three types of functions that exist in the string library:
1. the `str` functions manipulate **null-terminated** sequences of characters.
2. the `strn` functions manipulate sequences of **non-null characters**.
3. the `mem` functions manipulate sequences of arbitrary characters without regard to the **null character**.


<details>
	<summary>
String-processing Functions	
	</summary>
	<table>
<tr>
<td> String-processing Functions </td> <td> Code </td>
</tr>

<tr>
<td> 
 
[ft_strlen](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlen.c)

</td>
<td>

```c
/*
	strlen() - calculate the length of a string
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
```

</td>
</tr>


<tr>
<td> 
 
[ft_strchr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strchr.c)

</td>
<td>

```c
/*
	ft_strchr() returns a pointer to the first occurrence
    of the character c in the string s.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_strrchr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strrchr.c) 

</td>
<td>

```c
/*
	ft_strrchr() returns a pointer to the last occurrence
	of the character c in the string s
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char *)s + size);
		size--;
	}
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
 [ft_strnstr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strnstr.c)

</td>
<td>

```c
/* 
	ft_strnstr() Find the first substring in a length-limited string
	big:	The string to be searched
	little:	The string to search for
	len:	the maximum number of characters to search
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while ((big[i] != '\0') && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_strncmp](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strncmp.c)  

</td>
<td>

```c
/*
    ft_strcmp() compares the two strings s1 and s2. It returns an integer less
	than, equal to, or greater than zero if s1 is found, respectively, 
	to be less than, to match, or be greater than s2.
	
	ft_strncmp() is similar, except it only compares the first (at most) n bytes 
	of s1 and s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_strlcpy](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlcpy.c)  

</td>
<td>

```c
/*
	ft_strlcpy() copies up to size - 1 characters from the NUL-terminated 
	string src to dst, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_strlcpy](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlcpy.c)  

</td>
<td>

```c
/*
	ft_strlcpy() copies up to size - 1 characters from the NUL-terminated 
	string src to dst, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_strlcat](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlcat.c)  

</td>
<td>

```c
/*
	ft_strlcat() appends the NUL-terminated string src to the end of dst.It will
	append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < dstsize && *dst)
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (j < dstsize - i - 1)
			*dst ++ = src[j];
		j++;
	}
	*dst = '\0';
	return (i + j);
}
```

</td>
</tr>

</table>

</details>


<details>
	<summary>
Memory Functions	
	</summary>

 <table>
<tr>
<td> Memory Functions </td> <td> Code </td>
</tr>

<tr>

<td> 
 
[ft_bzero](https://github.com/zakelhajoui/libft/blob/main/libft/ft_bzero.c)

</td>
<td>

```c
/*
	ft_bzero() erases the data in the n bytes of the memory starting at 
	the location pointed to by s, by writing zeros (bytes containing '\0') 
	to that area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
```

</td>
</tr>

<tr>

<td> 
 
[ft_memcmp](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memcmp.c)

</td>
<td>

```c
/*
       The memcmp() function compares the first n bytes (each interpreted 
       as unsigned char) of the memory areas s1 and s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*obj1;
	unsigned char	*obj2;

	i = 0;
	obj1 = (unsigned char *)s1;
	obj2 = (unsigned char *)s2;
	while (i < n)
	{
		if (obj1[i] != obj2[i])
			return (obj1[i] - obj2[i]);
		i++;
	}
	return (0);
}
```

</td>
</tr>

<tr>

<td> 
 
[ft_memchr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memchr.c)

</td>
<td>

```c
/*
	ft_memchr() scans the initial n bytes of the memory area pointed to by s 
	for the first instance of c.  Both c and the bytes of the memory area 
	pointed to by s are interpreted as unsigned char.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*obj;

	i = 0;
	obj = (unsigned char *)s;
	while (i < n)
	{
		if (obj[i] == (unsigned char)c)
			return (&obj[i]);
		i++;
	}
	return (0);
}
```

</td>
</tr>

<tr>

<td> 
 
[ft_memset](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memset.c)

</td>
<td>

```c
/* 
	ft_memset() sets the first len bytes of the memory area pointed to by 
	s to the value specified by c
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*obj;

	i = 0;
	obj = (unsigned char *)s;
	while (i < n)
	{
		obj[i] = (unsigned char)c;
		i++;
	}
	return (obj);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_memcpy](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memcpy.c)

</td>
<td>

```c
/* 
	ft_memcpy() function copies n bytes from memory area src to memory area dest
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	if (!dst && !src)
		return (0);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s1 == s2)
		return (s1);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_memmove](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memmove.c)

</td>
<td>

```c
/*
	ft_memmove() copies len bytes from string src to string dst. The two strings 
	may overlap; the copy is always done in a non-destructive manner.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	if (dst <= src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			s2[len] = s1[len];
	}
	return (dst);
}
```

</td>
</tr>


</table>

</details>



```stdlib.h``` : This is the general purpose standard library header file. It includes functions for type conversion(atof,atoi,etc), memory allocation and deallocation(malloc,calloc,free,etc)

<details>
	<summary>
		Type conversion & memory allocation 
	</summary>
 <table>
<tr>
<td> Type conversion & memory allocation </td> <td> Code </td>
</tr>

<tr>
<td> 
 
[ft_atoi](https://github.com/zakelhajoui/libft/blob/main/libft/ft_atoi.c) 
</td>
<td>

```c
/*
	ft_atoi() convert a string to an integer
*/

#include "libft.h"

static int	skip_space(int *i, const char *str)
{
	int	sign;

	sign = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int			sign;
	int			i;
	long long	res;
	long long	prev;
	long long	tmp;

	i = 0;
	res = 0;
	sign = skip_space(&i, str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = res;
		res = res * 10 + str[i] - '0';
		tmp = res / 10;
		if (tmp != prev)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		i++;
	}
	return (sign * res);
}
```

</td>
</tr>

<tr>
<td> 
 
[ft_calloc](https://github.com/zakelhajoui/libft/blob/main/libft/ft_calloc.c)  
</td>
<td>

```c
/*
	ft_calloc() — Allocates the space for elements of an array. 
	Initializes the elements to zero and returns a pointer to the memory.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

```

</td>
</tr>

<tr>
<td> 
 
[ft_strdup](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strdup.c)
</td>
<td>

```c
/*
	strdup() returns a pointer to a new string which is a duplicate 
	of the string s.  Memory for the new string is obtained with malloc.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	size = ft_strlen(src);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
```

</td>
</tr>


</table>

</details>


## Part 2 - Additional functions :
  
  | No     | Additional functions |
| ------ | ------------------- |
| 1      | [ft_substr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_substr.c)      |
| 2      | [ft_strjoin](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strjoin.c)    |
| 3      | [ft_strtrim](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strtrim.c)    |
| 4      | [ft_split](https://github.com/zakelhajoui/libft/blob/main/libft/ft_split.c)        |
| 5      | [ft_itoa](https://github.com/zakelhajoui/libft/blob/main/libft/ft_itoa.c)          |
| 6      | [ft_strmapi](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strmapi.c)    |
| 7      | [ft_striteri](https://github.com/zakelhajoui/libft/blob/main/libft/ft_striteri.c)  |
| 8      | [ft_putchar_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putchar_fd.c)   |
| 9      | [ft_putstr_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putstr_fd.c)     |
| 10      | [ft_putendl_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putendl_fd.c)  |
| 11      | [ft_putnbr_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putnbr_fd.c)    |

# II - Bonus part :

  | No     | Bonus part |
| ------ | ------------------- |
| 1      | [ft_lstnew](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstnew.c) |
| 2      | [ft_lstadd_front](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstadd_front.c)    |
| 3      | [ft_lstsize](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstsize.c)   |
| 4      | [ft_lstlast](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstlast.c)        |
| 5      | [ft_lstadd_back](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstadd_back.c)          |
| 6      | [ft_lstdelone](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstdelone.c)    |
| 7      | [ft_lstclear](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstclear.c)  |
| 8      | [ft_lstiter](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstiter.c)   |


# Resources

- [Makefile](https://github.com/n1kito/Makefile)

# Notes

## **Computer Architecture:** 

- Is how processor is designed to perform tasks and different architectures are good at different tasks.

- **Von Neumann Architecture** is the basic design of a computer system. It is named after the Hungarian mathematician John Von Neumann, who first described it in 1945.
  
![Von-Neumann-Architecture](https://github.com/user-attachments/assets/782a9de3-c595-41ef-a494-4845c54a9882)


Any computer system to be useful, it needs a **storage - storage for data**. A computer needs **primary storage** for any data. that it needs access quickly. this includes the start-up instructions the operating system, **Program** that are running and any associated data.

There are tow main types of **Primary storage : RAM - ROM**

**Program** : is a set of functions to perform a task

**Function** A subprogram that returns a value to the main program

- is a closed entity that has :
    - Input date : the parameters.
    - A piece of output data : the return value.
- **Parameters** Values that a main program sends to subprograms for them to use.

### **RAM :**

Ram is a part of the main memory in a computer system.

When a program is loaded, it is copied from **secondary storage**, Such as a hard-disk. Any data is associated with the program will also be stored in **RAM** so that the **CPU** can access both the data and instructions

### **The units of a data storage :**

**Computer uses electronic circuits etched onto computer chips to store data and instructions.**

these circuits electronic switches made from tiny transistors Each switch can be in one of two states: ON or OFF.

The two states are represented by the number 1 or 0. A computer uses combinations of these 1s and 0s to represent data and instructions.

There i a number system that only uses the two values 1 and 0. it is called the **binary number system** and it is used to describe the on/off status of all the switches in a computer.

**1** binary digit is called a **bit,** computer often group **8 bits** together as one unit of data .

These 8 bits together are called a byte.

![bytes-not-bits](https://github.com/user-attachments/assets/3a58d4d1-d5b1-4ead-8a70-0107b8948f91)

![bytes](https://github.com/user-attachments/assets/e2e83ed6-7f40-4dfa-9f33-755a030f45a8)


![many-meanings](https://github.com/user-attachments/assets/05a48a7a-2c20-4c26-8b93-4256c4c2f115)

## Data Storage

Recall that the most basic unit of memory, the bit, has two possible states, **“on” or “off”**. If we used one bit to store a number, we could use each different state to represent a different number. For example, a bit could be used to represent the numbers 0, when the bit is off, and 1, when the bit is on.

We will need to store numbers much larger than 1; to do that we need more bits.

### **Numbers :**

If we use two bits together to store a number, each bit has two possible states, so there are four possible combined states:

- both bits off,
- first bit off and second bit on,
- first bit on and second bit off,
- or both bits on.

The settings for a series of bits are typically written using a 0 for off and a 1 for on. For example, the four possible states for two bits are 00, 01, 10, 11. This representation is called **binary** notation.

### **Integers**

![integers](https://github.com/user-attachments/assets/af62643e-0fa1-42a6-bbe6-1dfd1844a571)

Integers are commonly stored using a word of memory, which is 4 bytes or 32 bits, so integers from 0 up to 4,294,967,295

in the decimal system we are used to using 10 symbols or values : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.

we use the symbols to write numbers

|100s|10s|1s|
|---|---|---|
|5|2|7|

in binary we just have two symbols or values, `o` and `1`. this means that in binary number system each column heading is twice as big as the previous one as we move from right to left.

|128|64|32|16|8|4|2|1|
|---|---|---|---|---|---|---|---|
|0|0|1|0|0|1|1|1|

how convert : 32 + 4 + 2 +1 = 39

100111 = 39.

- Convert the decimal number 142 into binary

is 128 smaller than 142 ?

yes it we re record 1 in the first column from left-hand side.

|128|64|32|16|8|4|2|1|
|---|---|---|---|---|---|---|---|
|1||||||||

142 - 128 = 14

we subtract 128 from 142, to leave a remainder of 14.

we now check 14 against the next column value

|128|64|32|16|8|4|2|1|
|---|---|---|---|---|---|---|---|
|1|0|0|0|1||||

14 - 8 = 6

……

|128|64|32|16|8|4|2|1|
|---|---|---|---|---|---|---|---|
|1|0|0|0|1|1|1|0|

![signed-integers](https://github.com/user-attachments/assets/9321499a-f97e-46ca-bffe-ca53af9497fa)

![little-big-endian](https://github.com/user-attachments/assets/2499a68c-bd14-4e6a-a522-4a269b3900db)



### **Characters :**


Text is stored on a computer by first converting each character to an integer and then storing the integer.

Example : to store the letter ‘A’, we will actually store the number 65; ‘B’ is 66 …

A letter is usually stored using a single byte (8 bits ) Each letter is assigned an integer number and that number is stored

The conversion of letters to numbers is called an encoding. the encoding used in the examples above is called **[ASCII](https://www.ascii-code.com/)**

![ascii (1)](https://github.com/user-attachments/assets/02d58747-f600-42d9-853c-97539fa0147a)


### **Overflow errors**

If we are working with 8-bit numbers and all we can store is 8 bits, the following problem might occur.For example, if we add these two 8-bit numbers:

For example, if we add these two 8-bit numbers:

![Untitled (1)](https://github.com/user-attachments/assets/c17c8d1a-0bc2-402f-bb26-51705eb81fc5)

The carried 1 in the left-hand column would be the ninth digit in our answer, but we are limited to 8 bits. This carry is lost, which means we have an overflow error.

In this example, we tried to add 11000110 (198 in decimal) and 11100011 (227 in decimal).198 + 227 = 425 in decimal. The answer produces an overflow error because we needed a 9th bit. Without a 9th bit that information is lost, giving an incorrect answer of 10101001 in binary, which is 169 in decimal.

The largest value we can store in 8 bits is 11111111, or 255 in decimal. So the reason for the overflow error is that 425 is too large a number to store in 8 bits.


[7.4 Computer Memory](https://statmath.wu.ac.at/courses/data-analysis/itdtHTML/node55.html)

### The problem with overflow :

If you have an unsigned int number at 255, and you increment it, you’ll get 256 in return. As expected. If you have an unsigned char number at 255, and you increment it, you’ll get 0 in return. It resets starting from the initial possible value.

If you have an unsigned char number at 255 and you add 10 to it, you’ll get the number 9

![integer-overflow](https://github.com/user-attachments/assets/f7ebb7af-98d9-4b36-b132-9fbba2460606)



**Library Functions :**

C has many in-built functions which can make our work easier and code readable. Inbuilt functions are already defined in C and could be directly used in the program. These functions are grouped in a library, which can be accessed by including those header files in our program.


-----

| | |
|-|-|
| ![Pasted image 20230925130344](https://github.com/user-attachments/assets/cbf64f9d-268d-4924-afbe-f69d9ed3bf26) | ![Pasted image 20230925130415](https://github.com/user-attachments/assets/7e76893e-a17c-4fb9-a248-773602dbeccf) |

----






 

