#include <stdio.h>
#include "say.h"
#include "setvalue.h"
extern int global_v;
extern char *kHelloPrefix;
int main(int argc, const char * argv[]) {
    global_v = 10;
    set(1);
    say(kHelloPrefix, "tims");
    return 0;
}
