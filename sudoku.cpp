#include <bits/stdc++.h>

using namespace std;

   int a[10][10];
   
bool vargisia(int t, int x, int y) {
    for (int k = 1; k <= 9; k++) {
        if (a[x][k] == t || a[k][y] == t) return false;
    }

    int bx = ((x - 1) / 3) * 3 + 1;
    int by = ((y - 1) / 3) * 3 + 1;
    for (int i = bx; i < bx + 3; i++) {
        for (int j = by; j < by + 3; j++) {
            if (a[i][j] == t) return false;
        }
    }

    return true;
}
   
   
    bool shevseba(){    
	    for(int i=1; i<=9; i++)
       for(int j=1; j<=9; j++){
          if(a[i][j]==0){
          	for(int k=1; k<=9; k++){
          		if( vargisia(k,i,j)){  
          		a[i][j]=k; 
          		if (shevseba()) return true;
                        a[i][j] = 0; 

				  }	
			  }
			   return false;
		  }
	   }
        return true;
        
   }

int main() {
   
  int n; cin>>n;
  while(n--){
  	int x,y,t; cin>>x>>y>>t;
  	a[x][y]=t;
  }
  
  cout<<endl;
   cout<<"sudoku:" <<endl;
	    
	    cout<<"_____________________"<<endl;
	    for(int i=1; i<=9; i++){
	    	for(int j=1; j<=9; j++){
	    		cout<<a[i][j]<<' ';
	    		if(j%3==0)cout<<"|";
			}
			cout<<endl;
			if(i%3==0)cout<<"_____________________"<<endl;
		}
		
  
	    shevseba();
	    cout<<endl<<endl;
	     cout<<"amoxsnili sudoku:" <<endl;
	    
	    cout<<"_____________________"<<endl;
	    for(int i=1; i<=9; i++){
	    	for(int j=1; j<=9; j++){
	    		cout<<a[i][j]<<' ';
	    		if(j%3==0)cout<<"|";
			}
			cout<<endl;
			if(i%3==0)cout<<"_____________________"<<endl;
		}
		
		cin.ignore();
cin.get();
		
    return 0;
}