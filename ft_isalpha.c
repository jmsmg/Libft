/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:40:08 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/14 15:34:01 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (65 <= c && c <= 90)
	{
		return (0);
	}
	else if (97 <= c && c <= 122)
	{
		return (1);
	}
	return (0);
}
