# ♻️ Push_swap

A sorting algorithm project from the 42 School curriculum that involves sorting a stack of integers with minimal operations.

![](https://github.com/DadiaZ24/7.42Porto_Push_Swap/blob/main/preview.gif?raw=true)

## 📄 Project Overview

The Push_swap project requires implementing a program to sort a stack of integers in ascending order using two stacks (a and b) and a limited set of operations. The goal is to achieve this with the minimum number of moves. For this solution, the Radix Sort algorithm is implemented to handle the sorting efficiently.

## ✨ Features

* Efficient Sorting with Radix Sort: Implements a non-comparative sorting algorithm (Radix Sort) to sort numbers with minimal moves.
* Limited Operation Set: Uses a predefined set of operations to manipulate stacks.
* Optimized for Large Inputs: The Radix Sort approach performs well even for large lists.
* No Bonus Part: This implementation focuses solely on the main sorting requirements.

## 📁 Project Structure

    .
    ├── include                   # Folder containing all header files (.h files)
    ├── libs                      # Folder containing all necessary libraries
    │   └── libft                 # Folder with the Libft library
    ├── src                       # Folder with all .c source files required for the project
    │   ├── algorithm             # Folder containing sorting algorithms
    │   │   ├── radix.c           # Radix Sort algorithm implementation
    │   │   ├── small.c           # Sorting algorithm for small datasets
    │   │   └── small_utils.c     # Utility functions for small dataset sorting
    │   ├── operations            # Folder containing stack operations
    │   │   ├── push.c            # Functions for push operations
    │   │   ├── rotate_down.c     # Functions for reverse rotate operations
    │   │   ├── rotate_up.c       # Functions for rotate operations
    │   │   └── swap.c            # Functions for swap operations
    │   ├── parser                # Folder containing input parsing logic
    │   │   ├── parser.c          # Functions for input parsing
    │   │   └── parser_utils.c    # Utility functions for parsing
    │   ├── utils                 # Folder with additional utility functions
    │   │   ├── data_utils.c      # Functions for data manipulation
    │   │   ├── free_utils.c      # Functions for memory management
    │   │   ├── lst_utils.c       # Linked list utility functions
    │   │   └── numbers.c         # Functions for handling numbers
    │   └── main.c                # The main program entry point
    ├── Makefile                  # File to compile the project
    └── README.md                 # Project documentation

## 🚀 Getting Started
### Prerequisites

    GNU Make: Required to compile the project.
    CC: GNU Compiler Collection for compiling C code.
    UNIX-based system: This project is compatible with UNIX-like operating systems (Linux, macOS).

### Compilation

To compile the project, run:

    make

This command generates an executable called push_swap.
### Usage

To run the program, use:

    ./push_swap [list_of_numbers]

Replace [list_of_numbers] with the space-separated integers you want to sort. For example:

    ./push_swap 4 67 3 87 23

The output will be a list of operations to sort the numbers in ascending order.
Example

    $ ./push_swap 3 2 5 1 4
    pb
    pb
    ra
    ra
    pa
    pa

Each operation is a step in sorting the stack. The operations include:

    sa — swap the first two elements at the top of stack a
    sb — swap the first two elements at the top of stack b
    ss — sa and sb at the same time
    pa — push the top element of stack b onto stack a
    pb — push the top element of stack a onto stack b
    ra — rotate all elements of stack a upwards
    rb — rotate all elements of stack b upwards
    rr — ra and rb at the same time
    rra — reverse rotate all elements of stack a
    rrb — reverse rotate all elements of stack b
    rrr — rra and rrb at the same time

⚙️ Implementation Details

* Radix Sort Algorithm: Radix Sort works by sorting based on each digit, one at a time, which makes it efficient for sorting integers without direct comparisons.
* Binary Representation: The implementation uses bitwise operations to group and organize numbers in stack a and stack b, moving numbers based on each bit until they are fully sorted.
* Stack Manipulation: Uses push and swap operations to move elements between stacks during sorting.

📝 Notes

* Error Handling: The program should validate input to ensure only integers are processed and that there are no duplicates.
* Operation Count: While Radix Sort is efficient, the goal is still to minimize the number of moves required to sort.

🏆 Credits

Project by Diogo Ferreira as part of the curriculum at 42 School.
