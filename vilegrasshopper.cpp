#include <bits/stdc++.h>
using namespace std ;





int main(){
	ios_base::sync_with_stdio(false);
	int y, p ; 
	cin>> y >> p;
	bool found = false ;
	int  check = 0 ;
	for(int i = p ; i >= 2 && i > y ; i--){
		 found = false ;
		 check = 0 ;
		for (int j = 2 ; j <= sqrt(i) && j <= y ; j++ ){
			check = 1 ;
			if (i % j == 0) {found = true ;break;}		
		}
		if (found == false && check != 0 ){cout << i ; return 0 ;} 
	}
	
	cout << "-1" ;

}
