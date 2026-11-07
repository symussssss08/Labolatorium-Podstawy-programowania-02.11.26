// Labolatorium-Podstawy-programowania-11.02.26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

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
*/

    // Zadanie 3 

    int tablica[10]; 
    int suma = 0; 
    
    
}