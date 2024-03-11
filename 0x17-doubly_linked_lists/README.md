# 0x17. C - Doubly linked lists

## Resources
Read or watch:

- [What is a Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)
-[What is a Doubly Linked List Youtube](https://www.youtube.com/watch?v=k0pjD12bzP0)


## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is a doubly linked list
- How to use doubly linked lists
- Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
- Start to look for the right source of information without too much help

## Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`
- The prototypes of all your functions should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)

## Tasks

### 0. Print list
Write a function that prints all the elements of a dlistint_t list.
- Prototype: `size_t print_dlistint(const dlistint_t *h);`

### 1. List length
Write a function that returns the number of elements in a linked dlistint_t list.
- Prototype: `size_t dlistint_len(const dlistint_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a dlistint_t list.
- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

### 3. Add node at the end
Write a function that adds a new node at the end of a dlistint_t list.
- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

### 4. Free list
Write a function that frees a dlistint_t list.
- Prototype: `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
Write a function that returns the nth node of a dlistint_t linked list.
- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

### 6. Sum list
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
- Prototype: `int sum_dlistint(dlistint_t *head);`

### 7. Insert at index
Write a function that inserts a new node at a given position.
- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

### 8. Delete at index
Write a function that deletes the node at index index of a dlistint_t linked list.
- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

### 9. Crackme4
Find the password for crackme4.
Save the password in the file `100-password`.
Your file should contain the exact password, no new line, no extra space.

### 10. Palindromes
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
Save the result in the file `102-result`.
Your file should contain the exact result, no new line, no extra space.

### 11. Crackme5
Write a keygen for crackme5.
Usage of the crackme: `./crackme5 username key`
The crackme will segfault if you do not enter the correct key for the user.
Usage for your keygen: `./keygen5 username`
Your keygen should print a valid key for the username.
