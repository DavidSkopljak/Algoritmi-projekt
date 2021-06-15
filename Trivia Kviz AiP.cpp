#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void odgovor(int Lineno)
{
	switch (Lineno)
	{
	case 1:
		cout << "\nA) Nil" << endl << "B) Amazona" << endl << "C) Sava" << endl << "D) Mississippi" << endl; break;
	case 2:
		cout << "\nA) Francuska" << endl << "B) Engleska" << endl << "C) Japan" << endl << "D) Španjolska" << endl; break;
	case 3:
		cout << "\nA) 134" << endl << "B) 206" << endl << "C) 306" << endl << "D) 157" << endl; break;
	case 4:
		cout << "\nA) Venera" << endl << "B) Mars" << endl << "C) Merkur" << endl << "D) Saturn" << endl; break;
	case 5:
		cout << "\nA) Juzna Amerika" << endl << "B) Australija" << endl << "C) Afrika" << endl << "D) Antarktika" << endl; break;
	case 6:
		cout << "\nA) Indija" << endl << "B) Finska" << endl << "C) SAD" << endl << "D) Kanada" << endl; break;
	case 7:
		cout << "\nA) 101" << endl << "B) 100" << endl << "C) 116" << endl << "D) 98" << endl; break;
	case 8:
		cout << "\nA) George Washington" << endl << "B) Donald Trump" << endl << "C) George Bush" << endl << "D) Thomas Jefferson" << endl; break;
	case 9:
		cout << "\nA) Engleski" << endl << "B) Kineski" << endl << "C) Portugalski" << endl << "D) Francuski" << endl; break;
	case 10:
		cout << "\nA) Indijski Ocean" << endl << "B) Atlantski Ocean" << endl << "C) Tihi Ocean" << endl << "D) Sjeverni Ocean" << endl; break;
	case 11:
		cout << "\nA) Tokyo" << endl << "B) Peking" << endl << "C) Wuhan" << endl << "D) Seul" << endl; break;
	case 12:
		cout << "\nA) 1991." << endl << "B) 1947." << endl << "C) 1975." << endl << "D) 1934." << endl; break;
	case 13:
		cout << "\nA) Èelik" << endl << "B) Aluminij" << endl << "C) Zlato" << endl << "D) Srebro" << endl; break;
	case 14:
		cout << "\nA) Bijelu" << endl << "B) Plavu" << endl << "C) Crvenu" << endl << "D) Zutu" << endl; break;
	case 15:
		cout << "\nA) Cristoforo Colombo" << endl << "B) Ferdinand Magellan" << endl << "C) Marco Polo" << endl << "D) Juan Sebastian Elcano" << endl;
	}
	cout << "Vas Odgovor: " << endl;

}

int main()
{
	string korisnikIme, korisnikOdgovor;
	int korisnikBodovi = 0, korisnikBodoviPrethodni=3;
	int brojPitanja = 1;
	string linePitanje;
	char lineOdgovor[1];



	ofstream PitanjaInput;
	PitanjaInput.open("TriviaPitanja.txt", ios::trunc);
	PitanjaInput << "1. Koja je najduza rijeka na svijetu?\n";
	PitanjaInput << "2. Koja je zemlja poklonila Kip slobode SAD-u?\n";
	PitanjaInput << "3. Koliko kosti ima u ljudskom tijelu?\n";
	PitanjaInput << "4. Koji je planet najblizi suncu?\n";
	PitanjaInput << "5. Koji je najsusi kontinent?\n";
	PitanjaInput << "6. Koja od ovih drzava ima najvise prirodnih jezera?\n";
	PitanjaInput << "7. Koliko je godina trajao stogodisnji rat?\n";
	PitanjaInput << "8. Tko je bio prvi predsjednik SAD-a?\n";
	PitanjaInput << "9. Koji je jezik na kojem se najvise govori?\n";
	PitanjaInput << "10. Koji je najveci ocean na svijetu?\n";
	PitanjaInput << "11. Koji je glavi grad Kine?\n";
	PitanjaInput << "12. Koje godine je zavrsio hladan rat?\n";
	PitanjaInput << "13. Koji je najlaksi metal koji postoji?\n";
	PitanjaInput << "14. Koju boju mozemo pronaci na vise od 75% zastava drzava?\n";
	PitanjaInput << "15. Tko je prvi oplovio svijet?\n";

	PitanjaInput.close();











	char odgovori[15] = { "A","A","B","C","D","D","C","A","B","C","B","A","B","C","D" };
	char odgovoriSport[15] = { 'A','C','D','D','A','A','A','C','A','B' };
	char odgovoriZivotinje[15] = { 'A','A','C','D','B','D','A','B','C','D' };
	char odgovoriGeografija[15] = { 'B','B','C','B','D','B','A','A','A','C' };
	char odgovoriPovijest[15] = { 'D','D','D','B','C','A','A','C','C','B' };



	cout << "Unesite ime ispod 20 znakova." << endl;
	getline(cin, korisnikIme);
	while (korisnikIme.length() > 20)
	{
		cout << "Unesite ime ispod 20 znakova!" << endl;
		getline(cin, korisnikIme);
	}
	///////////////////////////////////////////////////////////////////////////////////












	ifstream PitanjaOutput;


	while (brojPitanja < 16)
	{

		PitanjaOutput.open("TriviaPitanja.txt");
		for (int Lineno = 1; getline(PitanjaOutput, linePitanje) && Lineno < 16; Lineno++)
		{
			if (Lineno == brojPitanja)
			{
				cout << linePitanje << endl;
				odgovor(Lineno);
				cin >> korisnikOdgovor;
				if (korisnikOdgovor == odgovori[brojPitanja - 1])
					korisnikBodovi++;

			}
		}brojPitanja++;

		PitanjaOutput.close();
	}


	
	
	ofstream rezultatInput;
	rezultatInput.open("prethodni rezulat.txt", ios::out | ios::binary);
	rezultatInput.write((char*)&korisnikBodovi, sizeof(korisnikBodovi));
	rezultatInput.close();

	ifstream rezultatOutput;
	rezultatOutput.open("prethodni rezulat.txt", ios::trunc | ios::in | ios::binary);
	while (!rezultatOutput.eof()) 
	{
		
		rezultatOutput.read((char*)&korisnikBodoviPrethodni, sizeof(korisnikBodovi));
		cout << endl << endl << korisnikBodoviPrethodni << endl;
	}rezultatOutput.close();
	




	

	


















	cout << "Rezultat: " << korisnikBodovi << "/15 bodova!" << endl << "Ime korisnika: " << korisnikIme << endl;
	return 0;
}


















ofstream PitanjaInputSport;
PitanjaInput.open("TriviaPitanjaSport.txt", ios::trunc);
PitanjaInput << "1. Koliko igraca ima u vaterpolo ekipi?\n";
PitanjaInput << "2. Kada je osnovana FIFA?\n";
PitanjaInput << "3. Cak tri puta ulazili su u finale svjetskih prvenstava, ali ga nikada nisu osvojili. O kojoj je reprezentaciji rijec?\n";
PitanjaInput << "4. Gol s najvece udaljenosti u nogometu, 91.9 m, postigao je?\n";
PitanjaInput << "5. Tko je na utakmici protiv Jamajke (3:1) odigranoj 1998. zabio prvi povijesni pogodak za Hrvatsku na Svjetskim prvenstvima?\n";
PitanjaInput << "6. Protiv koje reprezentacije je Drazen Petrovic odigrao svoju posljednju utakmicu?\n";
PitanjaInput << "7. U povijesti je samo jedan nogometaš zaigrao za Dinamo, Hajduk, Rijeku i Osijek. Tko je to?\n";
PitanjaInput << "8. Koja su dva NBA kluba protagonisti dogadaja koji se naziva ,,The Malice in the Palace,,?\n";
PitanjaInput << "9. Kako se u kosarkaskom zargonu naziva blokiranje suparnikove lopte?\n";
PitanjaInput << "10. Sto predstavljaju olimpijski krugovi?\n";

PitanjaInputSport.close();








ofstream PitanjaInputZivotinje;
PitanjaInput.open("TriviaPitanjaZivotinje.txt", ios::trunc);
PitanjaInput << "1. Koliko srca ima hobotnica?\n";
PitanjaInput << "2. Koja domaca životinja nema zube na gornjoj celjusti?\n";
PitanjaInput << "3. Koji je psece najrazvijenije osjetilo?\n";
PitanjaInput << "4. Za koju pticu je poznato da ima oci vece od mozga?\n";
PitanjaInput << "5. U cijelom zivotinjskom carstvu, koja je jedina muska zivotinja koja moze roditi?\n";
PitanjaInput << "6. Za koju je zivotinju poznato da diše kroz kozu?\n";
PitanjaInput << "7. Koliko jaja u prosjeku moze snijeti kokos u godini?\n";
PitanjaInput << "8. Poznato je da zubi koje životinje rastu zauvijek. Koja je to zivotinja?\n";
PitanjaInput << "9. Kravlji zeludac sadrzi koliko odjeljaka?\n";
PitanjaInput << "10. Koji je najveci clan macje obitelji?\n";

PitanjaInputZivotinje.close();











ofstream PitanjaInputGeografija;
PitanjaInput.open("TriviaPitanjaGeografija.txt", ios::trunc);
PitanjaInput << "1. U kojoj je zemlji najvisa planina na svijetu, Mount Everest?\n";
PitanjaInput << "2. Koja drzava SAD ima najdulju obalu nakon Aljaske? \n";
PitanjaInput << "3. Koji je glavni grad Australije?\n";
PitanjaInput << "4. Koji je glavni grad New Yorka?\n";
PitanjaInput << "5. Koja africka drzava ima sluzbeni jezik portugalski?\n";
PitanjaInput << "6. Koji je najjuzniji grad u Africi?\n";
PitanjaInput << "7. Koja drzava u Europskoj uniji ima najvise stanovnika?\n";
PitanjaInput << "8. Koliko vremenskih zona ima Kina?\n";
PitanjaInput << "9. Koji je glavni grad Novog Zelanda?\n";
PitanjaInput << "10. Kako se naziva najduza rijeka zapadne Azije?\n";

PitanjaInputGeografija.close();















ofstream PitanjaInputPovijest;
PitanjaInput.open("TriviaPitanjaPovijest.txt", ios::trunc);
PitanjaInput << "1. Koliko je trajao rat izmedu Engleske i Zanzibara?\n";
PitanjaInput << "2. Koje je godine ubijen John F. Kennedy?\n";
PitanjaInput << "3. Grenland je bio kolonija koje drzave do 1981. godine?\n";
PitanjaInput << "4. Koja je organizacija dobila Nobelovu nagradu za mir 1917. godine?\n";
PitanjaInput << "5. Koliko je dana William Harrison bio predsjednik SAD-a?\n";
PitanjaInput << "6. Koji je grcki povjesničar poznat kao ,,otac povijesti,,?\n";
PitanjaInput << "7. Koliko je puta Mona Lisa ukradena?\n";
PitanjaInput << "8. Koje je godine srusen Berlinski zid?\n";
PitanjaInput << "9. U kojoj se danasnjoj drzavi nalazilo Carstvo Inka?\n";
PitanjaInput << "10. Koje se godine dogodio Veliki pozar u Londonu?\n";

PitanjaInputPovijest.close();