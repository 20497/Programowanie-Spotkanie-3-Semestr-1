#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int tab[5][5];
	int wiersz1, wiersz2;
	srand(time(NULL));
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			tab[i][j] = rand()%20+1;
			cout<<" ["<<i<<"]["<<j<<"]= "<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Podaj indeks pierwszego wierszu do zamiany(od 0 do 3): ";
	cin>>wiersz1;
	cout<<endl<<"Podaj indeks drugiego wierszu do zamiany(od "<<wiersz1<<" do 4): ";
	cin>>wiersz2;
	cout<<endl<<"Macierz po zamianie wierszy prezentuje sie nastepujaco:"<<endl;
	int temp = 0;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
				if(i==wiersz1)
				{
					temp = tab[i][j];
					tab[i][j] = tab[wiersz2][j];
					tab[wiersz2][j] = temp;
				}
			cout<<" ["<<i<<"]["<<j<<"]= "<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
}





