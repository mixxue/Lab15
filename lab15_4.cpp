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
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int arr[] = {a,b,c,d};
	for(int i=0; i<2; i++){
		int x = rand()%4;
		int y = rand()%4;
		swap(arr[x],arr[y]);
	}
	a = arr[0];
	b = arr[1];
	c = arr[2];
	d = arr[3];
}
//Do not modify source code above this line