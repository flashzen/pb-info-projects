/*

	#include - folosim o librarie a limbajului de programare

	--------------------------------------------------------------------------------------------------------------------------
	- using namespace std; // ( este necesar pentru a nu mai scrie std:: inaintea unei functii dar are si altfel de avantaje )
	--------------------------------------------------------------------------------------------------------------------------



*/
#include <iostream>

using namespace std;

static bool estePar(int n)
{
	if (n % 2 == 0)
	{
		cout << "true";
		return true;
	}
		
	else {
		cout << "false";
		return false;
	}

	return false;
}

static int problema11()
{
	int f;
	cin >> f;
	estePar(f);
	return false;
}

/*
		Cerința
	O firmă are două tipuri de camioane: camioane de tipul 1, care pot transporta câte t1 tone de marfă pe zi, și camioane de tipul 2, care pot transporta câte t2 tone de marfă pe zi.

	Știind că firma are n camioane de tipul 1 și m camioane de tipul 2, câte tone de marfă pot transporta camioanele firmei în z zile.

		Date de intrare
	Programul citește de la tastatură numerele naturale t1 t2 n m z.

		Date de ieșire
	Programul va afișa pe ecran rezultatul.
*/

static int problema10()
{
	int tip1, tip2, zile, tone1, tone2, total;
	cin >> tone1 >> tone2 >> tip1 >>tip2 >> zile;
	total = (tip1 * tone1 + tip2 * tone2) * zile;
	cout << total;
	return false;
}

/*
	Cerința
		Într-un parc sunt n alei. Pe fiecare alee sunt n arbori. Fiecare arbore are n crengi. Pe fiecare creanga sunt n cuiburi. În fiecare cuib sunt n păsări. Câte păsări sunt în parc?

	Date de intrare
		Programul citește de la tastatură numărul natural n.

	Date de ieșire
		Programul va afișa pe ecran numărul de păsări din parc.
*/

static int problema9()
{
	int pasari, n;
	cin >> n;
	
	pasari = n * n * n * n * n;

	cout << pasari;
	return false;
}

/*
	Cerința
		Într-o curte sunt câini, pisici și găini. Se știe că numărul de pisici este egal cu dublul numărului de câini, iar numărul de găini este egal cu dublul numărului de pisici. Dacă în curte sunt C câini, câte animale sunt în curte?

	Date de intrare
		Programul citește de la tastatură numărul natural C.

	Date de ieșire
		Programul va afișa pe ecran numărul total de animale din curte.
*/

static int problema8()
{
	int caini, pisici, gaini, total;
	cin >> caini;
	pisici = caini * 2;
	gaini = pisici * 2;
	total = caini + pisici + gaini;
	cout << total;
	return false;
}

/*
	Cerința
		Într-o clasă sunt F fete și B băieți. Fiecare fată citește 3 pagini pe zi și fiecare băiat citește 2 pagini pe zi. Câte pagini vor citi copiii în n zile?

	Date de intrare
		Programul citește de la tastatură numerele naturale F B n.

	Date de ieșire
		Programul va afișa pe ecran numărul total de pagini citite.
*/

static int problema7()
{
	int fata, baiat, zile, total;
	cin >> fata >> baiat >> zile;
	total = (3 * fata + 2 * baiat) * zile;
	cout << total;
	return false;
}
/*
	Cerința
		Într-un brad sunt a globuri albe, de două ori mai multe globuri roșii, iar globuri verzi cu 3 mai puține ca numărul de globuri roșii. Câte globuri sunt în total?

	Date de intrare
		Programul citește de la tastatură numărul natural a.

	Date de ieșire
		Programul va afișa pe ecran numărul total de globuri.
*/

static int problema6()
{
	int globalb, globrosu, globverde, total;
	cout << "Introdu cate globuri albe sunt in brad pentru a calcula numarul de globuri rosii si verzi";
	cin >> globalb;
	globrosu = globalb * 2;
	globverde = globrosu - 3;
	total = globalb + globrosu + globverde;
	cout << "Totalul de globuri in brad este: "<< total;
	return false;
}

/*
	Cerința
		Se dau două numere naturale x și y. Calculați ultima cifră a sumei lor.

	Date de intrare
		Programul citește de la tastatură numerele x și y.

	Date de ieșire
		Programul va afișa pe ecran ultima cifră a sumei x+y.
*/

static int problema5()
{
	int x, y, s, u;
	cout << "Introdu doua numere naturale pentru a arata ultima cifra a sumei lor.:\n";
	cin >> x >> y;

	s = x + y;
	u = s % 10; // am folosit %10 pentru a extrage ultima cifra a numarului.
	cout << "Ultima cifra a sumei numerelor de mai sus este: " << u;
	return false;
}

/*
	Cerința
		Se citesc două numere naturale. Afișați suma, diferenţa, produsul şi câtul lor, în această ordine, separate prin câte un spațiu.
*/
static int problema4()
{
	int a, b, s, d, p, c;
	cout << "Introdu 2 numere naturale pentru a afisa suma, diferenta, produsul si catul lor.:\n";
	cin >> a >> b;

	s = a + b; // suma numerelor adica a + b;
	d = a - b; // diferenta numerelor adica a-b;
	p = a * b; // produsul numerelor adica a * b;
	c = a / b; // catul numerelor adica a impartit(/) la b;
	cout << "Suma: " << s << " " << "Diferenta: " << d << " "<< "Produsul: " << p << " " << "Catul: "<< c << " ";
	return false;
}

/*
	Cerința
		Se dau două numere naturale. Calculați diferenţa lor.
*/
static int problema3()
{
	int a, b, d;
	cout << "Introduceti doua numere pentru a calcula diferenta lor.:\n";
	cin >> a >> b;
	d = a - b;
	cout << "Diferenta numerelor este: " << d;

	return false;
}
/*
	Cerinţa
		Scrie un program care afişează pe ecran o urare pentru cei dragi ţie!

	Date de intrare
		Programul nu citește nicio valoare.

	Date de ieşire
		Programul va afișa pe ecran o urare pentru cei dragi.
*/

static int problema2()
{
	cout << "Sarbatori fericite!\n";

	return false;
}

/*
Cerinţa
	Se dau 2 numere naturale. Calculaţi suma celor 2 numere date.

Date de intrare
	Programul citește de la tastatură 2 numere naturale.

Date de ieşire
	Programul va afișa pe ecran suma celor două numere.
*/
static int problema1()
{
	int a, b, s; // cele doua numere si variabila in care stocam suma lor
	cout << "Introdu doua numere naturale pentru a calcula suma lor.: \n"; // afisam un mesaj pentru a face problema mai interactiva si pentru a nu ramane cu consola goala..

	cin >> a >> b; // citim numerele naturale a si b de la tastatura

	s = a + b; // efectuam suma numerelor naturale folosind operatorul "+".
	cout << "Rezultatul sumei numerelor a si b este: " << s; // afisam rezultatul..
	return false;
}

int main()
{
	return problema11();
}