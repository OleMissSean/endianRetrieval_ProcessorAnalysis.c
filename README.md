endianRetrieval.c
=================

Homework Assignment #1 for CSci 223

CSCI 223 Computer Org. & Assembly Language
Homework #1
9/10/2013
DUE: 9/17/2013 (Tuesday), 11:00am
Submission : Upload your single source file on blackboard. Use the skeleton code below for this homework.
1. Write a C function is_little_endian that will return 1 when compiled and run on a little-endian machine,
and will return 0 when compiled and run on a big-endian machine.
2. Write a C function merge_bytes that will yield a word consisting of the least significant byte of x, and the
remaining bytes of y. For operands x == 0x89ABCDEF and y == 0x76543210, this would give 0x765432EF.
3. Write a C function replace_byte that will return an unsigned integer value in which ith byte of argument x
has been replaced by byte b:
