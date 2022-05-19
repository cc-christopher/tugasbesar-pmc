

#include <stdio.h>
#include <stdlib.h>
#include "local.h"

int main()
{
    Stack *oristack = (Stack *) malloc (sizeof(Stack));
    oristack->head = NULL;

    // ganti jika sudah ada tambahan
    Node *newNode1 = (Node *) malloc (sizeof(Node));
    Node *newNode2 = (Node *) malloc (sizeof(Node));
    Node *newNode3 = (Node *) malloc (sizeof(Node));
    Node *newNode4 = (Node *) malloc (sizeof(Node));

    strcpy(newNode1->data, "0000");
    newNode1->next = oristack->head;
    newNode1->yes = 0;
    oristack->head = newNode1;

    strcpy(newNode2->data, "0100");
    newNode2->next = oristack->head;
    newNode2->yes = 0;
    oristack->head = newNode2;

    strcpy(newNode3->data, "0010");
    newNode3->next = oristack->head;
    newNode3->yes = 0;
    oristack->head = newNode3;

    strcpy(newNode4->data, "1111");
    newNode4->next = oristack->head;
    newNode4->yes = 0;
    oristack->head = newNode4;

    Stack *newstack = (Stack *) malloc (sizeof(Stack));
    newstack->head = NULL;

    if (oristack->head->next == NULL) {
        printf("Bruh");
    }
    operate(oristack,          // adjacent matrix
            newstack
            );
                    // -> *Stack path_list


    writeSource(newstack);
}
