*This project has been created as part of the 42 curriculum by fermonte.*

# Libft

## Description

**Libft** is an individual project from the 42 School curriculum. Its goal is to create a personal C library by reimplementing several functions from the standard C library and adding useful utility functions.

The project helps develop a solid understanding of C programming fundamentals, including pointers, strings, memory allocation, memory management, and linked lists. Rather than relying entirely on existing library functions, the objective is to understand their behavior and implement them from scratch.

The resulting static library, `libft.a`, can be reused in future 42 projects.

## Instructions

### Compilation

The project uses a `Makefile` to compile the source files and generate the static library.

Run the following command from the project root:

```bash
make
```

The available Makefile rules are:

| Command | Description |
|---|---|
| `make` | Compiles the source files and creates `libft.a`. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the library. |
| `make re` | Performs a full recompilation. |

### Using the library

Include the project header in your C source file:

```c
#include "libft.h"
```

Compile your program and link it with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the resulting executable:

```bash
./program
```

## Library Description

The library is divided into three main groups of functions.

### 1. Libc Functions

These functions reproduce commonly used behavior from the C standard library.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills a memory area with a specified byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies data between memory areas. |
| `ft_memmove` | Copies memory areas while handling overlapping regions. |
| `ft_strlcpy` | Copies a string into a size-limited destination. |
| `ft_strlcat` | Concatenates strings while respecting the destination size. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_strnstr` | Searches for a substring within a limited string length. |
| `ft_atoi` | Converts a string into an integer. |
| `ft_calloc` | Allocates memory and initializes it to zero. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |

### 2. Additional Functions

These functions provide extra tools for string manipulation, conversion, and output.

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from a given string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Applies a function to each character and returns a new string. |
| `ft_striteri` | Applies a function to each character using its index. |
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### 3. Linked List Functions

The linked-list part introduces a dynamic data structure made of nodes. Each node stores content and a pointer to the next node. Unlike an array, a linked list does not require its elements to occupy consecutive memory locations.

The project uses the following node structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The `content` field is a generic pointer to the node's data, while `next` points to the following node. The last node points to `NULL`.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new node with the given content. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a supplied function. |
| `ft_lstclear` | Deletes and frees every node in a list. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

These operations provide practice with structures, pointers, dynamic allocation, traversal, and freeing memory safely.

## Resources

The following references can help explain the C language, standard library behavior, memory management, and linked lists:

- [C reference — cppreference](https://en.cppreference.com/w/c)
- [Linux man-pages](https://man7.org/linux/man-pages/)
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/)
- [42 School](https://42.fr/)
- [Learn-C.org](https://www.learn-c.org/)

### AI Usage

AI was used in a limited and supportive role:

- **Linked lists:** AI helped me understand how linked lists work, including node structures, pointers, traversal, and the relationship between nodes.
- **README file:** AI helped me create and organize this README, including the project overview, instructions, and descriptions of the library functions.

AI was not used to write or generate the project's source code or implement its functions. The library implementations were written by me.

## Project Structure

The exact layout depends on how the source files are organized. A simple project layout may look like this:

```text
.
├── Makefile
├── libft.h
├── ft_*.c
└── libft.a
```

## Author

**fermonte**

42 School Student
