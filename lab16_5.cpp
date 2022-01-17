#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a , int *b , int *c , int *d){

	int n[4] ;
	int m[4] ;

	int p = 0 , q = 0 , r = 0 , s = 0 ;
	n[0] = *a , n[1] = *b , n[2] = *c , n[3] = *d ;
	p = rand()%4 ;
	m[0] = n[p] ;
	n[p] = 0 ;
	
	do{
		q = rand()%4 ;
	}while(n[q] == 0) ;
	m[1] = n[q] ;
	n[q] = 0 ;

	do{
		r = rand()%4 ;
	}while(n[r] == 0) ;
	m[2] = n[r] ;
	n[r] = 0 ;

	do{
		s = rand()%4 ;
	}while(n[s] == 0) ;
	m[3] = n[s] ;

	*a = m[0] , *b = m[1] , *c = m[2] , *d = m[3] ;
	
	}