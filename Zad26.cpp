#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int tab[10];
	srand(time(NULL));	
	for(int i=0; i<10; i++)
	{
		tab[i] = rand()%10+1;
		cout<<"["<<i<<"]="<<tab[i]<<"  ";
	}
	cout<<endl<<"Tablica do kwadratu: "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<"["<<i<<"]="<<tab[i]*tab[i]<<" ";
	}
}
