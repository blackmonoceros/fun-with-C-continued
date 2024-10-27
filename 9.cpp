#include <iostream>

using namespace std;





class Pracownik {

protected:

	string imie;

public:

	Pracownik(const string&imie)

		:imie(imie)

	{

	}

	virtual void informacje()

	{

		cout<<"Pracownik: "<<imie<<endl;

	}

	virtual~Pracownik()

	{

	}

};

class Policjant:public Pracownik {

protected:

	string ranga;

public:

	Policjant(const string&imie,const string&ranga)

		:Pracownik(imie),ranga(ranga)

	{

	}

	void info()

	{

		cout<<"Policjant: "<<imie<<" -- StopieE: "<<ranga<<endl;

	}

};

class NaczelnikWydzial:public Policjant {

	string Wydzial;

public:

	NaczelnikWydzial(const string&imie,const string&ranga,const string&nazwaWydzial)
		:Policjant(imie,ranga),Wydzial(Wydzial)

	{

	}

	void info() {

		cout<<"Naczelnik: "<<imie<< " -- Ranga: "<<ranga<< "-- WydziaE: "<<Wydzial<<endl;

	}

};

int main() {

	Policjant po1("Arek Kot", "posterunkowy");

	Policjant po2("Krzysztof JeE<yna", "aspirant");

	NaczelnikWydzial nw1("Ola EledE:", "komisarz", "WydziaE Kryminalny");

	NaczelnikWydzial nw2("Marek Bez", "komendant", "WydziaE Skarbowy");



	po1.info();

	po2.info();

	nw1.info();

	nw2.info();



	return 0;

}