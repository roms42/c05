/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:25:03 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/21 15:38:23 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i < nb / i)
		i++;
	if (i == nb / i)
		return (i);
	return (0);
}
