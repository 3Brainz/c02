/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:26:06 by ppunzo            #+#    #+#             */
/*   Updated: 2020/12/01 17:26:09 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);
{
	int				is_low_c;
	unsigned int	i;

	is_low_c = 1;
	i = 0;
	while (is_low_c == 1 && str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
			is_low_c = 1;
		else
			is_low_c = 0;
		i++;
	}
	return (is_low_c);
}
