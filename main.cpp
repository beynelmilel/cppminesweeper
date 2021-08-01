
#include <iostream>
#include <ctime>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>  
using namespace std;
	
int main(int argc, char** argv) {
	int satir,sutun,yanma=0,x,y,toprak=0;
	setlocale(LC_ALL, "Turkish"); 
	srand(time(NULL));
	cout << "Sütun ve Satır Sayısı Girin(Sütun Satır)" << endl;
	cin >> sutun >> satir;
		int mayintarlasi[satir][sutun];
		int gorunentarla[satir][sutun];
		for (int i=0;i<satir;i++)
			for (int j=0;j<sutun;j++){
				mayintarlasi[i][j] = rand()%2;
				if (mayintarlasi[i][j]==0)
					toprak++;
				gorunentarla[i][j] = 5;
			}
		for (int i=0;i<satir;i++){
			for (int j=0;j<sutun;j++){
				cout << gorunentarla[i][j] << " ";
			}
			cout << endl;
		}
		while(yanma==0){
			cout << "Y ve X'i Girin" << endl;
			cin >> y >> x;
			if(y<satir && y >=0 && x<sutun && x >=0){
				gorunentarla[y][x] = mayintarlasi[y][x];
				if(gorunentarla[y][x] == 1){
					yanma = 1;
				}else if(gorunentarla[y][x] == 0){
					toprak--;
				}
			}
			if(toprak==0)
				yanma = 2;
				cout<<"Tebrikler bir toprak daha buldunuz kalan toprak ="<<toprak<<endl;
			for (int i=0;i<satir;i++){
				for (int j=0;j<sutun;j++){
					cout << gorunentarla[i][j] << " ";
				}
				cout << endl;
			}	
		}
		if(yanma==1){
			cout << "Mayına Bastınız!" << endl;
			for (int i=0;i<satir;i++){
				for (int j=0;j<sutun;j++){
					cout << mayintarlasi[i][j] << " ";
				}
				cout << endl;
			}
		}
		if(yanma==2){
			cout << "Tüm Toprakları Buldunuz Tebrikler" << endl;
			for (int i=0;i<satir;i++){
				for (int j=0;j<sutun;j++){
					cout << mayintarlasi[i][j] << " ";
				}
				cout << endl;
			}
		}
		getch();
	return 0;
	
}
