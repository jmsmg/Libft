/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:36:16 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/22 12:03:16 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_dup(char const *s, char c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * i + 1);
	if (!ptr)
	{
		return (0);
	}
	i = 0;
	while (ptr[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	**ft_put_word(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i])
		{
			ptr[j] = ft_dup(&s[i], c);
			j++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	ptr[j] = 0;
	return (ptr);
}

static size_t	ft_check_cnt(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i])
		{
			cnt++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt;
	char	**ptr;

	cnt = ft_check_cnt(s, c);
	ptr = (char **)malloc(sizeof(char *) * cnt + 1);
	if (!ptr)
	{
		return (0);
	}
	ptr = ft_put_word(ptr, s, c);
	return (ptr);
}
