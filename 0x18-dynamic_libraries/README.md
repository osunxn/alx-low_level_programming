# 0x18. C - Dynamic libraries

## Resources
Read or watch:
- [What is the difference between Dynamic and Static library (Static and Dynamic linking)](https://intranet.hbtn.io/rltoken/LQ1PqgLLIepYRWY4Vcy2og)
- [Create dynamic libraries on Linux](https://intranet.hbtn.io/rltoken/_aFZDcXP5vUfg7NuyHnbFQ)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage of `nm`, `ldd`, `ldconfig`

## Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### C
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`,
- using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc., is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions,
- but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our
- own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header
- file called `main.h`
- Don’t forget to push your header file

### Bash
- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`
- A `README.md` file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

## Tasks

### 0. A library is not a luxury but one of the necessities of life
**mandatory**
Create the dynamic library `libdynamic.so` containing all the functions listed below:

```c
# Function prototypes
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
bash

$ ls -la lib*
-rwxrwxr-x 1 user user 13632 Jan  7 06:25 libdynamic.so
$ nm -D libdynamic.so
# Output of nm command
$ cat 0-main.c
# Contents of 0-main.c
$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
$ ldd len 
# Output of ldd command
$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
$ ldd len
# Output of ldd command after setting LD_LIBRARY_PATH
$ ./len
# Output of running the executable
1. Without libraries, what have we? We have no past and no future
mandatory
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

bash

$ ls *.c
# List of .c files
$ ./1-create_dynamic_lib.sh
# Output of script execution
$ nm -D --defined-only liball.so
# Output of nm command
2. Let's call C functions from Python
advanced
Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

python

# Contents of 100-tests.py
$ python3 100-tests.py
# Output of running the Python script
bash

$ ls 100-operations.so
# Output of ls command
3. Code injection: Win the Giga Millions!
advanced
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on 
the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

c

/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it.
The system is a Linux Ubuntu 16.04.
The server has internet access.
Our mole will be only able to run two commands from a shell script, without being detected by MSS.
Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands.
Our mole has only the authorization to upload one file on the server. It will be your shell script.
Our mole will run your shell script this way:

bash

mss@gm_server$ . ./101-make_me_win.sh
Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9.
MSS will use the same terminal and session than our mole.
Before running the gm program, MSS always checks the content of the directory.
MSS always exits after running the program gm.

TL;DR; This is what is going to happen:

bash

mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
Tip: LD_PRELOAD

bash

$ ls 101-make_me_win.sh
# Output of ls command
GitHub repository: alx-low_level_programming
Directory: 0x18-dynamic_libraries
Files: libdynamic.so, main.h, 1-create_dynamic_lib.sh, 100-operations.so, 100-tests.py, 101-make_me_win.sh
