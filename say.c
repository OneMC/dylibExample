// say.c
#include <stdio.h>
int global_v;
char *kHelloPrefix = "from dynamic hello";
void say(char *prefix, char *name){
    printf("%s, %s\n", prefix, name);
}
