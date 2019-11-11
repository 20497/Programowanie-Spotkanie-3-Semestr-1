#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int tab[5][5];
	int index1 = 0, index2 = 0;
	int max = 0;
	srand(time(NULL));
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			tab[i][j] = rand()%20+1;
			cout<<"["<<i<<"]["<<j<<"]="<<tab[i][j]<<endl;
			if(tab[i][j] > max)
			{
				max = tab[i][j];
				index1 = i;
				index2 = j;
			}
		}
		cout<<endl;
	}
	cout<<endl<<"Najwieksza wartosc w macierzy to: "<<max<<" na pozycji ["<<index1<<"]["<<index2<<"]";
}
