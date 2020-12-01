/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:05:39 by ppunzo            #+#    #+#             */
/*   Updated: 2020/12/01 16:05:45 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	short			is_terminated;

	is_terminated = 0;
	i = 0;
	while (n > 0)
	{
		if (src[i] == '\0')
			is_terminated = 1;
		if (is_terminated == 1)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
