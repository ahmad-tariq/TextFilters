TextFilters
===========
Projekt edukacyjny który zakłada pogrupowanie następujących poleceń:
- Zliczanie znaków, słów i wierszy
- Numerowanie wierszy pliku
- Usuwanie pustych wierszy
- Zamiana małych liter na duże
- Zamiana dużych liter na małe
- Zamiana znaków tabulacji na określoną liczbę spacji
- Zliczanie krotności wystąpienia podanego ciągu znaków
- Zamiana podanego ciągu znaków na inny podany ciąg
- Usunięcie z pliku podanego ciągu znaków, wypisanie wierszy (oraz ich numerów)zawierających podany ciąg znaków
- Wypisanie n początkowych wierszy pliku
- Wypisanie n końcowych wierszy pliku

Polecenia pogrupowałem w 3 grupy:
--------------
- Views
- Filters
- Counters

Views:
--------------
- Wypisanie n początkowych wierszy pliku
- Wypisanie n końcowych wierszy pliku


Filters:
--------------
- Numerowanie wierszy pliku
- Usuwanie pustych wierszy
- Zamiana małych liter na duże
- Zamiana dużych liter na małe
- Zamiana znaków tabulacji na określoną liczbę spacji
- Zamiana podanego ciągu znaków na inny podany ciąg
- Usunięcie z pliku podanego ciągu znaków, wypisanie wierszy (oraz ich numerów)zawierających podany ciąg znaków

Counters:
--------------
- Zliczanie znaków, słów i wierszy
- Zliczanie krotności wystąpienia podanego ciągu znaków

Architektura i zamysł.
--------------
Architektura lekko potokowa - każdy z tych wymagań to osobna klasa która dziedziczy po klasie abstrakcyjnej odpowiedniej dla typu polecenia,
tzn jeśli jest Counter'em to dziedziczy po klasie Counter, jeśli filtrem to po klasie Filter i jeśli widokiem to po klasie View. 
Klasy dziedziczące mają konwencję nazw wg szablonu: nazwapoleceniaTyp, czyli np:
linescounter
removestringfilter
firstlinesview

Klasy które rozszerzając byty abstrakcyjne, przedefiniowują metody z nich. Dla każdego z typów stworzona jest oddzielna, prosta fabryka.
Więc jeśli chcemy użyć jakiegoś filtra dla pliku to może to wyglądać tak:
	
	#include <iostream>
	#include <fstream>
	#include <string>
	#define FILE "file.txt"
	#include "include\filterfactory.h"
	#include "include\counterfactory.h"
	#include "include\viewfactory.h"
	using namespace std;

	int main()
	{
		ifstream source;
		source.open(FILE);

		FilterFactory* factory = new FilterFactory();
		Filter* f1 = factory->getFilter("replace_string");
		f1->run(source);
		f1->apply();

		//OR.. 
		
		CounterFactory* cFactory = new CounterFactory();
		Counter* c1 = cFactory->getCounter("string_counter");
		cout<<"Wyrazen w pliku: "<< c1->getCount(source);

		//OR..

		ViewFactory* vFactory = new ViewFactory();
		View* v1 = vFactory->getView("last_lines");
		cout<<v1->getView(source);

		source.close();

		return 0;
	}
	