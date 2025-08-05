# ft_printf

## Introduction

The `ft_printf` project is part of the 42 coding curriculum. The goal is to reimplement the standard C `printf` function, which formats and prints data. The function must support various format specifiers and be built using only allowed system functions. This project enhances your understanding of variadic functions, memory handling, string formatting, and output operations in C.

---

## How It Works

`ft_printf` takes a format string and a variable number of arguments. It scans the format string, detects format specifiers (e.g. `%d`, `%s`, `%x`), retrieves the corresponding arguments, and prints them accordingly using `write()`.

### Basic Workflow

1. Parse the format string character by character.
2. When a `%` is found, identify the format specifier.
3. Convert the corresponding argument to the required format.
4. Print characters and formatted values to the standard output.
5. Return the total number of characters printed.

---

## Supported Format Specifiers

- `%c` → character  
- `%s` → string  
- `%p` → pointer  
- `%d` / `%i` → signed integer  
- `%u` → unsigned integer  
- `%x` / `%X` → hexadecimal (lower/upper case)  
- `%%` → print a percent sign  

---

## Project Requirements

- Function prototype:  
  ```c
  int ft_printf(const char *format, ...);
  ```

---

## Key Concepts

1. **Variadic Functions**  
   `ft_printf` uses the `<stdarg.h>` library to handle functions with a variable number of arguments.

2. **Format String Parsing**  
   The function must scan and analyze the format string in real-time to extract flags, width, and specifiers.

3. **Number and String Conversion**  
   Integers, hexadecimals, and pointers must be converted into printable strings manually.

4. **System Calls**  
   All output is done via the `write()` system call, which prints to standard output.

---

## Conclusion

The `ft_printf` project is a great exercise in building a complex and commonly used function from scratch. It deepens your knowledge of C fundamentals, memory handling, and clean code practices — all while mimicking one of the most powerful standard library functions.
