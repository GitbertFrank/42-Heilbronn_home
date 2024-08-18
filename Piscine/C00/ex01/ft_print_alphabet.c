/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrank <rfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 22:30:11 by rfrank            #+#    #+#             */
/*   Updated: 2024/08/01 00:23:12 by rfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abc[26];
	int		i;
	char	c;

	i = 0;
	c = 97;
	while (c < 97 + 26)
	{
		abc[i] = c;
		c++;
		i++;
	}
	write(1, &abc, 26);
}
