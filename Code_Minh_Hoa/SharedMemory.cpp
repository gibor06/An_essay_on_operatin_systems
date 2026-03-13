#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {

    int shmid;
    char *str;

    shmid = shmget(65,1024,0666|IPC_CREAT);
    str = (char*) shmat(shmid,(void*)0,0);

    printf("Write data: ");
    scanf("%s", str);

    printf("Data written: %s\n", str);

    shmdt(str);

    return 0;
}