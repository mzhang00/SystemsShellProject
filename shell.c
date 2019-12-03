#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>

int main(int argc, char * argv[]){
    fork();
    char ** test = ["ls", "-a", "-l"];
    execvp(test[0], test);
    // char name[500];
    // if (argc > 1) {
    //     strcpy(name, argv[1]);
    // }else{
    //     fgets(name, 500, stdin);
    //     int i = 0;
    //     while (name[i] != '\n') {
    //         i++;
    //     }
    //     name[i] = '\0';
    // }
    // printf("%s\n", name);
    return 0;
}
