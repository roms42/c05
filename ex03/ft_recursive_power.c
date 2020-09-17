/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:22:58 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/17 20:49:58 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_recursive_power(5, 1));
}
