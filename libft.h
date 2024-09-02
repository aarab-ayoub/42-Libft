#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

int ft_atoi(const char *ptr);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void * ft_memset( void * pointer, int value, size_t count );
void	*ft_memcpy(void *dest, const void *src, size_t n);
void * ft_memmove( void *destination, const void *source, size_t size);
int ft_memcmp( const void * pointer1, const void * pointer2, size_t size );
void	ft_bzero(void *s, size_t n);
void *ft_memchr(void * ptr, int value, size_t num);
char *ft_strnstr(const char *big,	const char *little, size_t len);
void* ft_calloc (size_t num, size_t size);
char	*ft_strdup(char *src);

#endif
