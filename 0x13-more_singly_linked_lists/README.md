# More Singly Linked Lists

## Resources
Read or watch:

## Resources

- [Linked List - GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/linked-list/)
- [Linked List Tutorial - YouTube](https://www.youtube.com/watch?v=R9PTBwOzceo&t=7s&pp=ygURbGlua2VkIGxpc3RzIGluIGM%3D)


## Data Structure
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
Tasks
0. Print List
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf
1. List Length
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);
2. Add Node
Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
3. Add Node at the End
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
4. Free List
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);
5. Free (with Double Pointer)
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL
6. Pop
Write a function pop_listint that deletes the head node of a listint_t linked list, and returns the head node's data (n).

Prototype:
c
Copy code
int pop_listint(listint_t **head);
The function should return the data (n) of the deleted node.
If the linked list is empty, the function should return 0.
7. Get node at index
Write a function get_nodeint_at_index that returns the nth node of a listint_t linked list.

Prototype:
c
Copy code
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
The function should return a pointer to the nth node.
The index is the index of the node, starting at 0.
If the node does not exist, the function should return NULL.
8. Sum list
Write a function sum_listint that returns the sum of all the data (n) of a listint_t linked list.

Prototype:
c
Copy code
int sum_listint(listint_t *head);
The function should return the sum of the data (n) of the linked list.
If the list is empty, the function should return 0.
9. Insert
Write a function insert_nodeint_at_index that inserts a new node at a given position in a listint_t linked list.

Prototype:
c
Copy code
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
The function should return the address of the new node, or NULL if it failed.
The index is the index of the list where the new node should be added, starting at 0.
If it is not possible to add the new node at index idx, do not add the new node and return NULL.
10. Delete at index
Write a function delete_nodeint_at_index that deletes the node at index index of a listint_t linked list.

Prototype:
c
Copy code
int delete_nodeint_at_index(listint_t **head, unsigned int index);
The function should return 1 if it succeeded, and -1 if it failed.
The index is the index of the node that should be deleted, starting at 0.
11. Reverse list
Write a function reverse_listint that reverses a listint_t linked list.

Prototype:
c
Copy code
listint_t *reverse_listint(listint_t **head);
The function should return a pointer to the first node of the reversed list.
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free, or arrays.
You can only declare a maximum of two variables in your function.
12. Print (safe version)
Write a function print_listint_safe that prints a listint_t linked list.

Prototype:
c
Copy code
size_t print_listint_safe(const listint_t *head);
The function should return the number of nodes in the list.
This function can print lists with a loop.
You should go through the list only once.
If the function fails, it should exit the program with status 98.
Output format: [address] n.
13. Free (safe version)
Write a function free_listint_safe that frees a listint_t list.

Prototype:
c
Copy code
size_t free_listint_safe(listint_t **h);
The function should return the size of the list that was freed.
This function can free lists with a loop.
You should go through the list only once.
The function sets the head to NULL.
14. Find the loop
Write a function find_listint_loop that finds the loop in a listint_t linked list.

Prototype:
c
Copy code
listint_t *find_listint_loop(listint_t *head);
The function should return the address of the node where the loop starts, or NULL if there is no loop.
You are not allowed to use malloc, free, or arrays.
You can only declare a maximum of two variables in your function.
