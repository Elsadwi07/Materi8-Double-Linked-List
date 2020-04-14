# include  < iostream >
# include  < cstdlib >
# include  < ctime >
menggunakan  namespace  std ;

typedef  struct  node
{
	kata sandi string;
	simpul * selanjutnya;
	simpul * sebelumnya;
}*daftar;

daftar kepala;
daftar ekor;
int batas;

membatalkan  initData ()
{
	head = NULL ;
	tail = NULL ;
}

int  cekHead ()
{
	return (head == NULL )? 1 : 0 ;
}

membatalkan  tampilList ()
{
	daftar bantu;
	bantu = head;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong " ;
	}
	lain
	{
		untuk ( int x = 1 ; x <= batas; x ++)
		{
			cout << " Karakter Ke- " << x << " : " << bantu-> password << endl;
			bantu = bantu-> selanjutnya ;
		}
	}
}

membatalkan  tampilListBaru ()
{
	daftar bantu;
	bantu = head;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong " ;
	}
	lain
	{
		untuk ( int x = 1 ; x <= batas; x ++)
		{
			cout << bantu-> kata sandi ;
			bantu = bantu-> selanjutnya ;
		}
	}
}

batal  hapusDepan ();
membatalkan  hapusBelakang ();
batal  hapusData ( int nomor)
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	} lain
	{
		if (nomor == 1 )
		{
			hapusDepan ();
		}
		lain  jika (nomor == batas)
		{
			hapusBelakang ();
		}
		lain  jika ((nomor> batas) || (nomor < 0 ))
		{
			cout << " Tidak Ada Urutan Tidak Ditemukan \ n \ n " ;
		}
		lain
		{
			bantu = head;
			untuk ( int x = 1 ; x <nomor; x ++)
			{
				bantu = bantu-> selanjutnya ;
			}
			bantu-> prev -> next = bantu-> next ;
			bantu-> selanjutnya -> prev = bantu-> prev ;
			hapus bantu;
			batas--;
			cout << " Karakter Ke- " << nomor << " Telah Dihapus \ n \ n " ;
		}
	}
}

batal  hapusDepan ()
{
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	}
	lain
	{
		daftar bantu;
		bantu = head;
		head = head-> selanjutnya ;
		head-> prev = tail;
		tail-> next = kepala;
		hapus bantu;
		batas--;
		cout << " Karakter Terdepan Telah Dihapus \ n \ n " ;
	}
}

batal  hapusBelakang ()
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	}
	lain
	{
		bantu = ekor;
		tail = tail-> prev ;
		tail-> next = kepala;
		head-> prev = tail;
		hapus bantu;
		batas--;
		cout << " Karakter Terbelakang Telah Dihapus \ n \ n " ;
	}
}

batal  hapusSebelumNode ( int nomor)
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	}
	lain
	{
		if (nomor == 1 )
		{
			hapusBelakang ();
		}
		lain  jika (nomor == 2 )
		{
			hapusDepan ();
		}
		lain  jika ((nomor> batas) || (nomor < 0 ))
		{
			cout << " Tidak Ada Urutan Tidak Ditemukan \ n \ n " ;
		}
		lain
		{
			bantu = head;
			untuk ( int x = 1 ; x <nomor - 1 ; x ++)
			{
				bantu = bantu-> selanjutnya ;
			}
			bantu-> prev -> next = bantu-> next ;
			bantu-> selanjutnya -> prev = bantu-> prev ;
			hapus bantu;
			batas--;
			cout << " Karakter Sebelum Ke- " << nomor << " Telah Dihapus \ n \ n " ;
		}
	}
}

batal  hapusSetelahNode ( int nomor)
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	}
	lain
	{
		if (nomor == batas)
		{
			hapusDepan ();
		}
		lain  jika (nomor == batas - 1 )
		{
			hapusBelakang ();
		}
		lain  jika ((nomor> batas) || (nomor < 0 ))
		{
			cout << " Tidak Ada Urutan Tidak Ditemukan \ n \ n " ;
		}
		lain
		{
			bantu = head;
			untuk ( int x = 1 ; x <= nomor; x ++)
			{
				bantu = bantu-> selanjutnya ;
			}
			bantu-> prev -> next = bantu-> next ;
			bantu-> selanjutnya -> prev = bantu-> prev ;
			hapus bantu;
			batas--;
			cout << " Karakter Setelah Ke- " << nomor << " Telah Dihapus \ n \ n " ;
		}
	}
}

batal  hapusSemua ()
{
	daftar bantu;
	daftar hapus;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	}
	lain
	{
		bantu = head;
		while (bantu! = tail)
		{
			hapus = bantu;
			bantu = bantu-> selanjutnya ;
			hapus hapus ;
		}
		head = NULL ;
		tail = NULL ;
		batas = 0 ;
		hapus bantu;
		cout << " Kata Sandi Telah Terhapus \ n \ n " ;
	}
}

void  gantiData (masukkan daftar, nomor int )
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Kata Sandi Masih Kosong \ n \ n " ;
	}
	lain
	{
		if (nomor == 1 )
		{
			bantu = head;
			insert-> next = bantu-> next ;
			bantu-> selanjutnya -> prev = masukkan;
			insert-> prev = tail;
			tail-> next = masukkan;
			head = masukkan;
			hapus bantu;
			cout << " Karakter Ke- " << nomor << " Telah Diganti \ n \ n " ;
		}
		lain  jika (nomor == batas)
		{
			bantu = ekor;
			bantu-> prev -> next = masukkan;
			masukkan-> prev = bantu-> prev ;
			insert-> next = head;
			head-> prev = masukkan;
			tail = masukkan;
			hapus bantu;
			cout << " Karakter Ke- " << nomor << " Telah Diganti \ n \ n " ;
		}
		lain  jika ((nomor> batas) || (nomor < 0 ))
		{
			cout << " Tidak Ada Urutan Tidak Ditemukan \ n \ n " ;
		}
		lain
		{
			bantu = head;
			untuk ( int x = 1 ; x <nomor; x ++)
			{
				bantu = bantu-> selanjutnya ;
			}
			bantu-> prev -> next = masukkan;
			masukkan-> prev = bantu-> prev ;
			insert-> next = bantu-> next ;
			bantu-> selanjutnya -> prev = masukkan;
			hapus bantu;
			cout << " Karakter Ke- " << nomor << " Telah Diganti \ n \ n " ;
		}
	}
}

membatalkan  dataDepan (masukkan daftar)
{
	if ( cekHead () == 1 )
	{
		head = masukkan;
		head-> next = NULL ;
		head-> prev = NULL ;
		batas ++;
	}
	lain
	{
		insert-> next = head;
		head-> prev = masukkan;
		head = masukkan;
		head-> prev = tail;
		batas ++;
	}
	sistem ( " cls " );
	cout << " Karakter Telah Ditambahkan Di Depan \ n \ n " ;
}

membatalkan  dataBelakang (sisipan daftar)
{
	if ( cekHead () == 1 )
	{
		dataDepan (masukkan);
	}
	lain
	{
		tail-> next = masukkan;
		insert-> prev = tail;
		tail = masukkan;
		tail-> next = kepala;
		head-> prev = tail;
		batas ++;
	}
	cout << " Karakter Telah Ditambahkan Di Belakang \ n \ n " ;
}

membatalkan  DataSebelumNode (masukkan daftar, nomor int )
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		dataDepan (masukkan);
	}
	lain
	{
		if (nomor == 1 )
		{
			dataBelakang (masukkan);
		}
		lain  jika (nomor == 2 )
		{
			dataDepan (masukkan);
		}
		lain  jika ((nomor> batas) || (nomor < 0 ))
		{
			cout << " Tidak Ada Urutan Tidak Ditemukan \ n \ n " ;
		}
		lain
		{
			bantu = head;
			untuk ( int x = 1 ; x <nomor; x ++)
			{
				bantu = bantu-> selanjutnya ;
			}
			bantu-> prev -> next = masukkan;
			masukkan-> prev = bantu-> prev ;
			insert-> next = bantu;
			bantu-> prev = masukkan;
			batas ++;
			cout << " Karakter Telah ditambahkan Sebelum Data Ke- " << nomor << " \ n \ n " ;
		}
	}

}

membatalkan  DataSetelahNode (masukkan daftar, nomor int )
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		dataDepan (masukkan);
	}
	lain
	{
		if (nomor == batas)
		{
			dataDepan (masukkan);
		}
		lain  jika (nomor == batas - 1 )
		{
			dataBelakang (masukkan);
		}
		lain  jika ((nomor> batas) || (nomor < 0 ))
		{
			cout << " Tidak Ada Urutan Tidak Ditemukan \ n \ n " ;
		}
		lain
		{
			bantu = head;
			untuk ( int x = 1 ; x <= nomor; x ++)
			{
				bantu = bantu-> selanjutnya ;
			}
			bantu-> prev -> next = masukkan;
			masukkan-> prev = bantu-> prev ;
			insert-> next = bantu;
			bantu-> prev = masukkan;
			batas ++;
			cout << " Karakter Telah ditambahkan Setelah Data Ke- " << nomor << " \ n \ n " ;
		}
	}
}

membatalkan  Enkripsi ()
{
	daftar bantu, tempat;
	 acak arang ;
	bantu = head;
	untuk ( int x = 1 ; x <= batas; x ++)
	{
		if (x == batas - 2 )
		{
			bantu-> prev -> next = NULL ;
			bantu-> prev = NULL ;
			head = bantu;
		}
		lain
		{
			bantu = bantu-> selanjutnya ;
		}
	}

	bantu = head;
	melakukan
	{
		bantu = bantu-> selanjutnya ;
	} while (bantu-> next ! = NULL );
	tail = bantu;
	head-> prev = tail;
	tail-> next = kepala;

	int jarak, a, b, hasil;
	jarak = 33 - 47 ;
	a = rand ();
	b = a% jarak;
	hasil = b + 33 ;
	acak = hasil;

	tempat = simpul baru ;
	tempat-> kata sandi = acak ;
	bantu = head;
	untuk ( int x = 1 ; x <= 3 ; x ++)
	{
		bantu = bantu-> selanjutnya ;
	}
	bantu-> prev -> next = tempat;
	tempat-> prev = bantu-> prev ;
	tempat-> next = bantu;
	bantu-> prev = tempat;
	batas ++;
}

batal  Deskripsi ()
{
	daftar bantu, hapus;
	hapus = bantu = head;
	untuk ( int x = 1 ; x <= 3 ; x ++)
	{
		hapus = hapus-> selanjutnya ;
	}
	hapus-> prev -> next = hapus-> next ;
	hapus-> selanjutnya -> prev = hapus-> prev ;
	hapus hapus ;
	batas--;

	untuk ( int x = 1 ; x <= 3 ; x ++)
	{
		bantu = bantu-> selanjutnya ;
	}
	bantu-> prev -> next = NULL ;
	bantu-> prev = NULL ;
	head = bantu;

	bantu = head;
	melakukan
	{
		bantu = bantu-> selanjutnya ;
	} while (bantu-> next ! = NULL );
	tail = bantu;
	head-> prev = tail;
	tail-> next = kepala;
}

membatalkan  SalahMemasukkan ()
{
	sistem ( " cls " );
	cout << " Anda Salah Memasukkan Input \ n \ n " ;
	sistem ( " jeda " );
}

membatalkan  KeluarProgram ()
{
	sistem ( " cls " );
	cout << " Program Anda Keluar \ n \ n " ;
	sistem ( " jeda " );
}

int  main ()
{
	initData ();
	daftar n;
	daftar bantu;
	bantu = simpul baru ;
	melakukan
	{
		unsigned  short  int PILIHAN, Urutan, count = 0 ;
		data string;
		cout << " Program Enkripsi Kata Sandi \ n \ n " ;
		cout << " Apakah kamu ingin melanjutkan? \ n 1. Iya \ n 2. Tidak \ n \ n Pilihan: " ;
		cin >> pilihan;
		beralih (pilihan)
		{
		kasus  1 :
			cout << " Masukkan Panjang Kata Sandi: " ;
			cin >> batas;
			jika (batas < 6 )
			{
				cout << " Panjang Kata Sandi Harus Lebih Besar Sama Dengan 6 !! \ n \ n " ; istirahat ;
			}
			lain
			{
				untuk ( int x = 1 ; x <= batas; x ++)
				{
					jika (x == 1 )
					{
						cout << " Masukkan Karakter Ke- " << x << " : " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						n-> prev = ekor;
						head = n;
						bantu = n;
					}
					lain  jika (x == batas)
					{
						cout << " Masukkan Karakter Ke- " << x << " : " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						bantu-> selanjutnya = n;
						n-> prev = bantu;
						n-> next = head;
						tail = n;
						head-> prev = tail;
						bantu = head;
						cout << " Kata Sandi Telah Masuk Ke Data Store \ n \ n " ;
					}
					lain
					{
						cout << " Masukkan Karakter Ke- " << x << " : " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						bantu-> selanjutnya = n;
						n-> prev = bantu;
						bantu = bantu-> selanjutnya ;
					}
				}
				melakukan
				{
					cout << " Pengoperasian Kata Sandi \ n \ n 1. Tampilkan Data \ n 2. Enkripsi Kata Sandi \ n 3. Deskripsi Kata Sandi \ n 4. Hapus Data Menurut Urutan \ n 5. Hapus Data Depan \ n 6. Hapus Data Belakang \ n 7. Hapus Data Sebelum Urutan \ n 8. Hapus Data Setelah Urutan \ n 9. Hapus Semua Data \ n 10. Ganti Data \ n 11. Input Data Depan \ n 12. Input Data Belakang \ n 13. Input Data Sebelum Urutan \ n 14. Input Data Setelah Urutan \ n 15. Keluar Program \ n \ nPilihan: " ;
					cin >> pilihan;
					beralih (pilihan)
					{
					kasus  1 :
						tampilList ();
						cout << endl << endl; istirahat ;
					kasus  2 :
						beralih (hitung)
						{
						case  0 :
							cout << " Kata Sandi Asli: " ;
							tampilListBaru ();
							Enkripsi ();
							cout << " \ n Kata Sandi Setelah Di Enkripsi: " ;
							tampilListBaru ();
							cout << endl << endl;
							hitung ++;
							istirahat ;
						default :
							cout << " Kata Sandi Sudah Di Enkripsi \ n \ n " ;
							cout << endl << endl; istirahat ;
						} istirahat ;
					kasus  3 :
						beralih (hitung)
						{
						kasus  1 :
							cout << " Kata Sandi Sebelum Di Deskripsi: " ;
							tampilListBaru ();
							Deskripsi ();
							cout << " \ n Kata Sandi Setelah Di Deskripsi: " ;
							tampilListBaru ();
							cout << endl << endl;
							menghitung--; istirahat ;
						default :
							cout << " Kata Sandi Sudah Di Deskripsi \ n \ n " ;
							cout << endl << endl; istirahat ;
						} istirahat ;
					kasus  4 :
						tampilList ();
						cout << endl << endl;
						cout << " Masukkan Nomor Urutan: " ;
						cin >> urutan;
						hapusData (pilih); istirahat ;
					kasus  5 :
						hapusDepan (); istirahat ;
					kasus  6 :
						hapusBelakang (); istirahat ;
					kasus  7 :
						tampilList ();
						cout << endl << endl;
						cout << " Masukkan Nomor Urutan: " ;
						cin >> urutan;
						hapusSebelumNode (urutan); istirahat ;
					kasus  8 :
						tampilList ();
						cout << endl << endl;
						cout << " Masukkan Nomor Urutan: " ;
						cin >> urutan;
						hapusSetelahNode (urutan); istirahat ;
					kasus  9 :
						hapusSemua (); istirahat ;
					kasus  10 :
						tampilList ();
						cout << endl << endl;
						cout << " Masukkan Nomor Urutan: " ;
						cin >> urutan;
						cout << " Masukkan Karakter Baru: " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						gantiData (n, urutan); istirahat ;
					kasus  11 :
						cout << " Masukkan Karakter: " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						dataDepan (n); istirahat ;
					kasus  12 :
						cout << " Masukkan Karakter: " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						dataBelakang (n); istirahat ;
					kasus  13 :
						tampilList ();
						cout << endl << endl;
						cout << " Masukkan Nomor Urutan: " ;
						cin >> urutan;
						cout << " Masukkan Karakter: " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						DataSebelumNode (n, urutan); istirahat ;
					kasus  14 :
						tampilList ();
						cout << endl << endl;
						cout << " Masukkan Nomor Urutan: " ;
						cin >> urutan;
						cout << " Masukkan Karakter: " ;
						cin >> data;
						n = simpul baru ;
						n-> kata sandi = data;
						DataSetelahNode (n, urutan); istirahat ;
					kasus  15 :
						KeluarProgram ();
						return  0 ;
						istirahat ;
					default :
						SalahMemasukkan ();
						return  0 ; istirahat ;
					}
				} while ( true );
			}
			
		kasus  2 :
			KeluarProgram ();
			return  0 ;
		default :
			SalahMemasukkan ();
			return  0 ;
		}
	} while ( true );
}
