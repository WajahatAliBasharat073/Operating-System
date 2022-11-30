#include<stdio.h> 
#include<unistd.h> 
#include<fcntl.h> 
int main() 
{ 
int pid, status; 
//pid_t wait(int *status); 
pid = fork(); 
if(pid == -1) 
{ 
printf("fork failed \n"); 
_exit(1); 
} 
if(pid == 0) 
{ 
/* Child */ 
printf("Child here!\n"); 
} 
else 
{ 
/* Parent */ 
wait(&status); 
printf("Well done kid!\n"); 
} 
} 
