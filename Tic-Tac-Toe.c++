#include<iostream>
#include"dec.h"
//gloably defined
using namespace std;
string board[9] = {" "," "," "," "," "," "," "," "," ",};
int player = 1;
int position = 0;

void introduction()
{
	cout<<"press [enter] to begin: ";
	getchar();
	cout<<"\n";
	
	 cout<<"\n";
	cout<<"*************\n";
	cout<<"*Tic-Tac-Toe*\n";
	cout<<"*************\n";
	
	
    cout<<"     |     |      \n";
    cout<<"  1  |  2  |  3   \n";
    cout<<"_____|_____|______\n";
    cout<<"     |     |      \n";
    cout<<"  4  |  5  |  6   \n";
    cout<<"_____|_____|______\n";
    cout<<"     |     |      \n";
    cout<<"  7  |  8  |  9   \n";
    cout<<"     |     |      \n";
    
	
}

bool is_winner()
{
	//checking the rows
	
}
