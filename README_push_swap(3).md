This project has been created as part of the 42 curriculum by ageoffro.

# Descrition

Push_swap is a sorting algorithm project from the ageoffro.
The objective is to sort a stack of integers using a **limited set of
operations** and two stacks.

The challenge is not only to sort numbers, but to do it using the
**fewest operations possible**.

The program takes a list of integers as arguments and outputs the
sequence of operations required to sort them in ascending order.

Two stacks are used:

-   **Stack A** -- contains the initial numbers
-   **Stack B** -- empty at the start

The program must sort the numbers in **Stack A** using only the allowed
operations.

Example:

    ./push_swap 2 1 3

Output:

    sa

------------------------------------------------------------------------

# Instructions

## Swap

Swap the first two elements of a stack.

    sa : swap the first two elements of stack A
    sb : swap the first two elements of stack B
    ss : sa and sb at the same time

## Push

Move the top element from one stack to the other.

    pa : push from B to A
    pb : push from A to B

## Rotate

Shift all elements up by one.

    ra : rotate stack A
    rb : rotate stack B
    rr : ra and rb at the same time

## Reverse Rotate

Shift all elements down by one.

    rra : reverse rotate stack A
    rrb : reverse rotate stack B
    rrr : rra and rrb at the same time

The program must:

-   Handle **integer arguments**
-   Reject **invalid inputs**
-   Reject **duplicate numbers**
-   Avoid **memory leaks**
-   Print the **minimum possible operations**

If an error occurs:

    Error

# Algorithms Used

Different strategies are used depending on the number of elements.

### Small Inputs

For small stacks:

-   **2 numbers** → simple swap
-   **3 numbers** → minimal sorting logic
-   **4--5 numbers** → push the smallest elements to stack B, sort the
    rest, then push back

### Large Inputs

For larger stacks, a common solution is **Radix Sort**.

Steps:

1.  Convert numbers to **indexes**
2.  Sort bits from least significant to most significant
3.  Use `pb` and `ra` to distribute elements
4.  Push everything back to stack A

This approach allows efficient sorting for large datasets.

------------------------------------------------------------------------

# Compilation

Use the Makefile:

    make

This generates the executable:

    push_swap

Other commands:

    make clean
    make fclean
    make re

------------------------------------------------------------------------

# Usage

Example:

    ./push_swap 3 2 5 1 4

Example output:

    pb
    ra
    pb
    sa
    pa
    pa

------------------------------------------------------------------------

# Testing

You can test your program with the checker:

    ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG

Expected output:

    OK

------------------------------------------------------------------------

# Learning Objectives

This project helps develop:

-   Algorithmic thinking
-   Optimization techniques
-   Data structure manipulation
-   Memory management in C

------------------------------------------------------------------------

# Author

Project developed as part of the **42 School curriculum**.
