#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int tab[10];
	srand(time(NULL));
	int x=20;
	int index=0;
	for(int i=0; i<10; i++)
	{
		tab[i] = rand()%20+1;
		cout<<"["<<i<<"]="<<tab[i]<<" ";
	}
	for(int i=0; i<10; i++)
	{
		if(x>tab[i])
		{
			x = tab[i];
			index = i;
		}
	}
	cout<<endl<<"Najmniejsza wartosc to: ["<<index<<"]="<<x;
}
