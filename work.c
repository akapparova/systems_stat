#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>


int main(){

  struct stat yurd;
  stat("text.txt", &yurd);
  
  printf("File Size: %lld\n", yurd.st_size);
  printf("Permissions: %o\n", yurd.st_mode); 
  printf("Time of Last Access: %s\n", ctime(&(yurd.st_atime)));

  return 0;
}
