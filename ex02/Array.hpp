#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>

template< typename T >
class Array
{
	public:

		Array()
		{
			_tab = NULL;
			_size = 0;
		}

		Array(unsigned int i)
		{
			_size = i;
			_tab = new T[_size];
		}
		Array(const Array &other)
		{
			_size = other._size;
			_tab = new T[_size];
			unsigned int    i;

			i = 0;
			while (i < _size)
			{
				_tab[i] = other._tab[i];
				i++;
			}
		}
		Array	&operator=(Array const &a)
		{
			if (this == a)
				return (*this);
			if (_tab != NULL)
				delete[] (_tab);
			_size = a._size;
			_tab = new T[_size];
			unsigned int i = 0;
			while (i <  _size)
			{
				_tab[i] = a._tab[i];
				i++;
			}
			return (*this);
		}
		~Array()
		{
			if (_tab != NULL)
				delete[] (_tab);
		}
		class outBounds : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Index out bounds");
			}
		};
		
		T	&operator[](unsigned int i)
		{
			if (i >= _size)
			{
				throw outBounds();
				delete[] (_tab);
			}
			return (_tab[i]);
		}
		unsigned int	getSize() const
		{
			return (_size);
		}
        

    private:

        T   *_tab;
        unsigned int    _size; 
};

#endif