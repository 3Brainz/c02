/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:25:27 by ppunzo            #+#    #+#             */
/*   Updated: 2020/12/01 18:25:29 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);
{
	int				is_up_c;
	unsigned int	i;

	is_up_c = 1;
	i = 0;
	while (is_up_c == 1 && str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
			is_up_c = 1;
		else
			is_up_c = 0;
		i++;
	}
	return (is_up_c);
}
