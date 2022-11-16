**Algoritma**: char hasil(int nilai)

Algoritma ini adalah untuk menghitung nilai_akhir dari sebuah input yang nantiya akan dievaluasi untuk nilai huruf note: **(Minimal 2 Kalimat, 3 Baris)**

**Deklarasi**: 

`char nilai_huruf`

**Description**:

```txt
TAKE PARAMS nilai AS INPUT TO FUNCTION

DECLARE nilai_huruf

IF nilai == 100 THEN PRINT "A"
IF nilai < 100 AND nilai >= 90 THEN PRINT "B"

RETURN nilai_huruf
```

Dari pseudocode diatas maka kita dapat membuat sebuah function `char hasil(int nilai)` seperti dibawah ini.

```c
// mengambil parameter input nilai atau kita menggunakan 
// TAKE PARAMS nilai AS INPUT TO FUNCTION
char hasil(int nilai) {  
    // DECLARE nilai_huruf
    char nilai_huruf; 
    // IF nilai == 100 THEN PRINT "A"
    if( nilai == 100 ) { 
        nilai_huruf = 'A';
    } 

    // IF nilai == 100 THEN PRINT "A"
    if ( nilai < 100 && nilai >= 90) { 
        nilai_huruf = 'B';
    }

    // RETURN nilai_huruf
    return nilai_huruf; // char
}
```

--- 

Nah untuk function diatas bisa kita implementasikan dalam suatu program jadinya seperti dibawah ini.

```c
#include<stdio.h>

// prototype function
char hasil(int nilai);

// main function
int main() {
    // assign variabel `nilai` dengan integer bernilai 100 
    int nilai = 100;
    // deklarasikan hasil_huruf untuk menampung hasil return dari function `char hasil(int nilai)` 
    char hasil_huruf;
    // memberikan variabel `nilai` kepada function `char hasil(int nilai)` 
    // sehingga nantinya nilai kembali dari function tersebut akan disimpan ke variabel `hasil_huruf`   
    hasil_huruf = hasil(nilai);
    // print nilai dari `hasil huruf` yang merupakan nilai kembali dari function `hasil`
    printf("%c\n", hasil_huruf); 
    return 0; 
}

// TAKE PARAMS nilai AS INPUT TO FUNCTION
char hasil(int nilai) {  
    // DECLARE nilai_huruf
    char nilai_huruf; 
    // IF nilai == 100 THEN PRINT "A"
    if( nilai == 100 ) { 
        nilai_huruf = 'A';
    } 

    // IF nilai == 100 THEN PRINT "A"
    if ( nilai < 100 && nilai >= 90) { 
        nilai_huruf = 'B';
    }

    // RETURN nilai_huruf
    return nilai_huruf; // char
}
```

output

```
A
```

