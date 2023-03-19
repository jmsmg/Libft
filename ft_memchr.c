/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:14:57 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/16 20:46:46 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp_s;
	char	tmp_c;
	size_t	i;

	tmp_s = (char *)s;
	tmp_c = c;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == tmp_c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
