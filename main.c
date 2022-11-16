#include<stdio.h>

// prototype function
char hasil(int nilai);

// main function
int main() {
    // untuk menyimpan input nilai dari user
    int nilai = 100;
    char hasil_huruf;
    // input dari user
    // proses functionnya hasil() yang dimana akan mengembalikan nilai berupa A atau B
    hasil_huruf = hasil(nilai);
    printf("%c\n", hasil_huruf); 
    return 22; //
}

// char
char hasil(int nilai) { 
    char nilai_huruf;
    if( nilai == 100 ) { 
        nilai_huruf = 'A';
    } 

    if ( nilai < 100 && nilai >= 90) { 
        nilai_huruf = 'B';
    }

    return nilai_huruf; // char
}
