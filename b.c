#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t pid;

    for(int i=0; i<3; i++){
        pid = fork();
        if(pid == 0){
            printf("i=[%d] Child, pid=[%d], process id=[%d], parent id=[%d]\n", i,  pid, getpid(), getppid());
        }else if(pid > 0){
            printf("i=[%d] Parent, pid=[%d], process id=[%d]\n", i,  pid, getpid() );
            wait(NULL);
            return 0;
        }
         
    }


}

