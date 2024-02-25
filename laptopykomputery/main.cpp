#include <iostream>

using namespace std;

class Komputer {
    protected:
        string marka;
        string model;

        void wyswietl();
};

class PC : Komputer {
    private:
        string rodzajobudowy;
    public:


/*
        nazwa funkcji: PC
        parametry wejœciowe: brak
        wartoœæ zwracana: brak
        informacje: konstruktor - nadaje parametry wejsciowe dla obiektu i go tworzy
        autor: Bartosz Maksymiuk
*/

        PC() {
            marka = "brak";
            model = "brak";
            rodzajobudowy = "brak";
        };
/*
        nazwa funkcji: wpiszPC
        parametry wejœciowe: brak
        wartoœæ zwracana: brak
        informacje: funkcja do wprowadzania danych do obiektu
        autor: Bartosz Maksymiuk
*/
        void wpiszPC() {
            string marka1, model1, rodzajObudowy;

            cout<<"Podaj marke: "<<endl;
            cin>>marka1;
            cout<<"Podaj model: "<<endl;
            cin>>model1;
            cout<<"Podaj rodzaj obudowy: "<<endl;
            cin>>rodzajObudowy;

            marka = marka1;
            model = model1;
            rodzajobudowy = rodzajObudowy;
        };
/*
        nazwa funkcji: wyswietl
        parametry wejœciowe: brak
        wartoœæ zwracana: brak
        informacje: funkcja do wypisywania danych z obiektu
        autor: Bartosz Maksymiuk
*/
        void wyswietl() {
            cout<<"\nmarka: "<<marka<<endl;
            cout<<"model: "<<model<<endl;
            cout<<"Rodzaj obudowy: "<<rodzajobudowy<<"\n"<<endl;
        }
};

class Laptop : Komputer {
    private:
        double dlugoscprzekatnej;
        string kolorobudowy;
    public:
/*
        nazwa funkcji: Laptop
        parametry wejœciowe: brak
        wartoœæ zwracana: brak
        informacje: konstruktor - nadaje parametry wejsciowe dla obiektu i go tworzy
        autor: Bartosz Maksymiuk
*/
        Laptop() {
            marka = "brak";
            model = "brak";
            kolorobudowy = "brak";
            dlugoscprzekatnej = 0;
        };
/*
        nazwa funkcji: Laptop
        parametry wejœciowe: brak
        wartoœæ zwracana: brak
        informacje: funkcja do wprowadzania danych do obiektu
        autor: Bartosz Maksymiuk
*/
        void wpisz() {
            string marka1, model1, kolorobudowy1;
            double dlugoscprzekatnej1;

            cout<<"Podaj marke: "<<endl;
            cin>>marka1;
            cout<<"Podaj model: "<<endl;
            cin>>model1;
            cout<<"Podaj kolor obudowy: "<<endl;
            cin>>kolorobudowy1;
            cout<<"Podaj dlugosc przekatnej: "<<endl;
            cin>>dlugoscprzekatnej1;

            marka = marka1;
            model = model1;
            kolorobudowy = kolorobudowy1;
            dlugoscprzekatnej = dlugoscprzekatnej1;
        };
/*
        nazwa funkcji: wyswietl
        parametry wejœciowe: brak
        wartoœæ zwracana: brak
        informacje: funkcja do wypisywania danych z obiektu
        autor: Bartosz Maksymiuk
*/
        void wyswietl(){
            cout<<"\nmarka: "<<marka<<endl;
            cout<<"model: "<<model<<endl;
            cout<<"Kolor obudowy: "<<kolorobudowy<<endl;
            cout<<"Dlugosc przekatnej: "<<dlugoscprzekatnej<<"\n"<<endl;
        }
};

int main()
{
    PC komputeryStacjonarne[2];
    Laptop Laptopy[2];
    string marka1, model1, rodzajObudowy;

    for(int i=0; i<2; i++)
    {
        cout<<"podaj dane do komputera: \n\n";
        komputeryStacjonarne[i].wpiszPC();
    }
    for(int i=0; i<2; i++)
    {
        cout<<"podaj dane do laptopa: \n\n";
        Laptopy[i].wpisz();
    }

    for(int i=0; i<2; i++)
    {
        komputeryStacjonarne[i].wyswietl();
    }
    for(int i=0; i<2; i++)
    {
        Laptopy[i].wyswietl();
    }

    return 0;
}
