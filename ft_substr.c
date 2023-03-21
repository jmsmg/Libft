/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:22:45 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/21 13:31:46 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(len + 1);
	if (!tmp || (unsigned int)ft_strlen(s) <= start)
	{
		return (0);
	}
	while (s[start] && i < len)
	{
		tmp[i] = s[start];
		start++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
