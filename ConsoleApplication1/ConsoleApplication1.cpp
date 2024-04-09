#include <iostream>
using namespace std;

class Ksztalt{
public:
	virtual void oblicz() = 0;
};
class Trojkat:public Ksztalt{
public:
	virtual void oblicz() {
		cout << "Obliczam Trójkąt" << endl;
	};
};
class Prostokat:public Ksztalt {
public:
	virtual void oblicz() {
		cout << "Obliczam Prostokąt" << endl;
	};
};
class Kwadrat:public Ksztalt {
public:
	virtual void oblicz() {
		cout << "Obliczam Kwadrat" << endl;
	};
};
class Kolo:public Ksztalt {
public:
	virtual void oblicz() {
		cout << "Obliczam Kolo" << endl;
	};
};
void przelaczObiekt(Ksztalt& ob) {
	ob.oblicz();
}
int main()
{
	Ksztalt* wsk;

	Trojkat tr;
	Prostokat pr;
	Kwadrat kw;
	Kolo kol;

	cout << "Teral trojkat chlopie" << endl;
	przelaczObiekt(tr);

	cout << "Teral trojkat chlopie" << endl;
	przelaczObiekt(pr);

	cout << "Teral trojkat chlopie" << endl;
	przelaczObiekt(kw);

	cout << "Teral trojkat chlopie" << endl;
	przelaczObiekt(kol);

	return EXIT_SUCCESS;
}
