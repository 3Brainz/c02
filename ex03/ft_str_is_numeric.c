/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:07:58 by ppunzo            #+#    #+#             */
/*   Updated: 2020/12/01 17:08:02 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int				is_num;
	unsigned int	i;

	is_num = 1;
	i = 0;
	while (is_num == 1 && str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
			is_num = 1;
		else
			is_num = 0;
		i++;
	}
	return (is_num);
}
