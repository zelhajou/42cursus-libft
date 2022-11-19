#include "libft.h"

int main()
{
    char *str = "hello";
    char *str2 = "ssllo";

    char str3[20] = "Hello"; 

    printf("%ld \n", ft_strlen("123456789"));
    printf("%s  \n", ft_strchr(str, 'l'));
    printf("%s  \n", ft_strrchr(str, 'l'));
    printf("%s  \n", ft_strnstr(str, "ll", 9));
    printf("%d  \n", ft_strncmp(str, str2, 5));
    printf("%ld \n", ft_strlcpy(str3, "zakaria", 5));
    printf(" str3 - %s\n", str3);
    printf(" str3 - %s\n", str3);
    ft_bzero(str3, 2);
    for (int i = 0; i < 5; i++)
    {
       printf("%c \n", str3[i]);
    }
    printf("%d \n", ft_memcmp(str, str2, 2));
    printf("%s \n", (char *)ft_memchr(str, 'l', 3));

    char str4[10] = "hello";
    ft_memset(str4, 'l', 10);
    printf("%s \n", str4);

}