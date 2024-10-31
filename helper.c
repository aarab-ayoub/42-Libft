#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_FUNCTIONS 40

// Function prototypes
void create_function_files(const char *function_prototypes[], const char *function_names[], size_t num_functions);
void write_function_definition(FILE *file, const char *prototype);
void append_prototype_to_header(const char *header_file, const char *prototype);

int main(void)
{
    const char *function_prototypes[NUM_FUNCTIONS] = {
        "t_list *ft_lstnew(void *content)",
        "void ft_lstadd_front(t_list **lst, t_list *new);",
        "int ft_lstsize(t_list *lst);",
        "t_list *ft_lstlast(t_list *lst);",
        "void ft_lstadd_back(t_list **lst, t_list *new)",
        "void ft_lstdelone(t_list *lst, void (*del)(void *))",
        "void ft_lstclear(t_list **lst, void (*del)(void *));",
        "void ft_lstiter(t_list *lst, void (*f)(void *))",
        "t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))"
    };

    const char *function_names[NUM_FUNCTIONS] = {
        "lstnew_bonus",
        "lstadd_front_bonus",
        "lstsize_bonus",
        "lstlast_bonus",
        "lstadd_back_bonus",
        "lstdelone_bonus",
        "lstclear_bonus",
        "lstiter_bonus",
        "lstmap_bonus"
        };

    create_function_files(function_prototypes, function_names, NUM_FUNCTIONS);

    return 0;
}

void create_function_files(const char *function_prototypes[], const char *function_names[], size_t num_functions)
{
    for (size_t i = 0; i < num_functions; ++i)
    {
        char source_filename[256];
        snprintf(source_filename, sizeof(source_filename), "ft_%s.c", function_names[i]);
        FILE *source_file = fopen(source_filename, "w");
        if (!source_file)
        {
            perror("Failed to open source file");
            continue;
        }

        fprintf(source_file, "#include \"libft.h\"\n\n");
        write_function_definition(source_file, function_prototypes[i]);
        fclose(source_file);

        append_prototype_to_header("libft.h", function_prototypes[i]);
    }
}

void write_function_definition(FILE *file, const char *prototype)
{
    fprintf(file, "%s\n{\n\t// TODO: Implement function\n}\n", prototype);
}

void append_prototype_to_header(const char *header_file, const char *prototype)
{
    FILE *header = fopen(header_file, "a");
    if (!header)
    {
        perror("Failed to open header file");
        return;
    }

    fprintf(header, "%s;\n", prototype);
    fclose(header);
}