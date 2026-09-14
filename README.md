# Stack with Linked List

A simple C implementation of a stack using a linked list.

## Files

- `main.c` – demonstration program
- `Stack.c` – stack operations
- `header.h` – structure and function declarations

## Build

Use a Compiler such as `gcc`

```
gcc main.c Stack.c -o stack
```

## Structure Diagram

The following block diagram shows the high-level structure and relationships of the implementation:

```
       main.c
         |
   Header.h (in header.h)
         |
    Stack.c
    /        \
Hash Table   TABLE_SIZE = 1000
with Array
    |
Linked List Nodes
```

## Run

```
./stack
```

## Notes

- The HashMap implementation uses a hash table with an array of size 1000 (some number)
- Collisions are handled using separate chaining (linked lists)
- Each node contains a key and a pointer to the next node in the chain.
