/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:36:16 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/21 20:23:19 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char		**ft_put_word(char **ptr, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i])
		{
			ft_strdu
		}
		while ()
		{
			i++;
		}
	}
	ptr[i] = '\0';
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
}
