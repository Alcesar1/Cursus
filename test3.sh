#!/bin/bash

echo "

############################
TESTING SOME 1 - 5 NUMBERS
VALGRIND CHECK
############################

"
valgrind ./push_swap 5 4 6 1 2
valgrind ./push_swap 1 2 8 4 5
valgrind ./push_swap 1 4 2
valgrind ./push_swap 3 4 1
valgrind ./push_swap 8 7 4
valgrind ./push_swap 1 
valgrind ./push_swap 2 1
valgrind ./push_swap 7 4
valgrind ./push_swap 9 4 6 7
valgrind ./push_swap 5 6 4 7
valgrind ./push_swap 6 4
