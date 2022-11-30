#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   pid_t pid, child, children;
   pid = getpid();
   pid = fork();

   if (pid < 0) {
      perror("fork() failure\n");
      return 1;
   }

   // Child process
   if (pid == 0) {
      printf("This is child process\n");
      child = getpid();
      children = getppid();
      printf("Child id is %d and children is %d\n", child, children);
   } else { // Parent process 
      sleep(2);
      printf("This is parent process\n");
}
}
