# 0x03. C - Debugging

This repository contains programs written in C language as part of the "0x03. C - Debugging" project at Holberton School. The project focuses on learning and practicing debugging techniques in C.

![Debugging](https://camo.githubusercontent.com/44d9f656610e14ea983a8e1aa80d6b675c3daa5f0a4aec5ab980112eedb68017/68747470733a2f2f692e706f7374696d672e63632f4e4651626b44664d2f696d6167652e706e67)

## Learning Objectives

- What is debugging
- Common debugging methods and techniques
- How to read error messages and understand their meanings
- How to use tools such as `gcc`, `gdb`, and `valgrind` for debugging

## Requirements

- Ubuntu 14.04 LTS
- GCC 4.8.4 with `-Wall -Werror -Wextra -pedantic` flags

## Project Files

The following files are included in this repository:

- [0-main.c](./0-main.c): Program that tests a function that prints if an integer is positive or negative.
- [1-main.c](./1-main.c): Program that tests a function that prints the largest of three integers.
- [2-largest_number.c](./2-largest_number.c): Function that returns the largest of three integers.
- [3-print_remaining_days.c](./3-print_remaining_days.c): Function that prints the remaining days of a year, taking into account leap years.
- [main.h](./main.h): Header file containing function prototypes and struct definition.

## Usage

You can compile the C files using the following command:

-Wall -Werror -Wextra -pedantic -std=gnu89  <filename.c> -o <output>

Replace `<filename.c>` with the name of the C file you want to compile and `<output>` with the desired name for the output file.

For example, to compile `0-main.c`:


Then, run the program using:

./<filename>
