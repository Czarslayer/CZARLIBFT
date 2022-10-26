/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:07:06 by mabahani          #+#    #+#             */
/*   Updated: 2022/10/23 16:33:02 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void f(unsigned int c, char *s)
{
    int i = 0;
    if (islower(*s))
        *s = *s - 32;
}

int main(){
    char s[]="hamid dakhamat";
    ft_striteri(s,f);
    printf("%s",s);
}*/