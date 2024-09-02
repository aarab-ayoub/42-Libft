#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libft.h"

size_t ft_strlen(const char* str)
{
	size_t i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

void *ft_memmove(void *destination, const void *source, size_t size)
{
	size_t i;
    unsigned char *dst;
    unsigned char *src;
    unsigned int len_dest;


    dst = (unsigned char *) destination;
    src = (unsigned char *) source;
    len_dest = ft_strlen(dst);
    i = 0;
    while (len_dest + i < size)
    {
        dst[i] = src[i];
        i++;
    }
    return dst;
}

#define ELEMENT_COUNT 10

int main() {

    
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );

    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = ELEMENT_COUNT * sizeof( int );
    ft_memmove( destination, source, size );

    data[0] = 10;

    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  

    return EXIT_SUCCESS;
}