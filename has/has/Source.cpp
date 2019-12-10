#include<iostream>
#include<conio.h>
#include<sstream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<cstring>
#include"search_class.h"
#include"struct_class.h"
#include"stack_class.h"
#include"result_func.h"
using namespace std;
int main()
{
	stack87 s;	system("cls");	int c;	system("COLOR 3E");
	for (int i = 0; i<79; i++){
		for (int j = 0; j<20000000; j++){
		}
		cout << "#";
		}s.design();
	do{
		cout << "-------------------------------------------------" << endl;
		cout << "|\tEnter 1 for Word Search          :      |" << endl;
		cout << "|\tEnter 2 for Word and Word Search :      |" << endl;
		cout << "|\tEnter 3 for Word or Word Search  :      |" << endl;
		cout << "|\tEnter 0 to Exit                  :      |" << endl;
		cin >> c;
		if (c == 1){ oneresult(); cout << "\n\n"; continue; }
		else
			if (c == 2)
			{
			secondresult(); cout << "\n\n"; continue;
			}
		if (c == 3){
			lastres(); cout << "\n\n"; continue;
		}
		if (c == 0){

			break;
		}
	} while (c != 0);
	cout << "BYE BYE SEE YOU LATER :D " << endl;
	getch();
	return 0;
}