// setvalue.c
#include <stdio.h>
extern int global_v;static int count = 0;
void set(int v){
    count = v;   global_v += count;
    printf("count = %d, global_v=%d\n", count,global_v);
}
