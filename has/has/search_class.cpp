#include"search_class.h"
#include<fstream>
#include<iostream>
#include<sstream>
#include<string.h>
#include"stack_class.h"
#include"struct_class.h"
#include<cstring>
using namespace std;
stack87 s1,s2;
void search::sea(hasham h){
	char getword[100];	string line, filename;
	ifstream myfile;	int temp1=0;
	string st1 = "Textfile";	string ext = ".txt";
	for (int i = 1; i<9; i++){
		stringstream ss;	temp1++;
		ss << i;
		filename = st1 + ss.str() + ext;
		myfile.open(filename.c_str());
		if (myfile.is_open()){
			while (myfile >> getword){
				if (strcmp(h.str, getword) == 0){
					s1.push1(temp1);
				}
			}
		}
		myfile.close();
	}temp1 = 0;
}
hasham search::result(void){
	hasham h1;
	int sizeg = s1.size1(); int forpop;	int a, b, c, d, e, f, g, h;	a = b = c = d = e = f = g = h = 0;
	for (int i = 0; i < sizeg; i++){
		forpop = s1.pop1();
		if (forpop == 1){
			a++;	h1.arrset[1] = 1;
		}
		else if (forpop == 2){
			b++;	h1.arrset[2] = 1;
		}
		else if (forpop == 3){
			c++;	h1.arrset[3] = 1;
		}
		else if (forpop == 4){
			d++;	h1.arrset[4] = 1;
		}
		else if (forpop == 5){
			e++;	h1.arrset[5] = 1;
		}
		else if (forpop == 6){
			f++;	h1.arrset[6] = 1;
		}
		else if (forpop == 7){
			g++;	h1.arrset[7] = 1;
		}
		else if (forpop == 8){
			h++;	h1.arrset[8] = 1;
		}
	}
	h1.arrresult[1] = a; h1.arrresult[2] = b; h1.arrresult[3] = c; h1.arrresult[4] = d; h1.arrresult[5] = e;
	h1.arrresult[6] = f; h1.arrresult[7] = g; h1.arrresult[8] = h;
	return h1;
}
void search::reset(hasham h1){
	for (int i = 1; i < 9; i++){
		h1.arrresult[i] = 0;
		h1.arrset[i] = 0;
	}
	h1.a1 = h1.a2 = h1.a3 = h1.a4 = h1.a6 = h1.a5 = h1.a7 = h1.a8 = 0;
}