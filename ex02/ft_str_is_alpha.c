/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:37:35 by ppunzo            #+#    #+#             */
/*   Updated: 2020/12/01 16:37:45 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int				is_alpha;
	unsigned int	i;

	is_alpha = 1;
	i = 0;
	while (is_alpha == 1 && str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			is_alpha = 1;
		else
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}
