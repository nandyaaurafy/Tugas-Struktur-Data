#include < stdlib.h >
#include
#include < iostream >
#include

using namespace  std ;

int  pencarian ( char st [], char m) {
    int i, posisi, panjang;

    i = 0 ;
    posisi = - 1 ;
    panjang = strlen (st);
    while ((i <panjang- 1 ) && posisi == - 1 )
    {
        if (st [i] == m)
            posisi = i;
            i ++;
    }
    kembali posisi;
}
int  main () {
	Cout << ( " ============================================= ======== " ) << endl << endl;
	cout << ( " Nama: Nandya Aura FY" ) << endl;
	cout << ( " NIM: 19051397060 " ) << endl;
	cout << ( " Prodi: Manajemen Informatika B " ) << endl << endl;
	Cout << ( " ============================================= ======== " ) << endl << endl;
    printf ( " \ t Pencarian dengan metode Pencarian Biner \ n \ n " );

    char kalimat [] = " Sisilia Thya Safitri " ;
    char dicari = ' t ' ;
    printf ( " \ n Posisi% c dalam string% sempatkan pada indeks kem (% d) \ n " , dicari, kalimat, pencarian (kalimat, dicari));
    sistem ( " PAUSE " );
    return  0 ;
}
