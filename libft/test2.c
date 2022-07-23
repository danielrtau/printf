#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
/*
size_t	ft_strlen(const char *s);

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s != '\0' && *s != c)
					s++;
		}
	}
	return (counter);
}

static char	*ft_splitdup(const char *s, size_t start, size_t end)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!dst)
		return (NULL);
	while (start < end)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}

static char	**ft_fill_split(char **dst, const char *s, char c)
{
	size_t	i;
	size_t	p1;
	size_t	start;

	i = 0;
	p1 = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || i == ft_strlen(s))
				dst[p1++] = ft_splitdup(s, start, i);
		}
		while (s[i] == c && s[i])
		{
			i++;
			start = i;
		}
	}
	dst[p1] = NULL;
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char	**dst;

	if (!s)
		return (NULL);
	dst = (char **)malloc(sizeof(char *) * (ft_wordlen(s, c) + 1));
	if (!dst)
		return (NULL);
	ft_fill_split(dst, s, c);
	return (dst);
}

int	main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("hello!", ' ');
	while (i < 8)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
