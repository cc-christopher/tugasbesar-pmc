#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

int inputFile(int *i_dim, int *j_dim)
{
    char file_name[MAX_STR];
    char line[MAX_STR];
    char temp[MAX_STR];

    char *token;

    int count = 0;

    // nama file pada current directory
    printf("Masukkan file truth table yang hendak dianalisis: ")
    scanf("%d", file_name);

    //buka file - validasi
    FILE *file_kar = fopen(file_name, "r");
    if(file_kar == NULL) {
        printf("File tidak ditemukan. Mohon restart program...\n");
        fclose(file_kar);
        exit(1);
    }

    printf("File ditemukan. Mulai mencetak tabel kebenaran...");
    fgets(line, MAX_STR, file_kar);
    int **truthtable = (int **) malloc (())

    while(fgets(line, MAX_STR, file_kar)) {
        strcpy(temp,each_line);
        int curr_ix = 0, curr_col = 0;
        token = strtok(temp,",");
        while(token!=NULL) {
            value = atoi(token);
            truthtable[curr_ix][curr_col] = value;
            column++;
            token = strtok(NULL, ",");
        }
    }
    return truthtable;
}

int choose (int * choice)
{
    printf("Tentukan jenis Karnaugh Map yang digunakan:\n1. Standard K-Map\n2. Don't Cares\n");
    printf("Tuliskan nomor pilihan: ");
    scanf("%d", choice);
    printf("\n");
}

int showMap(int **matrix, int i_dim, int j_dim)
{
    for (int i=65; i<i_dim; i++) {

    }
    for (int i=0; i<i_dim; i++) {
        for (int j=0; j<j_dim; j++) {
            printf("%d", matrix[i][j]");
        }
    }
}

int main()
{
    printf("Tugas Besar Pemecahan Masalah dengan C: Kelompok \nAnggota 1 \t18320\nAnggota 1 \t18320\nAnggota 1 \t18320\n\n");

	int i_mat, j_mat, choice;
	char** truthtable;
	charr**

    truthtable = inputFile(&i_mat, &j_mat);     //baca file tabel, kemudian buat sebagai matriks
    showMap(truthtable, i_mat, j_mat);          //tampilkan tabel dari file
    choose(&choice);                            //pilih aturan Karnaugh
    kar = process(truthtable, i_mat, j_mat);    //buat K-Map
    showMap(kar, i_mat, j_mat);                 //tampilkan tabel hasil proses
}
