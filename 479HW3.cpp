#include <stdio.h>
#include <mpi.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[] ) 
{
    int rank, size, temp;
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    MPI_Comm_size(MPI_COMM_WORLD,&size);
    
    int MAX = 20;
    srand (time(NULL) + rank);
    int recv = 0;
    int send =  (rand() % MAX + 1);
    MPI_Scan(&send, &recv, 1, MPI_INT, MPI_SUM, MPI_COMM_WORLD);
    temp = (recv - send) + 1;
    printf("process %d will receive the array portion between index %d - %d \n", rank, temp, recv);

    MPI_Finalize();
    return 0;

}