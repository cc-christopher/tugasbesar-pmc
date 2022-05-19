

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 255

//  Nodus data lama
typedef struct Node {
    char data[MAX_STR];         // string penyimpan satu path
    int yes;
    struct Node* next;                 // selanjutnya
}Node;


// Stack pengakses tumpukan nodus
typedef struct Stack {
    Node* head;                     // alamat tumpukan teratas
} Stack;

// fungsi rekursif
int operate(
            Stack *path_list,           // tumpukan string path
            Stack *banned_list);        // tumpukan string hasil


// debugging
void writeSource(
                 Stack *refstack        // stack path_list
                 );



