# Stack with Linked List

A simple C implementation of a stack using a linked list.

## Files

- `main.c` – demonstration program
- `Stack.c` – stack operations
- `header.h` – structure and function declarations

## Build

Run the following command to compile the project:

```
gcc main.c Stack.c -o stack_program
```

## Usage

Run the compiled executable:

```
./stack_program
```

## Block Diagram

Below is a small block diagram showing how the project components interact and how the stack is represented internally (linked list of nodes).

A simple ASCII view of the linked list (top is leftmost):

```
top -> [data | next] -> [data | next] -> NULL
```
