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
	char getword[100];	string line, filename;
	ifstream myfile;	int temp1=1;
	string st1 = "Textfile";	string ext = ".txt";
	for (int i = 1; i<9; i++){
		stringstream ss;	
		ss << i;
		filename = st1 + ss.str() + ext;
		myfile.open(filename.c_str());
		if (myfile.is_open()){
			while (myfile >> getword){
				if (strcmp(in.str, getword) == 0){
					s.push(temp1);
				}
			}
		}
		myfile.close();	temp1++;
	}temp1 = 0;
	return s;
}

result setresult(stack<int>s){	
	int sizeg = s.size(); int forpop;	result h1; int a,b,c,d,e,f,g,h;	a=b=c=d=e=f=g=h=0;
	for (int i = 0; i < sizeg; i++){
		forpop = s.top();
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
		s.pop();
	}
	h1.arrresult[1] = a; h1.arrresult[2] = b; h1.arrresult[3] = c; h1.arrresult[4] = d; h1.arrresult[5] = e;
	h1.arrresult[6] = f; h1.arrresult[7] = g; h1.arrresult[8] = h;
	return h1;
}
