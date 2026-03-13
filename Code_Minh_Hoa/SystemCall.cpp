#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;
    char buffer[100];
    int n;

    fd = open("input.txt", O_RDONLY);

    if (fd < 0) {
        printf("Error opening file\n");
        return 1;
    }

    n = read(fd, buffer, sizeof(buffer));
    write(1, buffer, n);   // 1 = stdout

    close(fd);

    return 0;
}