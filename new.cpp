#include<iostream>
#include<conio.h>
#include<sstream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<cstring>
#include<stack>
using namespace std;
struct info{
	char str[100];
};
struct result{
	int a1, a2, a3, a4, a5, a6, a7, a8;
	int arrset[9];
	int arrresult[9];
};
result setresult(stack<int>);
stack<int> search(info in);
int main(){
	int c; 
	system("cls");	system("COLOR 7D");
	for (int i = 0; i<79; i++){
		for (int j = 0; j<20000000; j++){
		}
		cout << "#";
		}
	do{	cout << "-------------------------------------------------" << endl;
		cout << "|\tEnter 1 for Word Search          :      |" << endl;
		cout << "|\tEnter 2 for Word and Word Search :      |" << endl;
		cout << "|\tEnter 3 for Word or Word Search  :      |" << endl;
		cout << "|\tEnter 0 to Exit                  :      |" << endl;
		cin >> c;
		
		if(c==1){
			stack<int>s;	info in;	result r; int temp=0;
			cout<<"Enter Word you want to search :"<<endl;
			cin>>in.str;	s=search(in);	r=setresult(s);
			for(int i=9;i>0;i--){
				if(r.arrset[i] == 1){
					cout << "The Word " <<in.str<< " Found in textfile"<< i << " and repeats " << r.arrresult[i]<<" times." << endl;	temp++;
				}
			}if(temp==0){
				cout<<"Not found in any file "<<endl;
			}
		}else if(c==2){
			stack<int>s; stack<int>s1;int temp=0;	info in,in1; result r,r1; string l;
			cout<<"Enter two words :"<<endl;
			cin>>in.str>>l>>in1.str;	s=search(in);	r=setresult(s);	s1=search(in1);	r1=setresult(s1);
			for(int i=9;i>0;i--){
				if(r.arrset[i]==1 && r1.arrset[i]==1){
					cout<<"In textfile"<<i<<" Word "<<in.str<<" found "<<r.arrresult[i]<<" and word "<<in1.str<<" found "<<r1.arrresult[i]<<
					" times"<<endl;
					temp++;
				}
			}if(temp==0){
				cout<<"Not found in any file "<<endl;
			}
			
		}else if(c==3){
			stack<int>s;stack<int>s1; result r,r1;	info in,in1; string l;int temp=0;
			cout<<"Enter Two Words "<<endl;
			cin>>in.str>>l>>in1.str;	s=search(in);	r=setresult(s);	s1=search(in1);	r1=setresult(s1);
			for(int i=9;i>0;i--){
				if(r.arrset[i]==1 || r1.arrset[i]==1){
					cout<<"In textfile"<<i<<" Word "<<in.str<<" found "<<r.arrresult[i]<<" and word "<<in1.str<<" found "<<r1.arrresult[i]<<
					" times"<<endl;
					temp++;
				}
			}if(temp==0){
				cout<<"Not found in any file "<<endl;
			}
		}
	}while(c!=0); 
	return 0;
}
stack<int> search(info in){
	stack<int>s;
	
}


	h1.arrresult[1] = a; h1.arrresult[2] = b; h1.arrresult[3] = c; h1.arrresult[4] = d; h1.arrresult[5] = e;
	h1.arrresult[6] = f; h1.arrresult[7] = g; h1.arrresult[8] = h;
	return h1;
}
