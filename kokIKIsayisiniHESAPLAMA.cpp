#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float KOKIKI=1, I=0, N, hesap;
	cout << "Kac adima kadar?\n";
	cin >> N;
	A10:
	KOKIKI=2+1/KOKIKI;
	I++;
	if (I>N){
		hesap=1+1/KOKIKI;
		cout << "kok 2 nin degeri = " << hesap;
	}else{
		goto A10;
	}
	getch();
	return 0;
}
