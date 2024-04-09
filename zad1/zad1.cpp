#include <iostream>
using namespace std;

class Postac {
public:
	virtual void prezentuj() = 0;
};
class Lucznik :public Postac {
public:
	virtual void prezentuj() {
		cout << "prezentuj Lucznik" << endl;
	};
};
class Palladyn :public Postac {
public:
	virtual void prezentuj() {
		cout << "prezentuj Palladyn" << endl;
	};
};
class Druid :public Postac {
public:
	virtual void prezentuj() {
		cout << "prezentuj Druid" << endl;
	};
};
class Kosmita :public Postac {
public:
	virtual void prezentuj() {
		cout << "prezentuj Kosmita" << endl;
	};
};
void KrainaPostaci(Postac& ob) {
	ob.prezentuj();
}
int main()
{
	Postac* wsk;

	Lucznik lu;
	Palladyn pl;
	Druid dr;
	Kosmita kos;

	cout << "Tera Lucznik chlopie" << endl;
	KrainaPostaci(lu);

	cout << "Tera Palladyn chlopie" << endl;
	KrainaPostaci(pl);

	cout << "Tera Druid chlopie" << endl;
	KrainaPostaci(dr);

	cout << "Tera Kosmita chlopie" << endl;
	KrainaPostaci(kos);

	return EXIT_SUCCESS;
}
