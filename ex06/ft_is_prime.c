/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:16:46 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/17 22:35:02 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
	if (nb == 2)
		return (1);
	i = 3;
	if (!(nb % 2))
		return (0);
	while (!(nb % i) && i <= nb)
		i += 2;
	if (i >= nb)
		return (1);
	return (0);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_is_prime(97));
}
