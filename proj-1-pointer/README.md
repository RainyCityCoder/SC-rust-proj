# c-pointer-project

A simple program demonstrating conceptual understanding of C pointer arithmetic. It takes an array of three zeros, and using a pointer `p`, moves the pointer between indices, incrementing each value until the first three digits of Pi is reached, then starts over (the pointer is moved back to index 0), and decrements each value back to 0.

## Dependencies

Ensure you have a C compiler installed. [GCC](https://gcc.gnu.org/) instructions are provided here. Compilation commands (run these from the same location as the `main.c` file):

- Windows: `gcc main.c -o main.exe`
- Mac: `gcc -o main main.c`
- Linux: `gcc main.c -o main`

## How to run:

Download the `main.c` file, or clone this repository. Refer to the steps in [Dependencies](#dependencies) to install a compiler, if necessary, and compile `main.c`. Once compiled, the program may be run via terminal with:

- Windows: `main.exe`
- MacOS: `./main`
- Linux: `./main`
