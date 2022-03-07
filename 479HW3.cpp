#include <stdio.h>
#include <mpi.h>
int main(int argc, char *argv[] ) 
{
    int rank, size, temp;
    int send[8] = {3, 1, 7, 1, 4, 1, 6, 3};
    int recv[8] = {0};
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    MPI_Comm_size(MPI_COMM_WORLD,&size);
    MPI_Scan(&send[rank], &recv[rank], 1, MPI_INT, MPI_SUM, MPI_COMM_WORLD);
    if(rank == 0)
    {
        printf("process %d will receive the array portion between index ", rank);
        printf("1 - %d \n", recv[rank]);
    }
    else
    {
        temp = recv[rank] - send[rank] + 1;
        printf("process %d will receive the array portion between index %d - %d \n", rank, temp, recv[rank]);
    }
    MPI_Finalize();
    return 0;

}