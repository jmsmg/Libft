/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:58:16 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/20 01:14:54 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	size_t			i;
	unsigned int	mem_len;

	i = 0;
	mem_len = 0;
	if (mem_len >= len)
	{
		return (0);
	}
	else
	{
		tmp = (char *)malloc(sizeof(char) * len + 1);
	}
	if (!tmp)
	{
		return (0);
	}
	while (i < len)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return (tmp);
}
#include <stdio.h>

int	main()
{
	ft_substr("", 30, 1);
}

