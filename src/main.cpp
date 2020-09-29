#include "stdio.h"
#include "mesh.h"
#include "mpi.h"


int main(int argc, char* argv[]){
	MPI_Init(&argc,&argv);
	int  rank, commSize;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &commSize);
	if (rank == 0){
	    printf("program for modeling filtration of water in cross sectional view\n");
	}
	else{
	    //printf("proc = %d  of %d \n",rank,commSize);
	}
    
	MESH my_mesh;
	char filename[] = "file.msh";
	my_mesh.READ_MSH(filename);
	my_mesh.READ_DISTRIBUTE_MESH(filename,commSize);

	MPI_Finalize();
	return 0;
}