#include<iostream>

using namespace std;

void tablebg(int [][7]); // table 7 x 6

int main  () {


	int table [6][7] = {};

	tablebg (table);
	
}
	

void tablebg (int table[6][7])  {
	
	for(int i=0 ; i<6 ; i++){
		for(int j=0 ;j<7;j++){
			if(table[i][j]==0)	{cout << "  ";}
			cout << "|";
		}
		cout <<endl <<"______________________"<< endl;
	}		
	
	cout<<" 1  2  3  4  5  6  7\n";  
	
}


