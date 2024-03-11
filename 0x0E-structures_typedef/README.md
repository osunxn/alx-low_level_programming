# 0x0E. C - Structures, typedef

![Image](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/50af78a28a081e809856d4cdbde2d7ca9d4aa93d.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230717%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230717T190409Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=1157419bdbe0b318ea46592568c6dea6f999a3c8656c9c64196817dc80132749)

## Resources
Read or watch:

- [0x0d. Structures.pdf](0x0d._Structures.pdf)
- [struct (C programming language)](https://en.cppreference.com/w/c/language/struct)
- [Documentation: structures](https://docs.microsoft.com/en-us/cpp/c-language/structures?view=msvc-160)
- [0x0d. Typedef and structures.pdf](0x0d._Typedef_and_structures.pdf)
- [typedef](https://en.cppreference.com/w/c/language/typedef)
- [Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189](https://libgen.rs/book/index.php?md5=884C53BC5E68E51C88F5E53D80E37A68)
- [The Lost Art of C Structure Packing](https://www.catb.org/esr/structure-packing/)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What are structures, when, why, and how to use them
- How to use `typedef`

## Requirements
General:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do, we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don't forget to push your header file
- All your header files should be include guarded

## Quiz questions
- None

---

### Tasks

### 0. Poppy

Define a new type `struct dog` with the following elements:

- `name`, type: `char *`
- `age`, type: `float`
- `owner`, type: `char *`

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initializes a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);


#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);


#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type dog_t as a new name for the type struct dog


#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog

Prototype: dog_t *new_dog(char *name, float age, char *owner);


#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs

Prototype: void free_dog(dog_t *d);


#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

