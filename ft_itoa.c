#include "libft.h"

int len_nb(int nb)
{
    int l = 0;
    if(nb < 0)
    {
        nb *= -1;
        l += 1;
    }
    while(nb > 0)
    {
        nb /= 10;
        l++;
    }
    return l;
}

char    *ft_itoa(int n)
{
    long nb = n;
    int len = len_nb(nb);
    char *place = malloc((len + 1) * sizeof(char));
    if (place == NULL)
        return NULL;
    place[len] = '\0';
    if(nb == 0)
    {
        place[0] = '0';
        return place;
    }
        
    if(nb < 0)
    {
        place[0] = '-';
        nb *= -1;
    }
    int i = len -1 ;
    while(nb > 0)
    {
        place[i] = (nb % 10) + 48;
        nb /= 10; 
        i--;
    }
    return place;
}
