*This project has been created a part of the 42 curriculum by ageoffro.*

# Push_swap

# Description

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

# Allowed Operations

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

------------------------------------------------------------------------

# Program Rules

The program must:

-   Handle **integer arguments**
-   Reject **invalid inputs**
-   Reject **duplicate numbers**
-   Avoid **memory leaks**
-   Print the **minimum possible operations**

If an error occurs:

    Error

------------------------------------------------------------------------

# Instructions

Clone the repository and compile the project.

    git clone <repository_url>
    cd push swap
    make

This will create an executable.

    push_swap

Run the program by providing integers as arguments

    ./push_swap 3 2 5 4


# Resources

1.  Students, for the alfgorithms choices
2.  push swap visualizer to test https://push-swap42-visualizer.vercel.app/
3.  Oceano youtube video https://www.youtube.com/watch?v=OaG81sDEpVk
4.  Stackoverflow https://stackoverflow.com/questions/75100698/push-swap-what-is-the-most-efficient-way-to-sort-given-values-using-a-limited-s
