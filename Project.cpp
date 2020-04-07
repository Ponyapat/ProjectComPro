#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main  () {
	int choice;

cout << "\n";
cout << "\n";	
cout << setw(60) << "Welcome" <<endl ;
cout << setw(60) << "To" << endl;
cout << setw(60) << "CONNECT 4 Game" << endl;
cout << "\n";
cout << setw(60) << "XOXOXOX" << endl;
cout << setw(60) << "OXOXOXO" << endl;
cout << setw(60) << "XOXOXOX" << endl;
cout << setw(60) << "OXOXOXO" << endl;
cout << setw(60) << "XOXOXOX" << endl;
cout << setw(60) << "OXOXOXO" << endl;
cout << "\n";



	
	while(choice != 3){
		cout << setw(60) << "1. Player 1 vs Player 2" << endl;
		cout << setw(60) << "2. Player vs AI" << endl;
		cout << setw(60) << "3. Exit";
		cout << "\n";
		cout << "\n";
		cout << setw(60) << "Input your choice : ";
		cin >> choice;

		if(choice == 1){
			cout << "human" << endl;
		}else if(choice == 2){
			cout << "bot" << endl;
		}else{
			cout << "End";
			}
		}
	
	return 0;
}
	




