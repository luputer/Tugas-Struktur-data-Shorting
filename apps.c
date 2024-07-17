#include <stdio.h>

// Mendefinisikan struktur "Mahasiswa" untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[100];
    int semester;
    char prodi[100];
    char jurusan[100];
};

int main() {
    // Deklarasi variabel bertipe struct Mahasiswa
    struct Mahasiswa mhs1;

    // Mengisi data untuk mahasiswa pertama
    printf("Masukkan nama mahasiswa: ");
    scanf(" %[^\n]", mhs1.nama); // Membaca string yang mengandung spasi
    printf("Masukkan semester mahasiswa: ");
    scanf("%d", &mhs1.semester);
    printf("Masukkan prodi mahasiswa: ");
    scanf(" %[^\n]", mhs1.prodi); // Membaca string yang mengandung spasi
    printf("Masukkan jurusan mahasiswa: ");
    scanf(" %[^\n]", mhs1.jurusan); // Membaca string yang mengandung spasi

    // Menampilkan data mahasiswa pertama
    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs1.nama);
    printf("Semester: %d\n", mhs1.semester);
    printf("Prodi: %s\n", mhs1.prodi);
    printf("Jurusan: %s\n", mhs1.jurusan);
    
    return 0;
}