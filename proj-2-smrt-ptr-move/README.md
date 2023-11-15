# Smart Pointer move

A(nother) simple project, demonstrating:

- Moving a vector and list as one data structure using smart pointers
- Moving a vector and list element-by-element

## Dependencies

Ensure you have a C compiler installed. Cmake is used here to generate a Makefile. If you don't have Cmake installed, you can install it on [Windows](https://duckduckgo.com/?q=install+cmake+windows&t=lm&ia=web), [Linux](https://duckduckgo.com/?q=install+cmake+linux&t=lm&ia=web), and [MacOS](https://duckduckgo.com/?q=install+cmake+macos&t=lm&ia=web).

## How to run:

Clone this repository, or download `main.cpp`, and `print.h`, and `CMakeLists.txt`. In your terminal, navigate to the directory containing these files.

### In Linux / MacOS

- Run `~$ cmake -S . -B ./build` in the root directory of this project to generate a Makefile.
- Navigate to the build directory and run `~$ make` to build the project executable.
- `~$ ./Proj2` runs the program.

### In Windows (PowerShell)

- `> cmake -S . -B ./build -G "you-generator-here"`
  - `your-generator-here` will vary depending on your installed C compiler. Some examples could be `"Visual Studio ## <Date>` (`##` = Visual Studio version, `<Date>` = Visual Studio release date), or `"MinGW Makesiles"` (MinGW compiler), or something else entirely.
- Navigate to the `build` directory and run `> make` to build the project.
- Enter `> Proj2` in the terminal to run the program.
