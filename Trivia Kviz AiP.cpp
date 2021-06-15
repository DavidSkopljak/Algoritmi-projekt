#include <iostream>
#include <string>
#include <fstream>

using namespace std;












void postavljanjePitanja()
{
	ofstream PitanjaInputOpcenito;
	PitanjaInputOpcenito.open("TriviaPitanjaOpcenito.txt", ios::trunc);
	PitanjaInputOpcenito << "1. Koja je najduza rijeka na svijetu?\n";
	PitanjaInputOpcenito << "2. Koja je zemlja poklonila Kip slobode SAD-u?\n";
	PitanjaInputOpcenito << "3. Koliko kosti ima u ljudskom tijelu?\n";
	PitanjaInputOpcenito << "4. Koji je planet najblizi suncu?\n";
	PitanjaInputOpcenito << "5. Koji je najsusi kontinent?\n";
	PitanjaInputOpcenito << "6. Koja od ovih drzava ima najvise prirodnih jezera?\n";
	PitanjaInputOpcenito << "7. Koliko je godina trajao stogodisnji rat?\n";
	PitanjaInputOpcenito << "8. Tko je bio prvi predsjednik SAD-a?\n";
	PitanjaInputOpcenito << "9. Koji je jezik na kojem se najvise govori?\n";
	PitanjaInputOpcenito << "10. Koji je najveci ocean na svijetu?\n";
	PitanjaInputOpcenito << "11. Koji je glavi grad Kine?\n";
	PitanjaInputOpcenito << "12. Koje godine je zavrsio hladan rat?\n";
	PitanjaInputOpcenito << "13. Koji je najlaksi metal koji postoji?\n";
	PitanjaInputOpcenito << "14. Koju boju mozemo pronaci na vise od 75% zastava drzava?\n";
	PitanjaInputOpcenito << "15. Tko je prvi oplovio svijet?\n";

	PitanjaInputOpcenito.close();


	ofstream PitanjaInputSport;
	PitanjaInputSport.open("TriviaPitanjaSport.txt", ios::trunc);
	PitanjaInputSport << "1. Koliko igraca ima u vaterpolo ekipi?\n";
	PitanjaInputSport << "2. Kada je osnovana FIFA?\n";
	PitanjaInputSport << "3. Cak tri puta ulazili su u finale svjetskih prvenstava, ali ga nikada nisu osvojili. O kojoj je reprezentaciji rijec?\n";
	PitanjaInputSport << "4. Gol s najvece udaljenosti u nogometu, 91.9 m, postigao je?\n";
	PitanjaInputSport << "5. Tko je na utakmici protiv Jamajke (3:1) odigranoj 1998. zabio prvi povijesni pogodak za Hrvatsku na Svjetskim prvenstvima?\n";
	PitanjaInputSport << "6. Protiv koje reprezentacije je Drazen Petrovic odigrao svoju posljednju utakmicu?\n";
	PitanjaInputSport << "7. U povijesti je samo jedan nogometaš zaigrao za Dinamo, Hajduk, Rijeku i Osijek. Tko je to?\n";
	PitanjaInputSport << "8. Koja su dva NBA kluba protagonisti dogadaja koji se naziva ,,The Malice in the Palace,,?\n";
	PitanjaInputSport << "9. Kako se u kosarkaskom zargonu naziva blokiranje suparnikove lopte?\n";
	PitanjaInputSport << "10. Sto predstavljaju olimpijski krugovi?\n";

	PitanjaInputSport.close();


	ofstream PitanjaInputZivotinje;
	PitanjaInputZivotinje.open("TriviaPitanjaZivotinje.txt", ios::trunc);
	PitanjaInputZivotinje << "1. Koliko srca ima hobotnica?\n";
	PitanjaInputZivotinje << "2. Koja domaca životinja nema zube na gornjoj celjusti?\n";
	PitanjaInputZivotinje << "3. Koji je psece najrazvijenije osjetilo?\n";
	PitanjaInputZivotinje << "4. Za koju pticu je poznato da ima oci vece od mozga?\n";
	PitanjaInputZivotinje << "5. U cijelom zivotinjskom carstvu, koja je jedina muska zivotinja koja moze roditi?\n";
	PitanjaInputZivotinje << "6. Za koju je zivotinju poznato da diše kroz kozu?\n";
	PitanjaInputZivotinje << "7. Koliko jaja u prosjeku moze snijeti kokos u godini?\n";
	PitanjaInputZivotinje << "8. Poznato je da zubi koje životinje rastu zauvijek. Koja je to zivotinja?\n";
	PitanjaInputZivotinje << "9. Kravlji zeludac sadrzi koliko odjeljaka?\n";
	PitanjaInputZivotinje << "10. Koji je najveci clan macje obitelji?\n";

	PitanjaInputZivotinje.close();


	ofstream PitanjaInputGeografija;
	PitanjaInputGeografija.open("TriviaPitanjaGeografija.txt", ios::trunc);
	PitanjaInputGeografija << "1. U kojoj je zemlji najvisa planina na svijetu, Mount Everest?\n";
	PitanjaInputGeografija << "2. Koja drzava SAD ima najdulju obalu nakon Aljaske? \n";
	PitanjaInputGeografija << "3. Koji je glavni grad Australije?\n";
	PitanjaInputGeografija << "4. Koji je glavni grad New Yorka?\n";
	PitanjaInputGeografija << "5. Koja africka drzava ima sluzbeni jezik portugalski?\n";
	PitanjaInputGeografija << "6. Koji je najjuzniji grad u Africi?\n";
	PitanjaInputGeografija << "7. Koja drzava u Europskoj uniji ima najvise stanovnika?\n";
	PitanjaInputGeografija << "8. Koliko vremenskih zona ima Kina?\n";
	PitanjaInputGeografija << "9. Koji je glavni grad Novog Zelanda?\n";
	PitanjaInputGeografija << "10. Kako se naziva najduza rijeka zapadne Azije?\n";

	PitanjaInputGeografija.close();


	ofstream PitanjaInputPovijest;
	PitanjaInputPovijest.open("TriviaPitanjaPovijest.txt", ios::trunc);
	PitanjaInputPovijest << "1. Koliko je trajao rat izmedu Engleske i Zanzibara?\n";
	PitanjaInputPovijest << "2. Koje je godine ubijen John F. Kennedy?\n";
	PitanjaInputPovijest << "3. Grenland je bio kolonija koje drzave do 1981. godine?\n";
	PitanjaInputPovijest << "4. Koja je organizacija dobila Nobelovu nagradu za mir 1917. godine?\n";
	PitanjaInputPovijest << "5. Koliko je dana William Harrison bio predsjednik SAD-a?\n";
	PitanjaInputPovijest << "6. Koji je grcki povjesnièar poznat kao ,,otac povijesti,,?\n";
	PitanjaInputPovijest << "7. Koliko je puta Mona Lisa ukradena?\n";
	PitanjaInputPovijest << "8. Koje je godine srusen Berlinski zid?\n";
	PitanjaInputPovijest << "9. U kojoj se danasnjoj drzavi nalazilo Carstvo Inka?\n";
	PitanjaInputPovijest << "10. Koje se godine dogodio Veliki pozar u Londonu?\n";

	PitanjaInputPovijest.close();
}

void odgovorOpcenito(int Lineno)
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

void odgovorSport(int Lineno)
{
	switch (Lineno)
	{
	case 1:
		cout << "\nA) 7" << endl << "B) 8" << endl << "C) 11" << endl << "D) 5" << endl; break;
	case 2:
		cout << "\nA) 26. lipanja 1905." << endl << "B) 15. lipnja 1954." << endl << "C) 21. svibnja 1904." << endl << "D) 12. svibanja 1912." << endl; break;
	case 3:
		cout << "\nA) Engleska " << endl << "B) Hrvatska" << endl << "C) Rusija" << endl << "D) Nizozemska" << endl; break;
	case 4:
		cout << "\nA) Brek Shea" << endl << "B) Marko Arnautovic" << endl << "C) Erik Pieters" << endl << "D) Amir Begovic" << endl; break;
	case 5:
		cout << "\nA) Mario Stanic" << endl << "B) Zvonimir Boban" << endl << "C) Davor Suker" << endl << "D) Robert Prosinecki" << endl; break;
	case 6:
		cout << "\nA) Slovenije" << endl << "B) SSSR" << endl << "C) Engleske" << endl << "D) Argentine" << endl; break;
	case 7:
		cout << "\nA) Marijan Buljat" << endl << "B) Zoran Zekic" << endl << "C) Dino Drpic" << endl << "D) Damir Milinovic" << endl; break;
	case 8:
		cout << "\nA) Los Angeles Clippers / Utah Jazz" << endl << "B) Milwaukee Bucks / Orlando Magic" << endl << "C) Indiana Pacers / Detroit Pistons" << endl << "D) Miami Heat / New York Knicks" << endl; break;
	case 9:
		cout << "\nA) Banana" << endl << "B) Jabuka" << endl << "C) Kruska" << endl << "D) Sljiva" << endl; break;
	case 10:
		cout << "\nA) Planete" << endl << "B) Ljude" << endl << "C) Gradove" << endl << "D) Kontinente" << endl; break;
	}
	cout << "Vas Odgovor: " << endl;
}

/*void odgovorZivotinje(int Lineno)

void odgovorGeografija(int Lineno)

void odgovorPovijest(int Lineno)*/





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







int main()
{


	string korisnikIme; string linePitanje;
	int kategorijaOdabir;
	int korisnikBodovi = 0;
	int korisnikBodoviPrethodni = 3;
	int brojPitanja = 1;
	int kolicinaPitanja = 10;
	char korisnikOdgovor;

	char odgovoriOpcenito[15] = { 'A','A','B','C','D','D','C','A','B','C','B','A','B','C','D' };
	char odgovoriSport[10] = { 'A','C','D','D','A','A','A','C','A','B' };
	char odgovoriZivotinje[10] = { 'A','A','C','D','B','D','A','B','C','D' };
	char odgovoriGeografija[10] = { 'B','B','C','B','D','B','A','A','A','C' };
	char odgovoriPovijest[10] = { 'D','D','D','B','C','A','A','C','C','B' };




	postavljanjePitanja();

	cout << "Unesite ime ispod 20 znakova." << endl;
	getline(cin, korisnikIme);
	system("cls");
	while (korisnikIme.length() > 20)
	{
		system("cls");
		cout << "Unesite ime ispod 20 znakova!" << endl;
		getline(cin, korisnikIme);
	}

	cout << "Odaberite kategoriju." << endl;


	do
	{
		cin >> kategorijaOdabir;
		if (kategorijaOdabir > 5 || kategorijaOdabir < 1)
		{
			cout << "Unesite valjani odabir!" << endl;

		}
		else

			break;
	} while (1);
	if (kategorijaOdabir == 1)
		kolicinaPitanja = 15;




	ifstream PitanjaOutput;
	switch (kategorijaOdabir)
	{
	case 1:
		while (brojPitanja <= kolicinaPitanja)
		{

			PitanjaOutput.open("TriviaPitanjaOpcenito.txt");
			for (int Lineno = 1; getline(PitanjaOutput, linePitanje) && Lineno <= kolicinaPitanja; Lineno++)
			{
				if (Lineno == brojPitanja)
				{
					cout << linePitanje << endl;

					odgovorOpcenito(Lineno);
					cin >> korisnikOdgovor;
					system("cls");
					korisnikOdgovor = toupper(korisnikOdgovor);
					if (korisnikOdgovor == odgovoriOpcenito[brojPitanja - 1])
						korisnikBodovi++;


				}
			}brojPitanja++;
			kolicinaPitanja++;

			break;
		}

	case 2:
		while (brojPitanja < 16)
		{

			PitanjaOutput.open("TriviaPitanjaSport.txt");
			for (int Lineno = 1; getline(PitanjaOutput, linePitanje) && Lineno < 16; Lineno++)
			{
				if (Lineno == brojPitanja)
				{
					cout << linePitanje << endl;

					odgovorSport(Lineno);
					cin >> korisnikOdgovor;
					system("cls");
					korisnikOdgovor = toupper(korisnikOdgovor);
					if (korisnikOdgovor == odgovoriOpcenito[brojPitanja - 1])
						korisnikBodovi++;

				}
			}brojPitanja++;


			break;
		}

		/*case 3:
			while (brojPitanja < 16)
			{

				PitanjaOutput.open("TriviaPitanjaZivotinje.txt");
				for (int Lineno = 1; getline(PitanjaOutput, linePitanje) && Lineno < 16; Lineno++)
				{
					if (Lineno == brojPitanja)
					{
						cout << linePitanje << endl;

						odgovorZivotinje(Lineno);
						cin >> korisnikOdgovor;
						system("cls");
						korisnikOdgovor = toupper(korisnikOdgovor);
						if (korisnikOdgovor == odgovoriOpcenito[brojPitanja - 1])
							korisnikBodovi++;

					}
				}brojPitanja++;


				break;
			}*/

			/*case 4:
				while (brojPitanja < 16)
				{

					PitanjaOutput.open("TriviaPitanjaGeografija.txt");
					for (int Lineno = 1; getline(PitanjaOutput, linePitanje) && Lineno < 16; Lineno++)
					{
						if (Lineno == brojPitanja)
						{
							cout << linePitanje << endl;

							odgovorGeografija(Lineno);
							cin >> korisnikOdgovor;
							system("cls");
							korisnikOdgovor = toupper(korisnikOdgovor);
							if (korisnikOdgovor == odgovoriOpcenito[brojPitanja - 1])
								korisnikBodovi++;

						}
					}brojPitanja++;


					break;
				}*/

				/*case 5:
					while (brojPitanja < 16)
					{

						PitanjaOutput.open("TriviaPitanjaPovijest.txt");
						for (int Lineno = 1; getline(PitanjaOutput, linePitanje) && Lineno < 16; Lineno++)
						{
							if (Lineno == brojPitanja)
							{
								cout << linePitanje << endl;

								odgovorPovijest(Lineno);
								cin >> korisnikOdgovor;
								system("cls");
								korisnikOdgovor = toupper(korisnikOdgovor);
								if (korisnikOdgovor == odgovoriOpcenito[brojPitanja - 1])
									korisnikBodovi++;

							}
						}brojPitanja++;


						break;
					}

				case 6:
					//izlaz iz programa
					*/

		ifstream rezultatOutput;
		rezultatOutput.open("prethodni rezulat.bin", ios::in | ios::binary);
		rezultatOutput.read((char*)&korisnikBodoviPrethodni, sizeof(korisnikBodovi));
		cout << endl << endl << "Prethodni rezultat: " << korisnikBodoviPrethodni << "/" << kolicinaPitanja << " bodova." << endl;
		rezultatOutput.close();

		ofstream rezultatInput;
		rezultatInput.open("prethodni rezulat.bin", ios::trunc | ios::out | ios::binary);
		rezultatInput.write((char*)&korisnikBodovi, sizeof(korisnikBodovi));
		rezultatInput.close();




		cout << "Rezultat: " << korisnikBodovi << "/" << kolicinaPitanja << " bodova." << endl << "Ime korisnika: " << korisnikIme << endl;
		return 0;
	}
}