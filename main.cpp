#include <stdio.h>
#include <math.h>

#include "stack.h"
#include "debug.h"


int main()
{
    INIT_LOG;

    Stack stk = {};
    StackInit(&stk);

    StackDtor(&stk);

    CLOSE_LOG;
    return 0;
}
