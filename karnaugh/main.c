

#include <stdio.h>
#include <stdlib.h>
#include "local.h"

int main()
{
    Stack *oristack = (Stack *) malloc (sizeof(Stack));
    oristack->head = NULL;
    Stack *newstack = (Stack *) malloc (sizeof(Stack));
    newstack->head = NULL;

    int n;
    readFile(oristack, &n);

    operate(oristack,          // asal
            newstack,          // hasil
            n-1                  // jumlah aljabar
            );
                    // -> *Stack


    writeResult(newstack,
                n-1
                );     // -> CUI
}
