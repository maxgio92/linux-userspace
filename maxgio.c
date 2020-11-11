#include <linux/kernel.h>
#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
    long stack_size;

    stack_size = syscall(440);

    printf("Hey! The kernel stack size is %ldKB.\n", stack_size/1024);

    return 0;
}
