/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:42:21 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/13 14:57:06 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char	a;
	int		i;

	a = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &a, 1);
		i++;
		a++;
	}
}