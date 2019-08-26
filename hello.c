#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    struct stat buf;
    if (argc != 2)
        perror("Trying to use an invalid number of arguments"), exit(1);
    if (stat(argv[1], &buf))
        perror("Weird"), exit(2);
    if (buf.st_size)
        exit(printf("You are a weasel.\n"));
    else
        exit(printf("Hello World\n"));
}


    

    
