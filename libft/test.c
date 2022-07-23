#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *s);
void    *ft_memset(char *b, int c, int len);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(const char *str);

// int main()
// {
//     char c;

//     printf("Ingrese un caracter: ");
//     scanf("%c", &c);
//     printf("funcion isalpha: %d", isalpha(c));
//     printf("\nfuncion ft_isalpha: %d", ft_isalpha(c));
//     return 0;
// }

// int main()
// {
//     char c;

//     printf("Ingrese un caracter: ");
//     scanf("%c", &c);
//     printf("funcion isdigit: %d", isdigit(c));
//     printf("\nfuncion ft_isdigit: %d", ft_isdigit(c));
//     return 0;
// }

// int main()
// {
//     char c;

//     printf("Ingrese un caracter: ");
//     scanf("%c", &c);
//     printf("funcion isalnum: %d", isalnum(c));
//     printf("\nfuncion ft_isalnum: %d", ft_isalnum(c));
//     return 0;
// }

// int main()
// {
//     char c;

//     printf("Ingrese un caracter: ");
//     scanf("%c", &c);
//     printf("funcion isascii: %d", isascii(c));
//     printf("\nfuncion ft_isascii: %d", ft_isascii(c));
//     return 0;
// }

// int main()
// {
//     char c;

//     printf("Ingrese un caracter: ");
//     scanf("%c", &c);
//     printf("funcion isprint: %d", isprint(c));
//     printf("\nfuncion ft_isprint: %d", ft_isprint(c));
//     return 0;
// }

// int main()
// {
//     char c[] = "42Urduliz";

//     printf("funcion strlen: %s", strlen(c));
//     printf("\nfuncion ft_strlen: %d", ft_strlen(c));
//     return 0;
// }

// int main()
// {
//     char c;
//     int len;
//     char b[] = "42Urduliz";
//     char original[] = "42Urduliz";

//     printf("Ingrese un numero: ");
//     scanf("%d", &len);
//     printf("Ingrese un caracter: ");
//     scanf("%s", &c);
//     printf("funcion memset: %s", memset(original, c, len));
//     printf("\nfuncion ft_memset: %s", ft_memset(b, c, len));
//     return 0;
// }

// int main()
// {
//     int len;
//     char b[] = "42Urduliz";
//     char original[] = "42Urduliz";

//     printf("Ingrese un numero: ");
//     scanf("%d", &len);
//     printf("funcion memset: %s", bzero(original, len));
//     printf("\nfuncion ft_memset: %s", ft_bzero(b, len));
//     return 0;
// }

// int main()
// {
//     int len;
//     char a[20] = "42";
//     char b[20] = "42";
//     char original[] = "nuevo";

//     printf("Ingrese un numero: ");
//     scanf("%d", &len);
//     printf("funcion memcpy: %s", memcpy(a, original, len));
//     printf("\nfuncion ft_memcpy: %s", ft_memcpy(b, original, len));
//     return 0;
// }

//int main()
//{
//    int len;
//    char b[] = "42Urduliz";
//    char c[] = "42Urduliz";
//    char original[] = "nuevo";

//    printf("Ingrese un numero: ");
//    scanf("%d", &len);
//    printf("funcion memmove: %s", memmove(b, original, len));
//    printf("\nfuncion ft_memcpy: %s", ft_memmove(c, original, len));
//    return 0;
//}

// int main()
// {
//     int len;
//     char a1[] = "";
//     char a2[] = "Urduliz";
//     char b1[] = "";
//     char b2[] = "Urduliz";

//     printf("Ingrese un numero: ");
//     scanf("%d", &len);
//     printf("funcion ft_strlcpy: %zu\nOriginal: %s", ft_strlcpy(b1, b2, len), b1);
//     printf("\nfuncion strlcpy: %lu\nOriginal: %s", strlcpy(a1, a2, len), a1);
//     return 0;
// }

//int main()
//{
//    int len;
//    //char a1[] = "my favorite animal is";
//    char a2[] = "my favorite animal is";
//    char b[] = " ";

//    printf("Ingrese un numero: ");
//    scanf("%d", &len);
//    //printf("funcion ft_strlcat: %zu\nOriginal: %s", ft_strlcat(a1, b, len), a1);
//    printf("\nfuncion strlcat: %lu\nOriginal: %s", strlcat(a2, b, len), a2);
//    return 0;
//}

// int main()
// {
//     char c;

//     printf("Ingrese una letra: ");
//     scanf("%c", &c);
//     printf("funcion toupper: %c", toupper(c));
//     printf("\nfuncion ft_toupper: %c", ft_toupper(c));
//     return 0;
// }

// int main()
// {
//     char c;

//     printf("Ingrese una letra: ");
//     scanf("%c", &c);
//     printf("funcion tolower: %c", tolower(c));
//     printf("\nfuncion ft_tolower: %c", ft_tolower(c));
//     return 0;
// }

// int main()
// {
//     char len;
//     char a[20] = "42urduliz";

//     printf("String: %s\n", a);
//     printf("Ingrese un caracter: ");
//     scanf("%c", &len);
//     printf("\nfuncion ft_strchr: %s", ft_strchr(a, len));
//     printf("\nfuncion strchr: %s\n", strchr(a, len));
//     return 0;
// }

//int main()
//{
//    char len;
//    char a[20] = "42urduliz";

//    printf("String: %s\n", a);
//    printf("Ingrese un caracter: ");
//    scanf("%c", &len);
//    printf("\nfuncion ft_strrchr: %s", ft_strrchr(a, len));
//    printf("\nfuncion strrchr: %s\n", strrchr(a, len));
//    return 0;
//}

//int main()
//{
//    int len;
//    char a[] = "dol";
//    char b[] = "dolor";

//    printf("String1: %s\nString2: %s\n", a, b);
//    printf("Ingrese un numero: ");
//    scanf("%d", &len);
//    printf("\nfuncion ft_strncmp: %d", ft_strncmp(a, b, len));
//    printf("\nfuncion strncmp: %d\n", strncmp(a, b, len));
//    return 0;
//}

// int main()
// {
//     int len;
//     char a[7] = {-49, 49, 1, -1, 0, -2, 2};

//     printf("String1: %s\n", a);
//     printf("Ingrese un numero: ");
//     scanf("%d", &len);
//     printf("\nfuncion ft_memchr: %s", ft_memchr(a, -1, len));
//     printf("\nfuncion memchr: %s\n", memchr(a, -1, len));
//     return 0;
// }

// int main()
// {
//     int len;
//     char a[] = "t\200";
//     char b[] = "t\0";

//     printf("String1: %s\nString2: %s\n", a, b);
//     printf("Ingrese un numero: ");
//     scanf("%d", &len);
//     printf("\nfuncion ft_memchr: %d", ft_memcmp(a, b, len));
//     printf("\nfuncion memchr: %d\n", memcmp(a, b, len));
//     return 0;
// }

//int main()
//{
//int len;
//char a[] = "lslslslslslslslslslslslslslslslslslslslslslslsllslsls prueba Fuente";
//char b[] = "F";

//printf("String1: %s\nString2: %s\n", a, b);
//printf("Ingrese un numero: ");
//scanf("%d", &len);
//printf("\nfuncion strnstr: %s\n", strnstr(a, b, -1));
//printf("\nfuncion ft_strnstr: %s", ft_strnstr(a, b, -100));
//return 0;
//}

//int main()
//{
//    char a[] = "ii12ii";

//    printf("String1: %s\n", a);
//	printf("\nfuncion ft_atoi: %d", ft_atoi(a));
//    printf("\nfuncion atoi: %d\n", atoi(a));
//    return 0;
//}
