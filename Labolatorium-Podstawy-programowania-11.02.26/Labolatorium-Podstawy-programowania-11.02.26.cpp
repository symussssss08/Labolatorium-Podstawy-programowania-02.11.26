// Labolatorium-Podstawy-programowania-11.02.26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 



int main()
{
    /*

    // 1 przyklad

    int tab[10];
    tab[0] = 9;
    for(int i = 0; i < 10; i++)
    {
        cout << "Wartosc: " << tab[i] << endl;
    }

    // 2 przyklad

    const int tableSize = 10;
    int tab[tableSize];
    for(int i = 0; i < tableSize; i++)
    {
        tab[i] = i;
        cout << tab[i] << endl;
    }

    // 3 przyklad


    const int tableSize = 10;
    int tab[tableSize] = { 0 };
    for (int i = 0; i < tableSize; i++)
        cout << tab[i] << "   ";
    cout << endl;
    int tab2[tableSize] = { 99, 88 };
    for(int i = 0; i < tableSize; i++)
        cout << tab2[i] << "   ";
    cout << endl;
    int tab3[tableSize] = { 99, 88 };
    for (int i = 0; i < tableSize; i++)
        cout << tab3[i] << "   ";

    // 4 przyklad

    int n;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    int* table = new int[n];
    for (int i = 0; i < n; i++)
    {
        table[i] = i;
        cout << table[i] << endl;
    }

    // 5 przyklad

    int tab[2][3] = {  {1, 2, 3}, {4, 5, 6}   };
    cout << "Elementy macierzy: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << tab[i][j] << "   ";
            if (j == 2)
                cout << endl;
        }
    }


    // 6 przyklad

    int tab[5][5] = { 0 };
    cout << "Elementy macierzy: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << tab[i][j] << "   ";
            if (j == 4)
                cout << endl;
        }

    }

    // 7 przyklad

    bool isCorrect(int number);
    int liczba = 150;
    if (isCorrect(liczba) == true)
        cout << "Prawidlowa liczba" << endl;
    else
        cout << "Nieprawidlowa liczba " << endl;



    // Zadanie 1

    const int tableSize = 10;
    int tab[tableSize];
    for (int i = 0; i < tableSize; i++)
    {
        cout << "Podaj wartosc dla elementu tablicy nr " << i << ": ";
        cin >> tab[i];
    }
    for (int i = 9; i <= tableSize; i--)
    {

        cout << tab[i] << endl;

        if( i == 0)
            break;
    }


    // Zadanie 2
    int n;
    int* tab;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    tab = new int[n];
    tab[0] = 0;
    tab[1] = 1;
    cout << "Pierwszy element tablicy: << tab[0] << "drugi element tablicy: " << tab[1] << endl;
    for(int i = 2; i < n ; i++)
    {
        tab[i] = tab[i - 1] + tab[i - 2];
        cout << "Nastepny element tablicy" << tab[i] << endl;
    }

    // Zadanie 3

    int tablica[10];
    int suma = 0;






    int tab[10];
    tab[0] = 9;
    for (int i = 0; i < 10; i++)
    {
        cout << "Wartosc: " << tab[i] << endl;
    }
    return 0; \






const int tableSize = 10;
int tab[tableSize];
for (int i = 0; i < tableSize; i++) {
    tab[i] = i; //przypisanie i'temu elementowi tablicy wartosci i
    cout << tab[i] << endl;
}
return 0;





    //Zadania

    srand(time(NULL)); // inicjalizacja generatora pseudolosowego

    int tab[10];
    int suma = 0;

    // 1. Wypełnienie tablicy pseudolosowymi liczbami (1-100)
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 100 + 1;
        suma += tab[i];
    }

    // Obliczenie średniej
    double srednia = (double)suma / 10.0;

    // Zliczenie mniejszych od średniej oraz szukanie min/max w JEDNEJ pętli
    int ileMniejszych = 0;
    int minEl = tab[0];
    int maxEl = tab[0];

    for (int i = 0; i < 10; i++)
    {
        if (tab[i] < srednia) ileMniejszych++;
        if (tab[i] < minEl) minEl = tab[i];
        if (tab[i] > maxEl) maxEl = tab[i];
    }

    // Wyniki
    cout << "Srednia: " << srednia << endl;
    cout << "Mniejszych od sredniej: " << ileMniejszych << endl;
    cout << "Najmniejszy: " << minEl << endl;
    cout << "Najwiekszy: " << maxEl << endl;

    return 0;



    int tab[10];
    tab[0] = 9;
    for (int i = 0; i < 10; i++)
    {
        cout << "Wartosc: " << tab[i] << endl;
    }
    return 0;


    const int tableSize = 10;
    int tab[tableSize];
    for (int i = 0; i < tableSize; i++)
    {
        tab[i] = i;
        cout << tab[i] << endl;
    }
    return 0;


    const int tableSize = 10;
    int tab[tableSize] = { 0, 2 };
    for (int i = 0; i < tableSize; i++)
    {
        cout << tab[i] << "     ";
    }
    cout << endl;
    int tab2[tableSize] = { 99, 98 };
    for (int i = 0; i < tableSize; i++)
        cout << tab2[i] << "    ";
    cout << endl;
    int tab3[tableSize] = { 99 , 88 , 77 , 66 , 55 , 44 , 33 , 22 , 11 , 11 };
    for (int i = 0; i < tableSize; i++)
        cout << tab3[i] << "    ";



    return 0;




    int n;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    int* table = new int[n];
    for (int i = 0; i < n; i++)
    {
        table[i] = i;
        cout << table[i] << endl;
    }
    return 0;




    int zmienna = 234;
    cout << "rozmiar zmiennej:              " << sizeof(zmienna) << " bajtow" << endl;
    cout << "rozmiar typu danych char:      " << sizeof(char) << " bajtow" << endl;
    cout << "rozmiar typu danych short:     " << sizeof(short) << " bajtow" << endl;
    cout << "rozmiar typu danych int:       " << sizeof(int) << " bajtow" << endl;
    cout << "rozmiar typu danych long long: " << sizeof(long long) << " bajtow" << endl;
    cout << "rozmiar typu danych __int64:   " << sizeof(__int64) << " bajtow" << endl;
    cout << "rozmiar typu danych float:     " << sizeof(float) << " bajtow" << endl;
    cout << "rozmiar typu danych double:    " << sizeof(double) << " bajtow" << endl;
    //cout << "rozmiar typu danych __int128: " << sizeof(__int128) << " bajtow" << endl;
    //   typ __int128 niezdefiniowany w VS2022, podobno GCC (GNU Compiler
    //   Collection) wspiera go tez na 64-bitowej architekturze np. na Linuxie
    return 0;




        //pierwszy sposob deklaracji macierzy
    //int tab[2][3] = {
       //{ 1, 2, 3 },
       //{ 4, 5, 6 }
    //};  //uwaga! srednik obowiazkowy!
    //drugi sposob deklaracji macierzy
    int tab[2][3] = {1,2,3,4,5,6};
    cout << "elementy macierzy:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tab[i][j] << " ";
            if (j == 2)
                cout << endl;
        }
    }
    return 0;



    int tab[4][6] = { 0 };
    cout << "elementy macierzy: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << tab[i][j] << " ";
            if (j == 5)
               cout << endl;
        }

    }
    return 0;
    








    const int ROZMIAR = 10;
    int tablica[ROZMIAR];

    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica[i];
    }

    cout << "\nLiczby w odwrotnej kolejnosci:" << endl;
    for (int i = ROZMIAR - 1; i >= 0; i--) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;

   

    int n; 
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int* tab = new int[n];

    tab[0] = 0;
    tab[1] = 1; 
    
   
    for (int i = 2; i < n; i++)
    {
        tab[i] = tab[i - 1] + tab[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    delete[] tab; 
    return 0; 
    

    srand(time(0));
    int tab[10];
    int suma = 0; 
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 100 + 1; 
        suma += tab[i]; 
        cout << tab[i] << " ";
    }
    double srednia = suma / 10.0;
    int ileMniejszych = 0; 
    int min = tab[0]; 
    int max = tab[0]; 
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] < srednia) ileMniejszych++;
        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    cout << "\nŚrednia: " << srednia << endl;
    cout << "Mniejszych od średniej: " << ileMniejszych << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;

    

    int n; 
    cout << "Podaj wielkosc tablicy: ";
    cin >> n; 
    int* tab = new int[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = i + 1; 
        cout << tab[i] << endl; 
    }
    delete[0] tab; 
    return 0;
   
    
    


   
    int tablica[4][5];
    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            tablica[a][b] = 3;
            cout << tablica[a][b] << "\t";
        }
        cout << endl;
    }

    



    // Zadanie 1
    
    int tab[10];
    for (int a = 0; a < 10; a++)
    {
        cout << "Podaj wartosc dla elementu [" << a << "]: ";
        cin >> tab[a];
    } 
    cout << "\nElementy w odwrotnej kolejnosci: " << endl;
    for (int b = 9; b >= 0 ; b--)
        {
            cout << tab[b] << endl;
        }
    
    // Zadanie 2

    int n; 
    cout << "Podaj ile elementow chcesz: ";
    cin >> n; 
    int* tab = new int[n];
    tab[0] = 1; 
    tab[1] = 1; 
    cout << "Wartosc elementu [0]: " << tab[0] << endl << "Wartosc elementu [1]: " << tab[1] << endl;
    for (int a = 2; a < n; a++)
    {
        tab[a] = tab[a - 1] + tab[a -2];
        cout << "Wartosc elementu [" << a << "]: " << tab[a] << "\n";
    }
    cout << endl;
    
    // Zadanie 3


    srand(time(NULL));
    int x = 0;
    double wynik_dodawania = 0.0;
    int tab[10]; 

    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 100 + 1;
        cout << "Wartosc elementu [" << i << "]: " << tab[i] << endl;
    }
    for (int b = 0; b < 10;b++)
    {
        wynik_dodawania = wynik_dodawania + tab[b];

    }
    double srednia = wynik_dodawania/10;
    int min_liczba = tab[0];
    int max_liczba = tab[0];
    cout << "Srednia liczb: " << srednia << endl;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] > srednia)
        {
            cout << "Liczby wieksze od sredniej : " << tab[i] << endl;
        }
        if (tab[i] < min_liczba)
        {
            min_liczba = tab[i];
        }
        if (tab[i] > max_liczba)
        {
            max_liczba = tab[i];
        }
    }
    cout << "Najmniejsza liczba: " << min_liczba << endl;
    cout << "Najwieksza liczba: " << max_liczba << endl;
    
    // Zadanie 4 


    int tab[10] = {0};
    double n; 
    int dodawanie = 0;
    cout << "Podaj ile chcesz wprowadzic elementow do tablicy: ";
    cin >> n;
    if (n < 0 || n > 10)
    {
        cout << "Bledna liczba elementow" << endl;
        return 1; 
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj liczbe [" << i << "]: ";
        cin >> tab[i]; 
    }
    cout << "Zawartosc calej tablicy: " << endl;
    int min = tab[0];
    int max = tab[0]; 
    for (int i = 0; i < 10; i++)
    {
        cout << "Element [" << i << "]: " << tab[i] << endl;
    }
    for (int b = 0; b < 10; b++)
    {
        dodawanie = dodawanie + tab[b]; 
        if (tab[b] < min)
        {
            min = tab[b];
        }
        if (tab[b] > max)
        {
            max = tab[b];
        }
    }
    double srednia = dodawanie / 10.0; 
    cout <<  "Srednia: " << srednia << endl;
    cout << "Liczba minimialna: " << min << endl;
    cout << "Liczba maxymalna: " << max << endl;
    
    // Zadanie 5 

    srand(time(NULL));
    int licznik = 0;
    int tab[10]; 
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 11; 
        cout << "Element tablicy [" << i << "]: " << tab[i] << endl;
    }
    int szczesliwa = rand() % 11; 
    cout << "Szczesliwa liczba: " << szczesliwa << endl;

    for (int i = 0; i < 10; i++)
    {
        if (tab[i] == szczesliwa)
        {
            licznik++;
        }
    }
    cout << "Tyle razy szczesliwa liczba została wyslosowana: " << licznik << endl;
    
    //Zadanie 6
    
    int tab1[4][4];
    int tab2[4][4];
    int wynik[4][4];
    srand(time(NULL));

    for(int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            tab1[a][b] = rand() % 10; 
            tab2[a][b] = rand() % 10; 
            cout << tab1[a][b] << "\t";
            cout << tab2[a][b] << "\t";
        }
        cout << endl;
        
        
    }
    for(int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
        {
          
            wynik[a][b] = tab1[a][b] + tab2[a][b];
            cout << wynik[a][b] << "\t";
        }
        cout << endl;
        
    }
    
    //Zadanie 7

    const int N = 4;
    int tab1[N][N];
    int tab2[N][N];
    int wynik[N][N] = { 0 };

    srand(time(NULL));

    for (int a = 0; a < N; a++)
    {
        for (int b = 0; b < N; b++)
        {
            tab1[a][b] = rand() % 10;
            tab2[a][b] = rand() % 10;

        }
        


    }
    cout << "Macierz 1 = " << endl;
    for (int a = 0; a < N; a++)
    {
        for (int b = 0; b < N; b++)
        {
            cout << tab1[a][b] << "\t";
            cout << endl;
        }
    }
    cout << "\nMacierz 2 = " << endl;
    for (int a = 0; a < N; a++)
    {
        for (int b = 0; b < N; b++)
        {
            cout << tab2[a][b] << "\t";
            cout << endl;
        }
    }
    for (int a = 0; a < N; a++)
    {
        for (int b = 0; b < N;b++)
        {
            for (int k = 0; k < N; k++)
            {
                wynik[a][b] += tab1[a][k] * tab2[k][b];
            }
        }
    }
    cout << "\nWynik mnozenia macierzy:" << endl;
    for (int a = 0; a < N; a++)
    {
        for (int b = 0; b < N; b++)
        {
            cout << wynik[a][b] << "\t";
        }
        cout << endl;
    }

    return 0;
    
    //Zadanie 8 

    srand(time(NULL));
    const int n = 3; 
    int tab[n][n];
    cout << "Podaj elementy macierzy " << n << "x" << n << ":" << endl;
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            cout << "Element [" << a << "][" << b << "]: ";
            tab[a][b] = rand() % 100 + 1;

        }
       
    }
    cout << "\nTwoja macierz: " << endl;
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            cout << tab[a][b] << "\t";
        }
        cout << endl;
    }

    int suma = 0; 
    for (int i = 0; i < n;i++)
    {
        suma += tab[i][i];
    }
    cout << "\nSuma liczb na przekotnej: " << suma << endl;
    return 0; 
    
    //Zadanie 9



    int tab[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj wartosc tablicy dla ["<< i + 1 <<"] elementu:";
        cin >> tab[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp; 
            }
        }
    }
    cout << "\nPosortowana tablica rosnoco: " << endl; 
    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << " ";
    }
    return 0; 

    */

    //Zadanie 10



    srand(time(NULL));
    int tab[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8;j++)
        {
            tab[i][j] = rand() % 100 + 1; 
        }
    }
    cout << "\ntwoja macierz: " << endl; 
    for (int a = 0; a < 8; a++)
    {
        for (int b = 0; b < 8; b++)
        {
            cout << tab[a][b] << "\t";
        }
        cout << endl; 
    }
    
    int suma_z_wierszy = 0;
    int suma_z_kolumn = 0; 
   

    cout << "\n--- Sumy wierszy ---" << endl;

    for (int i = 0; i < 8; i++)
    {
         int suma_wiersza = 0;
         for (int j = 0; j < 8; j++)
         {
             suma_wiersza += tab[i][j];
         }
         cout << "Suma wiersza [" << i + 1 << "]:" << suma_wiersza << endl; 
         suma_z_wierszy += suma_wiersza;
    }
    for (int j = 0; j < 8; j++)
    {
        int suma_kolumny = 0; 
        for (int i = 0; i < 8; i++)
        {
            suma_kolumny += tab[i][j];
        }
        cout << "Suma kolumn [" << j + 1 << "]:" << suma_kolumny << endl;
        suma_z_kolumn += suma_kolumny;
    }

    cout << "\n--- Podsumowanie ---" << endl;
    cout << "Suma wszystkich elementow(wg wierszy): " << suma_z_wierszy << endl;
    cout << "Suma wszystkich elementow(wg kolumn): " << suma_z_kolumn << endl;

    if (suma_z_wierszy == suma_z_kolumn)
    {
        cout << "Weryfikacja poprawna: obie sumy sa takie same" << endl;
    }
    else
    {
        cout << "sumy roznia sie " << endl; 
    }
    return 0; 



   
        




    

    



    









    

    
   
    
    
   
    
    

   

    














}

