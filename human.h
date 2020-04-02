///multi-player only 2 person 

/*int play1(int table[6][7],int p1, int & status) 
{
	    int num;
	    cout << "Player " << p1 << " Choose a column(1-7) : ";
		cin  >> num;
		num = num-1 ;
		cout << endl;
		
		
			for(int i=5;i>=0;i--) 
		{
			if(table[i][num]==0)
			{
			table[i][num]=1;
			status = 1;
			return i;
			}
			
		}
	     cout << "Column full Please another column, Choose a column(1-7) : "<<endl;
	     return 0;
		 
        
		
}

int play2(int table[6][7],int p1, int& status)
{       
        int num;
	    cout << "Player " << p1 << " Choose a column(1-7) : ";
		cin  >> num;
		num = num-1 ;
		cout << endl;

		
			for(int i=5;i>=0;i--) 
		{
			if(table[i][num]==0)
			{
			table[i][num]=2;
			status = 1;
			return i;
			
			}
			
		}
	     cout << "Column full Please another column, Choose a column(1-7) : "<<endl;
	    return 0;  
}

int victory(int table[6][7])
{
	int win = 0 ;									  
	int count = 1;
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 7; j++){
			if(table[i][j]!=0)
			for (int k = 0; k < 4; k++){
				for (int l = 0; l < 3; l++){
					if (k == 0 && j<4){
						if (table[i][j] == table[i][j + l + 1]){
							count++;
						}else{
							count = 1;
							break;
						}
					}else if (k == 1 && j<4 && i<3){
						if (table[i][j] == table[i+l+1][j + l + 1]){
							count++;
						}else{
							count = 1;
							break;
						}
					}else if(i<3 && k==2){
						if (table[i][j] == table[i+l+1][j]){
							count++;
						}else{
							count = 1;
							break;
						}
					}else if (i < 3 && j>2 && k == 3){
						if (table[i][j] == table[i +l+1][j-l-1]){
							count++;
						}else {
							count = 1;
							break;
						}
					}if (count == 4) 
					{
						win = table[i][j];
						return win;
					}
				}
			}
		}
	}

	return win;
}
*/
