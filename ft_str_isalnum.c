/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:01:53 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 15:05:44 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_isalnum(char *str)
{
	while (*str)
	{
		if (!(('0' <= *str && *str <= '9') || ('a' <= *str && *str <= 'z')
			|| ('A' <= *str && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
