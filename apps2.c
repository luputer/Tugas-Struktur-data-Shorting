#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur pertama
struct Perpustakaan {
    int no_buku;
    char judul[100];
    char penerbit[100];
};

int main() {
    // Mendeklarasikan variabel bertipe struct Perpustakaan 
    struct Perpustakaan buku1;

    // Mengisi nilai ke dalam variabel struktur
    buku1.no_buku = 233;
    strcpy(buku1.judul, "Perayaan Mati Rasa");
    strcpy(buku1.penerbit, "Umay Shahab");

    // Menampilkan nilai dari variabel struktur
    printf("No Buku: %d\n", buku1.no_buku);
    printf("Judul Buku: %s\n", buku1.judul);
    printf("Penerbit: %s\n", buku1.penerbit);

    return 0;
}