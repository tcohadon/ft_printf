*This project has been created as part of the 42 curriculum by tcohadon*

**DESCRIPTION**

The purpose of this project is to recode the standard `printf` function from the C library. It helped me understand variadic functions in C and how to format and print different types of data to the standard output.

**My `ft_printf` function handles the following conversions:**

* `%c`: Prints a single character.
* `%s`: Prints a string (as defined by the common C convention).
* `%p`: The `void *` pointer argument is printed in hexadecimal format.
* `%d` / `%i`: Prints a decimal (base 10) integer.
* `%u`: Prints an unsigned decimal (base 10) number.
* `%x`: Prints a number in hexadecimal (base 16) lowercase format.
* `%X`: Prints a number in hexadecimal (base 16) uppercase format.
* `%%`: Prints a percent sign.

**Key technical concepts explored in this project:**

* **Variadic arguments (`stdarg.h`)**: 
        Using macros like `va_start`, `va_arg`, and `va_end` to handle an unknown number of arguments passed to a function.
* **Base conversions**: 
        Implementing recursive or iterative algorithms to convert decimal numbers into hexadecimal representations (`ft_printlowhex.c`, `ft_printuphex.c`, `ft_printptr.c`).
* **Code modularity**: 
        Dispatching the work to specific helper functions (like `ft_functionredirect`) using a clean and readable structure to process each format specifier.

**INSTRUCTIONS**

**Prerequisites :**

* You need to have a C compiler (like `cc` or `gcc`) and `make` installed on your machine.

**Commands :**

* `make` or `make all`: Compiles the source files and creates the static library `libftprintf.a`.
* `make clean`: Removes all the generated object (`.o`) files.
* `make fclean`: Performs a full clean by removing the object files and the `libftprintf.a` binary.
* `make re`: Force rebuilds everything from scratch by calling `fclean` then `all`.

**RESSOURCES**

**Docs:**

* Type `man 3 printf` in your terminal to understand the expected behavior of the standard function.
* Type `man 3 stdarg` to learn how to manipulate variadic argument lists.
