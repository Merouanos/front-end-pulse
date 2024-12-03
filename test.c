#include <stdio.h>
#include <unistd.h> // fork
#include <stdlib.h> // exit

void main()
{
    int pid = fork();
    if(pid==0)
   {
        sleep(0.5);
        printf("%d :fils de pid:%d bonjour \n", getpid(), getppid());
        printf("%d :fils de pid:%d au revoir \n", getpid(), getppid()); 
    }
    else
    {
        printf("%d,je suis le pere j'attende l'execution de %d\n",getpid(),pid);
        sleep(1);
        printf("%d,je suis le pere l'execution de %d est terminer\n",getpid(),pid);
        pid=fork();
         if(pid==0)
        {
            sleep(0.5);
        printf("%d :fils de pid:%d bonjour \n", getpid(), getppid());
        printf("%d :fils de pid:%d au revoir \n", getpid(), getppid()); 
        }
    else{
        printf("%d,je suis le pere j'attende l'execution de %d\n",getpid(),pid);
        sleep(1);
        printf("%d,je suis le pere l'execution de %d est terminer\n",getpid(),pid);
        
    }
    }

    
}