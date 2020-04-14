# include  < iostream > 
# include  < conio.h > 
# sertakan  < stdio.h >
# include  < stdlib.h >

menggunakan  namespace  std ;

int pil; batal  pilih ();
batal  buat_baru ();
void  tambah_belakang ();
membatalkan  tambah_depan ();
membatalkan  hapus_belakang ();
membatalkan  hapus_depan ();
void  tampil ();

 simpul terstruktur 
{
     data int ;
     simpul * sebelumnya, * selanjutnya;
}; 

node * baru, * head = NULL , * tail = NULL , * hapus, * bantu;

int  main ()
 {
     melakukan
     {
     	 cout << " MENU DOUBLE LINKEDLIST " << endl;
         cout << " 1. Tambah Depan " << endl;
         cout << " 2. Tambah Belakang " << endl;
         cout << " 3. Hapus Depan " << endl;
         cout << " 4. Hapus Belakang " << endl;
         cout << " 5. Tampilkan " << endl;
         cout << " 6. Selesai " << endl;
         cout << " Pilihan Anda: " ;
         cin >> pil;
         pilih ();
	 }
 sementara (pil! = 6 );
 } 

batal  pilih ()
 { 
     jika (pil == 1 )
         tambah_depan ();
     lain  jika (pil == 2 )
         tambah_belakang ();
     lain  jika (pil == 3 )
         hapus_depan ();
     lain  jika (pil == 4 )
         hapus_belakang ();
     lain  jika (pil == 5 )
         tampil ();
     lain
         cout << " selesai " ;
}

batal  buat_baru ()
{   
     baru = baru (simpul);
     cout << " Masukkan data: " ; cin >> baru-> data ;
     baru-> prev = NULL ;
     baru-> selanjutnya = NULL ;
} 

void  tambah_belakang ()
{
     buat_baru ();
     if (head == NULL )
      {
         head = baru;
         tail = baru;
      }
     lain
     {
         tail-> next = baru;
         baru-> prev = ekor;
         tail = baru;
     }
     cout << endl << endl;
     tampil ();
} 

membatalkan  tambah_depan ()
 {
     buat_baru ();
     if (head == NULL )
     {
         head = baru;
         tail = baru;
     }
     lain
     {
         baru-> next = head;
         head-> prev = baru;
         head = baru;
     }
     cout << endl << endl;
     tampil ();
 } 

batal  hapus_depan ()
 {
     if (head == NULL )
         cout << " Kosong " ;
     lain  jika (kepala-> selanjutnya == NULL )
     {
       hapus = head;
       head = NULL ;
       tail = NULL ;
       hapus hapus ;
     }
     lain
     {
         hapus = head;
         head = hapus-> selanjutnya ;
         head-> prev = NULL ;
         hapus hapus ;
     }
     cout << endl << endl;
     tampil ();
 } 

membatalkan  hapus_belakang ()
 {
     if (head == NULL )
         cout << " Kosong " ;
     lain  jika (kepala-> selanjutnya == NULL )
     {
       hapus = head;
       head = NULL ;
       tail = NULL ;
       hapus hapus ;
     }
     lain
     {
      hapus = ekor;
      tail = hapus-> prev ;
      tail-> next = NULL ;
      hapus hapus ;
     }
     cout << endl << endl;
     tampil ();
} 

void  tampil ()
 {
      if (head == NULL )
           cout << " Kosong " ;
      lain
      {
          bantu = head;
          while (bantu! = NULL )
          {
             cout << "   Data: " <<bantu-> data ;
             bantu = bantu-> selanjutnya ;
          }
      }
      getch ();
}
