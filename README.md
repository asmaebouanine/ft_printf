
# ft_printf

## Introduction

The `ft_printf` project is about making your own version of the C `printf` function. This function is used to show text or numbers on the screen. You will need to support different types of format codes and only use allowed system functions. This project helps you understand how to work with multiple arguments, format text, manage memory, and print output.

---

## How It Works

`ft_printf` takes a special string (called the format string) and a list of values. It reads the format string, finds format codes like `%d` or `%s`, and replaces them with the right values using the `write()` function.

### Steps

1. Read the format string one character at a time.
2. When you see `%`, check which type it is.
3. Change the value into text.
4. Print each character and value to the screen.
5. Count and return the number of characters printed.

---

## Supported Format Codes

* `%c` → character
* `%s` → string
* `%p` → pointer
* `%d` / `%i` → signed number
* `%u` → unsigned number
* `%x` / `%X` → hexadecimal (lowercase / UPPERCASE)
* `%%` → the percent sign itself

---

## Project Rules

* Function header:

  ```c
  int ft_printf(const char *format, ...);
  ```

---

## Key Ideas

1. **Variadic Functions**
   `ft_printf` uses `<stdarg.h>` to work with a flexible number of arguments.

2. **Format Parsing**
   You must read and understand the format string while the program is running.

3. **Conversion to Strings**
   Numbers and pointers need to be turned into strings before printing.

4. **System Calls**
   Everything is printed using the `write()` function.

---

## Conclusion

This project helps you learn how to build a real and useful function using only simple tools in C. It improves your coding skills, teaches you how to handle text and numbers, and gives you better control over how your program shows output.
