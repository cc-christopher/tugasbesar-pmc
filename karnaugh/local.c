# include "local.h"

int operate(
            Stack *orione,       // koleksi path
            Stack *newone      // koleksi baru
            )
{
    Node * currNode = orione->head;
    while (currNode->next != NULL) {
        Node * secNode = currNode->next;
        while (secNode != NULL) {

            int max_len = 4;
            char oristr[max_len];
            strcpy(oristr, currNode->data);
            char secStr[max_len];
            strcpy(secStr, secNode->data);

            int difbool = 0;
            for (int i=0; i<max_len; i++) {
                if (oristr[i] != secStr[i]) {
                    difbool++;
                }
            }
            printf("%d\n", difbool);
            if (difbool == 1) {
                currNode->yes = 1;
                secNode->yes = 1;

                char newstr[max_len];
                strcpy(newstr, oristr);
                for (int i=0; i<max_len; i++) {
                    if (newstr[i] != secStr[i]) {
                        newstr[i] = '-';
                    }
                }
                Node * newNode = (Node *) malloc((sizeof(Node)));
                strcpy(newNode->data, newstr);
                newNode->yes = 0;
                newNode->next = newone->head;
                newone->head = newNode;
            }

            secNode = secNode->next;
        }
        currNode = currNode->next;
    }

    Node * checkNode = orione->head;

    int recurse = 0;
    while(checkNode != NULL) {
        if (checkNode->yes == 0) {
            Node * newNode = (Node *) malloc((sizeof(Node)));
            strcpy(newNode->data, checkNode->data);
            newNode->yes = 0;
            newNode->next = newone->head;
            newone->head = newNode;

        }
        else {
            recurse = 1;
        }
        checkNode = checkNode->next;
    }
    Stack *emptystack = (Stack *) malloc (sizeof(Stack));
    emptystack->head = NULL;

    if (recurse) {
        operate(newone, emptystack);
    }

}
void writeSource(Stack *refstack)
{
    int max_len = 4;
    Node * currNode = refstack->head;
    for (int i=0; i<max_len; i++) {
        if (currNode->data[i] == '1') {
            printf("%c", i+65);
        }
        else if (currNode->data[i] == '0') {
            printf("%c'", i+65);
        }
    }
    currNode = currNode->next;
    while (currNode != NULL) {
        printf(" + ");
        for (int i=0; i<max_len; i++) {
            if (currNode->data[i] == '1') {
                printf("%c", i+65);
            }
            else if (currNode->data[i] == '0') {
                printf("%c'", i+65);
            }
        }
        currNode = currNode->next;
    }
}
