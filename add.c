#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    int total = 0;
    for(int i =1; i< argc; i++){
        total += atoi(argv[i]);
    }
    printf("\nTotal: %d\n",total);
    return 0;
}