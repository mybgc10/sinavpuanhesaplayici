/*kodum 10 soruluk bir s�nava giren 3 ��rencinin net say�s�n� puan�n� ve do�ru yanl�� say�s�n� g�steririr
yap�mc� :muhammed yusuf ba�c� tarih:19.12.2023/20.10*/




#include<iostream>
using namespace std;

int main()
{
	int ogr = 0;
	int cvp = 0;
	const int ogrSayisi = 3;
	const int soruSayisi = 10;
	char anahtar[soruSayisi];
	char cevap[ogrSayisi][soruSayisi];
	int dogru = 0, yanlis = 0, skor, puan�n�z;
	cout << "Lutfen cevap anahtarinizi giriniz\n";
	for (int i = 0; i < soruSayisi; i++)
		cin >> anahtar[i];
	for (int ogr = 0; ogr < ogrSayisi; ogr++)
	{
		cout << ogr + 1 << ". Ogrencinin cevaplarini giriniz: ";
		for (int cvp = 0; cvp < soruSayisi; cvp++)
		{
			cin >> cevap[ogr][cvp];
			if (cevap[ogr][cvp] == anahtar[cvp])
				dogru++;
			else
				yanlis++;
		}
		skor = dogru - (yanlis / 2);
		puan�n�z = skor * 10;
		cout << "Dogru Sayisi:\t" << dogru << endl;
		cout << "Yanlis Sayisi:\t" << yanlis << endl;
		cout << "skorunuz:\t" << skor << endl;
		cout << "puan�n�z:\t" << puan�n�z << endl;
		dogru = 0;
		skor = 0;
		yanlis = 0;
		puan�n�z = 0;
	}
	return 0;
}