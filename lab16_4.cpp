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

void shuffle(int &a,int &b,int &c,int &d) 
{
    int w = 0,x = 0,y = 0,z = 0;
	int dang[4] = {a,b,c,d};
	
	w = rand()%4;
    a = dang[w];

	while(x == w){
	 x = rand()%4;
	}b = dang[x];

	while(y == w or y == x){
	 y = rand()%4;
	}c = dang[y];

    while(z == x or z == w or z == y){
	 z = rand()%4;
	}d = dang[z];
}
