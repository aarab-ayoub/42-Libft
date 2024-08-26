#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define NAME "strrchr"
#define PROTOTYPE "char *ft_strrchr(const char *s, int c)"

int main ()
{
    FILE *new= fopen ("ft_"NAME".c", "w");
    if (!new)
        return 1;
    fprintf(new, "#include \"libft.h\"\n\n");
    fprintf(new, PROTOTYPE"\n{\n\t\n}\n");
    fclose(new);
    FILE *new1= fopen ("libft.h", "a");
    if (!new)
        return 1;
    fprintf(new1, PROTOTYPE";\n");
    fclose(new1);
}