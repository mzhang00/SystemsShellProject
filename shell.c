#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

int main(int argc, char * argv[]){
  while (1){
    char name[500];
    if (argc > 1) {
        strcpy(name, argv[1]);
    }else{
        fgets(name, 500, stdin);
        int i = 0;
        while (name[i] != '\n') {
            i++;
        }
        name[i] = '\0';
    }

    // printf("%s\n", name);


    if (fork() == 0){
      char * test[100] = {name, NULL};
      execvp(test[0], test);
    }


    // int status;
    // wait(&status);
    // exit(0);
  }
  // char * test[100] = {"ls",NULL};
  // execvp(test[0], test);
  return 0;
}
