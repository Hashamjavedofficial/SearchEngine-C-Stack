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
stack87 s; search obj, obj1; hasham ha, ha1; int c1; string st;
void oneresult(void){
	hasham t1; int temp = 0;
	cout << "Enter the word you want to search : " ;
	cin >> ha.str;
	obj.sea(ha); t1 = obj.result();
	for (int i = 0; i < 9; i++){
		if (t1.arrset[i] == 1){
			cout << "The Word " << ha.str << " Found in TEXTFILE(" << i << ") and repeats \" " << t1.arrresult[i] << " \" times." << endl; temp++;
		}
	}if (temp == 0){
		cout << "Word does not find in any file " << endl;
	}
	for (int i = 0; i < 9; i++){
		t1.arrresult[i] = 0; t1.arrset[i] = 0; 
	}
	obj.reset(t1);	
}
void secondresult(void){
	hasham t1, t2; int temp1 = 0;
	cout << "Enter two Words : " ;
	cin >> ha.str >> st >> ha1.str;
	obj.sea(ha); t1 = obj.result();
	obj1.sea(ha1);		t2 = obj1.result();
	for (int i = 0; i < 9; i++){
		if (t1.arrset[i] == 1 && t2.arrset[i] == 1){
			cout << "In TEXTFILE(" <<i << ") " << ha.str << " repeats \" "
				<< t1.arrresult[i] << " \" and " << ha1.str << " repeats \" " << t2.arrresult[i] << " \" times." << endl; temp1++;
		}
	}if (temp1 == 0){
		cout << "Both words are not found in any file :D" << endl;	
	}temp1 = 0;
	for (int i = 0; i < 9; i++){
		t1.arrresult[i] = 0; t1.arrset[i] = 0; t2.arrresult[i] = 0; t2.arrset[i] = 0;
	}
	obj.reset(t1);	obj1.reset(t2);
}
void lastres(void){
	hasham t1, t2; int temp1 = 0;
	cout << "Enter two Words : ";
	cin >> ha.str >> st >> ha1.str;
	obj.sea(ha); t1 = obj.result();
	obj1.sea(ha1);		t2 = obj1.result();
	for (int i = 0; i < 9; i++){
		if (t1.arrset[i] == 1 || t2.arrset[i]==1){
			cout << "In TEXTFILE(" << i << ") Word " << ha.str << " repeats \" " << t1.arrresult[i] << " \" and Word " << ha1.str <<
				" repeats \" " << t2.arrresult[i] << " \" times." << endl;
			temp1++;
		}
	}if (temp1 == 0){ cout << "The words not found in any files :D" << endl; }temp1 = 0;

	for (int i = 0; i < 9; i++){
		t1.arrresult[i] = 0; t1.arrset[i] = 0; t2.arrresult[i] = 0; t2.arrset[i] = 0;
	}
	obj.reset(t1);	obj1.reset(t2);
}