# ft_printf
This project aims to code the printf() function from libc.
A variadic function is a function which accepts a variable number of arguments.

int	ft_printf(const char *format, ...);

The variadic function must have at least one mandatory argument. There is no minimum for the number of variable arguments.

# va_list - new object type

va_list is an object type suitable for holding the information needed by the macros va_start, va_copy, va_arg, and va_end. 
In other words, it is a list that will contain all the dynamic arguments
