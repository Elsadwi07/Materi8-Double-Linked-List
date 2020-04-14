# include  < iostream >
# include  < conio.h >
# sertakan  < stdio.h >
# include  < stdlib.h >

menggunakan  namespace  std ;

typedef  struct  node
{
	data int ;
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
		cout << " Data Masih Kosong " ;
	}
	lain
	{
		untuk ( int x = 1 ; x <= batas; x ++)
		{
			cout << " Data Ke- " << x << " : " << bantu-> data << endl;
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
		cout << " Data Masih Kosong \ n \ n " ;
	}
	lain
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
			cout << " Data Ke- " << nomor << " Telah Dihapus \ n \ n " ;
		}
	}
}

batal  hapusDepan ()
{
	if ( cekHead () == 1 )
	{
		cout << " Data Masih Kosong \ n \ n " ;
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
		cout << " Data Depan Telah Dihapus \ n \ n " ;
	}
}

batal  hapusBelakang ()
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Data Masih Kosong \ n \ n " ;
	}
	lain
	{
		bantu = ekor;
		tail = tail-> prev ;
		tail-> next = kepala;
		head-> prev = tail;
		hapus bantu;
		batas--;
		cout << " Data Belakang Telah Dihapus \ n \ n " ;
	}
}

batal  hapusSebelumNode ( int nomor)
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Data Masih Kosong \ n \ n " ;
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
			cout << " Data Sebelum Ke- " << nomor << " Telah Dihapus \ n \ n " ;
		}
	}
}

batal  hapusSetelahNode ( int nomor)
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Data Masih Kosong \ n \ n " ;
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
			cout << " Data Setelah Ke- " << nomor << " Telah Dihapus \ n \ n " ;
		}
	}
}

batal  hapusSemua ()
{
	daftar bantu;
	daftar hapus;
	if ( cekHead () == 1 )
	{
		cout << " Data Masih Kosong \ n \ n " ;
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
		cout << " Semua Data Telah Terhapus \ n \ n " ;
	}
}

void  gantiData (masukkan daftar, nomor int )
{
	daftar bantu;
	if ( cekHead () == 1 )
	{
		cout << " Data Masih Kosong \ n \ n " ;
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
			cout << " Data Ke- " << nomor << " Telah Diganti \ n \ n " ;
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
			cout << " Data Ke- " << nomor << " Telah Diganti \ n \ n " ;
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
			cout << " Data Ke- " << nomor << " Telah Diganti \ n \ n " ;
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
	cout << " Data Telah Ditambahkan Di Depan \ n \ n " ;
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
	cout << " Data Telah Ditambahkan Di Belakang \ n \ n " ;
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
			cout << " Data Telah ditambahkan Sebelum Data Ke- " << nomor << " \ n \ n " ;
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
			cout << " Data Telah ditambahkan Setelah Data Ke- " << nomor << " \ n \ n " ;
		}
	}
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
		unsigned  short  int pilihan, urutan;
		data int ;
		cout << " Program Double Linked List Circular \ n \ n " ;
		cout << " Apakah kamu ingin melanjutkan? \ n 1. Iya \ n 2. Tidak \ n \ n Pilihan: " ;
		cin >> pilihan;
		beralih (pilihan)
		{
		kasus  1 :
			cout << " Masukkan Jumlah Data: " ;
			cin >> batas;
			untuk ( int x = 1 ; x <= batas; x ++)
			{
				jika (x == 1 )
				{
					cout << " Data Ke- " << x << " \ n \ n " ;
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					n-> prev = ekor;
					head = n;
					bantu = n;
					cout << " \ n \ n Data Telah Masuk Ke Penyimpanan Data \ n \ n " ;
				}
				lain  jika (x == batas)
				{
					cout << " Data Ke- " << x << " \ n \ n " ;
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					bantu-> selanjutnya = n;
					n-> prev = bantu;
					n-> next = head;
					tail = n;
					head-> prev = tail;
					bantu = head;
					cout << " \ n \ n Data Telah Masuk Ke Penyimpanan Data \ n \ n " ;
				}
				lain
				{
					cout << " Data Ke- " << x << " \ n \ n " ;
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					bantu-> selanjutnya = n;
					n-> prev = bantu;
					bantu = bantu-> selanjutnya ;
					cout << " \ n \ n Data Telah Masuk Ke Penyimpanan Data \ n \ n " ;
				}
			}
			melakukan
			{
				cout << " Pengoperasian Data \ n \ n 1. Tampilkan Data \ n 2. Hapus Data Menurut Urutan \ n 3. Hapus Data Depan \ n 4. Hapus Data Belakang \ n 5. Hapus Data Sebelum Urutan \ n 6. Hapus Data Setelah Urutan \ n 7. Hapus Semua Data \ n 8. Ganti Data \ n 9. Input Data Depan \ n 10. Input Data Belakang \ n 11. Input Data Sebelum Urutan \ n 12. Input Data Setelah Urutan \ n 13. Keluar Program \ n \ n Pilihan: " ;
				cin >> pilihan;
				beralih (pilihan)
				{
				kasus  1 :
					tampilList ();
					cout << endl << endl;
					istirahat ;
				kasus  2 :
					tampilList ();
					cout << endl << endl;
					cout << " Masukkan Nomor Urutan: " ;
					cin >> urutan;
					hapusData (pilih);
					istirahat ;
				kasus  3 :
					hapusDepan ();
					istirahat ;
				kasus  4 :
					hapusBelakang ();
					istirahat ;
				kasus  5 :
					tampilList ();
					cout << endl << endl;
					cout << " Masukkan Nomor Urutan: " ;
					cin >> urutan;
					hapusSebelumNode (urutan);
					istirahat ;
				kasus  6 :
					tampilList ();
					cout << endl << endl;
					cout << " Masukkan Nomor Urutan: " ;
					cin >> urutan;
					hapusSetelahNode (urutan);
					istirahat ;
				kasus  7 :
					hapusSemua ();
					istirahat ;
				kasus  8 :
					tampilList ();
					cout << endl << endl;
					cout << " Masukkan Nomor Urutan: " ;
					cin >> urutan;
					cout << " Masukkan Data Baru: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					gantiData (n, urutan);
					istirahat ;
				kasus  9 :
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					dataDepan (n);
					istirahat ;
				kasus  10 :
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					dataBelakang (n);
					istirahat ;
				kasus  11 :
					tampilList ();
					cout << endl << endl;
					cout << " Masukkan Nomor Urutan: " ;
					cin >> urutan;
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					DataSebelumNode (n, urutan);
					istirahat ;
				kasus  12 :
					tampilList ();
					cout << endl << endl;
					cout << " Masukkan Nomor Urutan: " ;
					cin >> urutan;
					cout << " Masukkan Data: " ;
					cin >> data;
					n = simpul baru ;
					n-> data = data;
					DataSetelahNode (n, urutan);
					istirahat ;
				kasus  13 :
					KeluarProgram ();
					return  0 ;
					istirahat ;
				default :
					SalahMemasukkan ();
					return  0 ;
					istirahat ;
				}
			} while ( true );
		kasus  2 :
			KeluarProgram ();
			return  0 ;
		default :
			SalahMemasukkan ();
			return  0 ;
		}
	} while ( true );
}
