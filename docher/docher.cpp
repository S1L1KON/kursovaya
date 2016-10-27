// docher.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iomanip"
#include "windows.h"
#include "iostream"
#include "conio.h"
#include "cmath"
#include "fstream"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
   float prov,s;
   int k=0;
   fstream f;
   ofstream d;
   f.open("D:\\kursach\\proba.txt", ios::in);
   d.open("D:\\kursach\\finish.txt", ios::out);

   if (d){
   if (f){

   while (!f.eof())
                   {
	f >> prov;
	

	for (int i = 0; i<100; i++) {
		s=pow(2,i)-1;
		if (prov==s){
	d<<prov<<endl;
	k++;

	                     }
	}
	
                   } 
   d<< " Количество проверенных чисел=" << k <<endl;
   }
   else cout<<" Файл не существует"<<endl;
   }
     else cout<<" Файл не существует"<<endl;
   f.close();
   d.close();

	return 0;
}

