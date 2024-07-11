/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:01:41 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/06 17:40:25 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	find_same_letter(char c, char i)
{
	return (c == i);
}

char	check_not_null(char c)
{
	return (c != '\0');
}

char	check_first_letter(char c)
{
	return (c == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (check_first_letter(to_find[0]))
		return (&str[0]);
	else
	{
		while (str[i] != '\0')
		{
			j = 0;
			while ((check_not_null(to_find[j]))
				&& (find_same_letter(str[i + j], to_find[j])))
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
