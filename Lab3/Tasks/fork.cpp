#include <iostream>
#include<stdio.h> 
#include<unistd.h> 
#include<fcntl.h> 
#include <sys/types.h> 
int main() 
{ 
pid_t pid; 
pid = fork(); 
if (pid == 0) 
printf("\n I'm the child process"); 
else if (pid > 0) 
printf("\n I'm the parent process. My child pid is %d", pid); 
else 
printf("error in fork"); 
} 
