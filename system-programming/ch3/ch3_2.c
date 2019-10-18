#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("./ch3_1.c", O_RDONLY);
    char c[1];
    while(read(fd, c, 1) != 0) {
        printf("%ld--%c\n",lseek(fd,0,SEEK_CUR),c[0]);
    }
}
