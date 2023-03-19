/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:32:10 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/16 17:22:10 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tmp_d;
	const char	*tmp_s = src;

	if (!(src) && !(dst))
	{
		return (0);
	}
	tmp_d = dst;
	i = 0;
	while (i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	return (dst);
}
