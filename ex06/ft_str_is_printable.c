/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:36:50 by ppunzo            #+#    #+#             */
/*   Updated: 2020/12/01 19:36:53 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int				is_printable;
	unsigned int	i;

	is_printable = 1;
	i = 0;
	while (is_printable == 1 && str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
			is_printable = 1;
		else
			is_printable = 0;
		i++;
	}
	return (is_printable);
}
