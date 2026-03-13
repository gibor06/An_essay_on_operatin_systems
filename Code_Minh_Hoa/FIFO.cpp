#include <stdio.h>

int main() {

    int pages[] = {7,0,1,2,0,3,0,4};
    int frames[3];
    int i,j,k,flag;
    int faults = 0;

    for(i=0;i<3;i++)
        frames[i] = -1;

    int index = 0;

    for(i=0;i<8;i++) {

        flag = 0;

        for(j=0;j<3;j++) {
            if(frames[j] == pages[i]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            frames[index] = pages[i];
            index = (index + 1) % 3;
            faults++;
        }
    }

    printf("Page Faults = %d\n", faults);

    return 0;
}