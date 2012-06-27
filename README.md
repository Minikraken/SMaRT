-SMaRT
======
Spend Money and Recieve Tits
==================
Rasmus Tilljander
Anton Eskilsson
==================

Förslag till programmeringsstandarder
=====================================
Allmänna saker
  Mellanrum mellan kodrader som ej är direkt sammanlänkade
	Ett mellanrum mellan funktioner
	Kommentarer ovanför funktioner i .cpp och brevid i .h
	Parameterlistor ska delas upp på nya rader ifall de innehåller
		fler än fyra parametrar
	Måsvingar raden under ett statement
	Inga måsvingar om man inte måste ha
	Deklarationer skall vara "aligned" (så gott det går)
		ex
		int a 		= 5;
		double b 	= 5.5;
	
Headerfiler
	En klass per header
	Ordning på variabler/funktiner
		public
		private funktioner
		private variabler
		protected funktioner
		protected variabler
	Get/setfunktioner skrivs direkt i header filen
	Get funktioner skall vara "const"
	Header guard should use the following standard
		#ifndef MYCLSS_H
		#define MYCLSS_H
		#endif
	Destruktorer
		Skall alltid vara virtual		

Variabler
	Börja alltid med liten bokstav
	Vid flerord variabelsnamn så stor bokstav på varje nytt ord
		ihopsatt utan delare så som "_".
	Medlemsvariabler: prefix 'm' (ex. int mLevel)
	Parameterlistor: prefix 'l'
	Lokalt skapade variabler: prefix 'l' eller 'temp'
	Konstanta variabler: Ingen prefix, stor bokstav i början 
		ex. const int WorldSize = 5;), alternativt 'g' eller 'c'

Funktioner
	Börja med stor bokstav
	Vid flerord funktionsnamn så stor bokstav på varje nytt ord, 
		ihopsatt utan delare så som "_".
	Alla "get" funktioner bör vara konstanta (ex. int GetLevel() const;)
	Bra länk: http://vimeo.com/13702091