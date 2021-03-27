#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(void)
{
    
    fprintf(stdout,"In %s file, at %d line", __FILE__, __LINE__); 
    //Todo
    // get file name
    // check if there exist a file
    // open file -- readonly
    // read x number bytes into buffer
    


    fprintf(stdout, "\n\n");
    return EXIT_SUCCESS;
}
