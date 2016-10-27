// курсач.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iomanip"
#include "windows.h"
#include "iostream"
#include "conio.h"
#include "cmath"
#include "fstream"
#include <Windows.h>



using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
   SetConsoleCP (1251);
   SetConsoleOutputCP(1251);

   int m,v,kol,d;
   ofstream f;
   float chislo;
   bool t;


    cout << "Введите нижнюю границу диапозона от 0 до 19" << endl;

		 do
     {
      cin.clear();
      cin.sync();
      cin >> m;
      t=false;
      if (m < 0 || m>19)
	  {
	   t=true;
	   cout << "Ошибка ввода! Число не находится в нужном диапозоне! Повторите ввод." << endl;
	  }
     }
     while (cin.fail() ||t);


	cout << "Введите верхнюю границу диапозона от " << m << " до 19" << endl;
		 do
     {
      cin.clear();
      cin.sync();
      cin >> v;
      t=false;
      if (v < m || v>19)
	  {
	   t=true;
	   cout << "Ошибка ввода! Число не находится в нужном диапозоне! Повторите ввод." << endl;
	  }
    
     }
     while (cin.fail() ||t);



	kol=v-m+1;

	f.open("D:\\kursach\\proba.txt", ios::out);
	if(f){
	for (int i = 0; i<kol; i++) {
		chislo=pow(2,m)-1;
		f << chislo;
        m++;
		if (i!=kol-1)
		f << endl;
	} 
	}
	else cout<<" Файл не существует"<<endl;

	f.close();

	cout << "Числа сформированы и записаны в файл proba.txt" << endl;

	system("D:\\kursach\\docher\\Debug\\docher.exe");
	
	_getch();
	return 0;
}

