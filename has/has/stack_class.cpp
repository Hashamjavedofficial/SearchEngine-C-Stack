#include<iostream>
#include<conio.h>
#include<sstream>
#include<fstream>
#include<string.h>
#include<cstring>
#include"struct_class.h"
#include"stack_class.h"
using namespace std;
int arr[100];
int top = 0;
int data;
void stack87::push1(int n){
	if (top == 100){
		cout << "Stack is full " << endl;
	}
	else{
		top++;
		arr[top] = n;
	}
}
int stack87::pop1(void){
	int data;
	if (top == 0){
		cout << "Stack is Empty dear :D " << endl;
	}
	else{
		data = arr[top];
		top--;
		return data;
	}
}
int stack87::top1(void){
	data = arr[top];
	return data;
}
void stack87::empty1(void){
	if (top == 0){
		cout << "Stack is Empty " << endl;
	}
	else{
		cout << "Stack is not Empty " << endl;
	}
}
int stack87::size1(void){
	int temp = 0;
	while (temp != 100){
		if (top > 0){
			temp++;
			top--;
		}
		else if (top == 0){
			top = top + temp;
			return temp;
			break;
		}
	}
}
void stack87::design(){
	for (int i = 0; i<7; i++){
		for (int j = 0; j<50000000; j++){
		}
		if (i == 0){
			cout << " #                                                                             #" << endl;
		}
		else if (i == 1){
			cout << "#      ******    *******    *****      *********     *******       **    **   #" << endl;
		}
		else if (i == 2){
			cout << "#     ***       **         **  **     **    ****    ***           **    **    #" << endl;
		}
		else if (i == 3){
			cout << "#      ***     *****      ** * **    **  *****     ***           ********     #" << endl;
		}
		else if (i == 4){
			cout << "#       ***   **         **    **   **    **        ***         **    **      #" << endl;
		}
		else if (i == 5){
			cout << "#   ******   *******    **     **  **      **        *******   **    **       #" << endl;
		}
		else if (i == 6){
			cout << "###############################################################################" << endl;
		}
	}
}