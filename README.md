# Inclusive-Scan-MPI
Homework Assignment 3 for CPSC 479 Spring 2022 taught by professor Doina Bein. Makes use of the MPI_Scan function.

Problem 1. [ 12 points] An inclusive scan operation takes a binary associative operator , and an input array of n elements [x0, x1, ..., xn-1], and returns the output array
[x0,(x0 x1),...,(x0 x1 ...xn-1)]
For example, if  is the addition operation, then an inclusive scan operation on the input array [3 1 7 1 4 1 6 3] would return [3 4 11 12 16 17 23 26].
Consider that a very large array is made available to several processes and each process requests a positive integer amount of the array for exclusive use (like slicing bread).
Write a single program that displays the indexes of the array allocated to these processes. The index of the array starts at 1.
For example, if we have 8 processes and the request of the processes is [3 1 7 1 4 1 6 3] then process 0 will receive the array portion between index 1-3
process 1 will receive the array portion between index 4-4
process 2 will receive the array portion between index 5-11
process 3 will receive the array portion between index 12-12
process 4 will receive the array portion between index 13-16
process 5 will receive the array portion between index 17-17
process 6 will receive the array portion between index 18-23
process 7 will receive the array portion between index 24-26
