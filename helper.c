#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_FUNCTIONS 10

// Function prototypes
void create_function_files(const char *function_prototypes[], const char *function_names[], size_t num_functions);
void write_function_definition(FILE *file, const char *prototype);
void append_prototype_to_header(const char *header_file, const char *prototype);

int main(void) {
    const char *function_prototypes[NUM_FUNCTIONS] = {
        "char *ft_strjoin(char const *s1, char const *s2)",
        "char *ft_strtrim(char const *s1, char const *set)",
        "char **ft_split(char const *s, char c)",
        "char *ft_itoa(int n)",
        "char *ft_strmapi(char const *s, char (*f)(unsigned int, char))",
        "void ft_striteri(char *s, void (*f)(unsigned int, char*))",
        "void ft_putchar_fd(char c, int fd)",
        "void ft_putstr_fd(char *s, int fd)",
        "void ft_putendl_fd(char *s, int fd)",
        "void ft_putnbr_fd(int n, int fd)"
    };

    const char *function_names[NUM_FUNCTIONS] = {
        "strjoin",
        "strtrim",
        "split",
        "itoa",
        "strmapi",
        "striteri",
        "putchar_fd",
        "putstr_fd",
        "putendl_fd",
        "putnbr_fd"
    };

    create_function_files(function_prototypes, function_names, NUM_FUNCTIONS);

    return 0;
}

void create_function_files(const char *function_prototypes[], const char *function_names[], size_t num_functions) {
    for (size_t i = 0; i < num_functions; ++i) {
        char source_filename[256];
        snprintf(source_filename, sizeof(source_filename), "ft_%s.c", function_names[i]);
        FILE *source_file = fopen(source_filename, "w");
        if (!source_file) {
            perror("Failed to open source file");
            continue;
        }

        fprintf(source_file, "#include \"libft.h\"\n\n");
        write_function_definition(source_file, function_prototypes[i]);
        fclose(source_file);

        append_prototype_to_header("libft.h", function_prototypes[i]);
    }
}

void write_function_definition(FILE *file, const char *prototype) {
    fprintf(file, "%s\n{\n\t// TODO: Implement function\n}\n", prototype);
}

void append_prototype_to_header(const char *header_file, const char *prototype) {
    FILE *header = fopen(header_file, "a");
    if (!header) {
        perror("Failed to open header file");
        return;
    }

    fprintf(header, "%s;\n", prototype);
    fclose(header);
}
