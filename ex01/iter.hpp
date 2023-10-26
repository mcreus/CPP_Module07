#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>

template < typename T , typename Function>
void    iter(T const *tab, int len, Function function)
{
    int   i = 0;
    while (i < len)
    {
        function(tab[i]);
        i++;
    }
}

#endif