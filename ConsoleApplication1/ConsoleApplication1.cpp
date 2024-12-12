/*

	#include - folosim o librarie a limbajului de programare

	--------------------------------------------------------------------------------------------------------------------------
	- using namespace std; // ( este necesar pentru a nu mai scrie std:: inaintea unei functii dar are si altfel de avantaje )
	--------------------------------------------------------------------------------------------------------------------------



*/
#include <iostream>
#include <cmath>
#include <numeric>
#include <stdio.h>
#include <string>

int n;
using namespace std;

# define M_PI           3.14159265358979323846  /* pi */

#define NRPROB problematest2

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

int gcd(int a, int b) {
	// Find Minimum of a and b
	int res = min(a, b);

	// Testing divisiblity with all numbers starting from
  // min(a, b) to 1

	while (res > 1) {

		// If any number divide both a and b, so we
		// got the answer
		if (a % res == 0 && b % res == 0)
			break;
		res--;
	}
	return res;
}

void reduceFraction(int& num, int& den) {
	int gcdValue = gcd(num, den);
	num /= gcdValue;
	den /= gcdValue;
}

static int problematest2()
{
	int x, a, b, c;
	cin >> x;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	if (a == b && a == c && b == c)
		cout << "da";
	else cout << "nu";

	return false;
}

static int problematest1()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a / c && b / c)
		cout << "da";
	else
		cout << "Nu";
	return false;
}
/*
--------------------------------------------------------------------------------------------
		
		FISA 3

--------------------------------------------------------------------------------------------

*/
static int f4x6()
{
	int x, y, z;
	cin >> x >> y >> z;
	if ((abs(x) > 999999 || abs(y) > 999999 || abs(z) > 999999) || x < y && y < z)
		cout << "Da";
	else cout << "Nu";
	return false;
}

static int f4x5()
{
	int n;
	cin >> n;
	if (n % 2 == 0 && n < 10000 && n >= 10)
		cout << "Da";
	else cout << "Nu";
	return false;
}

static int f4x4()
{
	int a, b;
	cin >> a >> b;

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	cout << "Numerele in ordine crescatoare sunt: " << a << " " << b << endl;

	return false;
}

static int f4x3()
{
	int a, b, x;
	cin >> a >> b >> x;
	if (a < b || (x >= a && x <= b))
		cout << "Da";
	else
		cout << "Nu";

	return false;
}

static int f4x2()
{
	int a, b;
	cin >> a >> b;
	if (b != 0)
		cout << a / b;
	else if (b == 0)
		cout << "Impartire imposibila";

	return false;
}

static int f4x1()
{
	int a;
	cin >> a;
	if (a % 2 == 0)
		cout << "Numar par";
	else cout << "Numar impar";
	return false;
}

static int problema833()
{
	int a, b, x;
	cin >> a >> b;
	if (a > b)
	{
		x = a - b;
		cout << "Primul copil este mai mare cu " << x << " ani";

	}
	else if (b > a) {
		x = b - a;
		cout << "Al doilea copil este mai mare cu " << x << " ani";
	}
	else if (b == a)
		cout << "Copiii au varste egale";
	return false;
}

static int problemaf3x38()
{
	double a, b;
	cin >> a >> b;
	double s = pow(a, b);
	cout << s;
	return false;
}

static int problemaf3x35()
{
	int n, x;
	cin >> n;

	// Extragem cifrele
	int zeci = n / 10;
	int unitati = n % 10;

	// Dublăm fiecare cifră
	int dubluZeci = zeci * 2;
	int dubluUnitati = unitati * 2;

	// Construim numărul rezultat
	x = dubluZeci * 100 + dubluUnitati;  // formăm numărul nou

	// Afișăm rezultatul
	cout << x << endl;

	return 0;
}

static int problemaf3x34()
{
	int a, b, c;
	cin >> a >> b >> c;

	// Calculăm sumele dintre fiecare două numere distincte
	int suma1 = a + b;
	int suma2 = a + c;
	int suma3 = b + c;

	// Afișăm rezultatele
	cout << "Suma dintre " << a << " si " << b << " este: " << suma1 << endl;
	cout << "Suma dintre " << a << " si " << c << " este: " << suma2 << endl;
	cout << "Suma dintre " << b << " si " << c << " este: " << suma3 << endl;

	return 0;
}

static int problemaf3x31()
{
	int n;
	cout << "Enter a 4-digit number: ";
	cin >> n;

	// Convert the number to a string
	string nStr = to_string(n);
	string result = "";

	// Insert '0' after each digit
	for (char digit : nStr) {
		result += digit;
		result += '0';  // Append '0' after each digit
	}

	// Output the result
	cout << "The new number is: " << result << endl;

	return 0;
}

static int problemaf3x29()
{
	int a, b, c, d;

	// Input the two fractions
	cout << "Enter numerator and denominator of the first fraction: ";
	cin >> a >> b;
	cout << "Enter numerator and denominator of the second fraction: ";
	cin >> c >> d;

	// Calculate the sum
	int sumNum = a * d + c * b;
	int sumDen = b * d;
	reduceFraction(sumNum, sumDen);  // Simplify the fraction

	// Calculate the product
	int prodNum = a * c;
	int prodDen = b * d;
	reduceFraction(prodNum, prodDen);  // Simplify the fraction

	// Output the results
	cout << sumNum << "/" << sumDen << " " << prodNum << "/" << prodDen << endl;

	return 0;
}

//  sa se det val a si b si sa se afiseze cel mai mic, respectiv cel mai mare numar format din toate cifrele prime distrincte 

static int problemaf3x28()
{
	int a = 2357;  
	int b = 7532;

	cout << a << " " << b << endl;
	return false;
}

// n 4 cifre ultima cifra a sumei obtinute din nr de 3 cifre formate din n prin eliminarea unei singure cifre

static int problemaf3x27()
{
	int n;
	cout << "Introdu un numar de patru cifre: ";
	cin >> n;

	// Extrage fiecare cifră a numărului de patru cifre
	int a = n / 1000;         // prima cifră
	int b = (n / 100) % 10;   // a doua cifră
	int c = (n / 10) % 10;    // a treia cifră
	int d = n % 10;           // a patra cifră

	// Formează cele trei numere de trei cifre prin eliminarea unei cifre
	int num1 = b * 100 + c * 10 + d; // eliminăm prima cifră
	int num2 = a * 100 + c * 10 + d; // eliminăm a doua cifră
	int num3 = a * 100 + b * 10 + d; // eliminăm a treia cifră
	int num4 = a * 100 + b * 10 + c; // eliminăm a patra cifră

	// Calculează suma celor trei numere obținute
	int suma = num1 + num2 + num3 + num4;

	// Obține ultima cifră a sumei
	int ultimaCifra = suma % 10;

	// Afișează rezultatul
	cout << "Ultima cifra a sumei este: " << ultimaCifra << endl;

	return 0;
}

// nr n de 4 cifre , oglinditul nr
static int problemaf3x25()
{
	int n;
	cin >> n;
	int x = n / 1000;
	int y = n % 1000 / 100;
	int z = n % 100 / 10;
	int v = n % 10;

	cout << v << z << y << x;
	return false;
}

// n 5 cifre , mA a cifrelor sale

static int problemaf3x24()
{
	int n;
	cout << "Introdu un numar de 5 cifre pentru a calcula media aritmetica a cifrelor: ";
	cin >> n;
	int x = n / 10000;
	int y = n % 10000 / 1000;
	int z = n % 1000 / 100;
	int v = n % 100 / 10;
	int b = n % 10;
	int ma = (x + y + z + v + b) / 5;
	cout << "Media aritmetica: = "<<  ma;
	return false;
}
// se citeste n de 2 cifre patratul valorii din interschimbarea cifrelor

static int problemaf3x23()
{
	int n;
	cout << "Introdu un numar de doua cifre, nenul: ";
	cin >> n;
	int a = n % 100/10;
	int b = n % 10;
	int c = b;
	int d = a;
	int j = c * 10 + d;
	int p = j * j;
	cout << p;
	return false;
}

// nr a 5 cifre, nr format din prima, a 3a si a 5a cifra din a

static int problemaf3x22()
{
	int n;
	cout << "Introdu un nr de 5 cifre: ";
	cin >> n;
	int x = n / 10000;
	int y = n % 10000 / 1000;
	int z = n % 1000 / 100;
	int v = n % 100 / 10;
	int b = n % 10;
	cout << "Nr format din prima, a treia si a cincea cifra este: " << x << z << b;
	return false;
}

// se citeste n de 6 cifre sa se elim nr din mijloc si sa se afiseze rezultatul

static int problemaf3x21()
{
	int n;
	cin >> n;
	int x = n / 100000;
	int y = n % 100000 / 10000;
	int z = n % 10000 / 1000;
	int v = n % 1000 / 100;
	int b = n % 100 / 10;
	int c = n % 10;
	cout << "Nr obtinut dupa eliminarea cifrelor din mijloc este: " << x << y << b << c;

	return false;
}

// se citeste de la tastatura nr n, sa se determine in a si b si sa se afiseze pe ecran despartit schimband prima cifra cu ultima cifra si schimband intre ele cifrele din mijloc

static int problemaf3x20()
{
	int n;
	cout << "Introdu nr n: ";
	cin >> n;
	int x = n / 1000;
	int y = n % 1000 / 100;
	int z = n % 100 / 10;
	int v = n % 10;

	cout << "A: " << v << z << y << x << "\nB: " << x << z << y << v;

	return false;
}

// se citeste n, sa se interschimbe cifra unitatilor cu cea a sutelor si sa se afiseze nr
static int problemaf3x18()
{
	int n;
	cout << "Introdu nr n: ";
	cin >> n;
	int x = n / 100;
	int y = n % 100 / 10;
	int z = n % 10;
	cout << x << z << y ;

	return false;
}

// Fie un numar natural n format din 3 cifre, citit de la tastatura. Sa se afiseze pe cate un rand de ecran cifrele sale incepand cu cifra unitatilor.

static int problemaf3x17()
{
	int a;
	cout << "Introdu numarul a: ";
	cin >> a;
	int x = a / 100;
	int y = a % 100 / 10;
	int z = a % 10;
	cout << "Cifra unitatilor: " << z << "\nCifra zecilor: " << y << "\nCifra sutelor: " << x;

	return false;
}

// variabilele a si b retin valorile a doua numere de cel mult 4 cifre fiecare, citite de la tastatura . sa se interschimbe valorile celor doua variabile si sa se afiseze
// pe ecran continutu lor separat printr-un spatiu
static int problemaf3x14()
{
	int a, b;
	cout << "Introdu cifra a: ";
	cin >> a;
	cout << "Introdu cifra b: ";
	cin >> b;
	int xa = b;
	int xb = a;
	cout << "Valoarea interschimbata a nr a este: " << xa << "\nValoarea interschimbata a nr b este: " << xb;
	return false;
}

/*

		E		N		D.

*/
/*
 r - raza cercului si aria cercului
*/

static int problema19()
{
	int r;
	cin >> r;
	double ar = M_PI * r * r;
	double lung = 2 * M_PI * r;
	cout << r << " " << ar << " " << lung;
	return false;
}
/*
cunoscand a,b,c perimetru si aria triunghiului
*/

static int problema18()
{
	int a, b, c;
	cin >> a >> b >> c;
	double p = a + b + c;
	double ar = sqrt(p*(p - a)*(p - b)*(p - c)) / 2;
	cout << p << " " << ar;
	return false;
}


/*
	sa se determine ma si mg a a,b

*/

static int problema17()
{
	float a, b;
	cin >> a >> b;
	float ma = (a + b) / 2;
	float mg = sqrt(a * b);
	cout << ma << " " << mg;
	return false;
}

/*
Cunoscand cele 4 note obtinute de un elev la disciplina informatica pe parcursul unui an scolar, citite de la tastatura,
sa se calculeze media.
*/

static int problema16()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a + b + c + d) / 4;
	return false;
}
/*
	Sa se calculeze si sa se afiseze pe ecran suma primelor n numere naturale nenule, valoarea lui n,
	nr natural nenul fiind de 4 cifre fiind citit de la tastatura 
*/

static int problema15()
{
	int n;
	cin >> n;
	cout << n*(n + 1) / 2;
	return false;
}

/*
Fie a şi b două numere naturale nenule, fiecare având cel mult 4 cifre, citite de la tastatură. Să se determine şi
să se afişeze pe câte un rând de ecran valoarea maximă şi valoarea minimă dintre cele două numere citite, folosind formula:
*/

static int problema14()
{
	int a, b;
	cin >> a >> b;
	cout << ((a + b + abs(a - b)) / 2) << " " << ((a + b - abs(a - b)) / 2);
	return false;
}
/*

2. Se citește un număr natural n de 4 cifre. Să se afișeze valoarea a+b+c, 
unde a se obține din n eliminând prima cifră, b se obține din n eliminând primele două cifre, iar c este cifra unităților lui n.
De exemplu, dacă n=2347, atunci valoarea afișată este 347+47+7=401.
*/

static int problema13()
{
	int n;
	cin >> n;
	int a = n % 1000;
	int b = n % 100;
	int c = n % 10;
	int s = a + b + c;
	cout << s;

	return false;
}

/*
	1. Se citește un număr natural n de 4 cifre. Să se afișeze câtul și restul împărțirii
		numărului format din primele două cifre ale lui n la numărul format din ultimele două cifre ale lui n. De exemplu, dacă n=5413, atunci 54 împărțit la 13 dă restul 2 și câtul 4.
*/

static int problema12()
{
	int n;
	cin >> n;
	int a = n % 10000 / 100;
	int b = n % 100;
	int s = a / b;
	int v = a % b;
	cout << v << " " << s;
	return false;
}

// test for estePar which now works !!
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
	return NRPROB();
}