#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &x,int &y,int &z,int &i){
    int g[]={x,y,z,i};
    int a = rand()%4;
    int b = rand()%4;
	int c = rand()%4;
	int d = rand()%4;

	while(a==b || c==d || a==c || a==d || b==c || b==d ){
	 a = rand()%4;
     b = rand()%4;
	 c = rand()%4;
	 d = rand()%4;
	}

	x=g[a];
	y=g[b];
	z=g[c];
	i=g[d];
}
