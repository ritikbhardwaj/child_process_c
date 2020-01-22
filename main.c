#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
    char *args[]={"./add","45","45","10",NULL};
    int pid = fork(); //create a child process
    if(pid == 0){
        execvp(args[0],args);
    }else{
        wait(NULL);
        printf("\nChild process exited..");
    }
}
