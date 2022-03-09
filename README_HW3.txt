How to Run:
mpic++ 479HW3.cpp -o 479HW3
mpirun -n 8 ./479HW3

Note:
The array is randomly generated using the rand() function.
rand() operates with a defined MAX_VALUE, which is the variable MAX in this program.
MAX is set to 20, so the array will contain a random value of 1-20.